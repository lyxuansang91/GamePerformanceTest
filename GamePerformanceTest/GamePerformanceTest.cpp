// GamePerformanceTest.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include <thread>
#include <chrono>
#include "Utils/NetworkManager.h"
#include "Utils/Common.h"
#include "Utils/DefaultSocket.h"
#include <ctime>
#include <random>
#include "protobufObject/register.pb.h"
#include <mutex>
#include "MersenneTwister.h"
#define SERVER_NAME "192.168.100.32"
#define SERVER_PORT 1240

using namespace std; 

std::string sessionId; 
vector<string> phones; 
bool isConnected = true; 

void initialMessageResponseHandler() {
    BINInitializeResponse *init_response = (BINInitializeResponse*)
        Common::getInstance()->checkEvent(NetworkManager::INITIALIZE);

    if (init_response != 0) {
        //cout << "init response:" <<  init_response->DebugString().c_str() << endl;
        NetworkManager::setInitialize(init_response->responsecode());
        if (init_response->responsecode()) {
            Common::getInstance()->setEnablePurchaseCash(init_response->enablepurchasecash());
            Common::getInstance()->setEnableTopup(init_response->enabletopup());
        }
        else {
            //
        }
    }
}

void pingMessageResponseHandler() {
    BINPingResponse *pingresponse = (BINPingResponse*) Common::getInstance()->checkEvent(NetworkManager::PING);
    if (pingresponse != 0) {
        //CCLOG("ping response: %s", pingresponse->DebugString().c_str());
        //cout << "ping response: " << pingresponse->DebugString().c_str() << endl;
        if (pingresponse->disconnect()) {
            Common::getInstance()->setSessionId("-1");
            NetworkManager::getInstance()->closeConnection();
        }
        else {
            //TODO:SangLX
        }
    }
}

void saveUserInfo(BINUserInfo userInfo) {
    Common::getInstance()->setUserName(userInfo.username());
    if (userInfo.has_displayname()) {
        Common::getInstance()->setDisplayName(userInfo.displayname());
    }

    if (userInfo.has_level()) {
        Common::getInstance()->setLevel(userInfo.level().level());
    }

    if (userInfo.has_cash()) {
        Common::getInstance()->setCash(userInfo.cash());
    }

    if (userInfo.has_gold()) {
        Common::getInstance()->setGold(userInfo.gold());
    }

    if (userInfo.has_avatarid()) {
        Common::getInstance()->setAvatarId((int)userInfo.avatarid());
    }

    if (userInfo.has_mobile()){
        Common::getInstance()->setPhoneNunber(userInfo.mobile());
    }
}

void saveUserSetting(BINUserSetting userSetting) {
    if (userSetting.has_autoready()) {
        Common::getInstance()->setAutoReady(userSetting.autoready());
     //   setPrefs(AUTOREADY, userSetting.autoready());
    }

    if (userSetting.has_autodenyinvitation()) {
        Common::getInstance()->setAutoDenyInvitation(userSetting.autodenyinvitation());
       // setPrefs(DENY_INVITES, userSetting.autodenyinvitation());
    }
}

void loginMessageResponseHandler() {
    BINLoginResponse* loginresponse = (BINLoginResponse *)Common::getInstance()->checkEvent(NetworkManager::LOGIN);
    if (loginresponse != 0) {
        //cout << "login response: " << loginresponse->DebugString().c_str() << endl;
        if (loginresponse->responsecode()) {
            std::string session_id = loginresponse->sessionid();

            if (loginresponse->has_userinfo()) {
                saveUserInfo(loginresponse->userinfo());
            }
            if (loginresponse->has_usersetting()) {
                saveUserSetting(loginresponse->usersetting());
            }
            Common::getInstance()->setSessionId(session_id);
        }
        else {
        }
        // Code kill room index
        if (Common::getInstance()->getUserName() == "sanglx") {
            NetworkManager::getInstance()->getKillRoomMessageFromServer(4, 10);
        }
    }
}

void exampleRequest() {
    cout << "example request " << endl;

    NetworkManager::getInstance()->getLoginMessageFromServer("huyenvt2", "12345678");
}


void registerMessageResponseHandler() {

}

void requestMessage(DefaultSocket *socket, google::protobuf::Message *message, int message_id,
    std::string session_id) {

    int len;
    char* ack_buf = NetworkManager::getInstance()->initData(message,
        Common::getInstance()->getOS(), message_id, session_id, len);
    socket->sendData(ack_buf, len);
    
    
}

void loginRequest(int i) {


    vector<pair<google::protobuf::Message*, int>> lst_messages;
  
    auto socket = new DefaultSocket();
    socket->connectSocket(SERVER_NAME, SERVER_PORT);

    auto init_message = NetworkManager::getInstance()->initInitializeMessage(
        Common::getInstance()->getCp(), Common::getInstance()->getAppVersion(), 
        Common::getInstance()->getCountry(), Common::getInstance()->getLanguage(),
        Common::getInstance()->getDeviceId(), Common::getInstance()->getDeviceInfo(), 
        Common::getInstance()->getIpaddress(), Common::getInstance()->getPackageName()
        );
    requestMessage(socket, init_message, NetworkManager::INITIALIZE, "");

    Common::getInstance()->sleep(100);
    
    char user_name[40];
    sprintf(user_name, "dieplx_%d", i + 1);

    auto login_message = NetworkManager::getInstance()->initLoginMessage(string(user_name), "123456789");
    requestMessage(socket, login_message, NetworkManager::LOGIN, "");

    while (isConnected) {
        vector<char> buffer_read(4096);
        int buffer_len = socket->readData(buffer_read, 4096);
        vector<pair<google::protobuf::Message*, int>> lst_messages =
            NetworkManager::getInstance()->parseFrom(buffer_read, buffer_len);
        if (buffer_len > 0) {
        }
        
        Common::getInstance()->sleep(100);
    }
    socket->closeSocket();
}

int random_in_range(int min, int max) {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uniform(min, max);
    return uniform(rng);
}

std::string random_string(int length)
{
    mutex mtx; 
    std::string s = "";
   
    static const char alphanum[] = 
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int max_length = sizeof(alphanum)-1; 


    for (int i = 0; i < length; i++) {
        int index = random_in_range(0, max_length);
        s += alphanum[index]; 
    }

    return s;
}

void registerRequest(int i, string phone) {
    
    vector<pair<google::protobuf::Message*, int>> lst_messages;
    vector<char> buffer_read(4096);
    int buffer_len; 
    auto socket = new DefaultSocket(); 
    socket->connectSocket(SERVER_NAME, SERVER_PORT);

    auto init_message = NetworkManager::getInstance()->initInitializeMessage(
        Common::getInstance()->getCp(), Common::getInstance()->getAppVersion(),
        Common::getInstance()->getCountry(), Common::getInstance()->getLanguage(),
        Common::getInstance()->getDeviceId(), Common::getInstance()->getDeviceInfo(),
        Common::getInstance()->getIpaddress(), Common::getInstance()->getPackageName()
        );
    requestMessage(socket, init_message, NetworkManager::INITIALIZE, "");

    Common::getInstance()->sleep(100);

    char user_name[40];
    sprintf(user_name, "sanglx_%d", i + 1);

    auto message = NetworkManager::getInstance()->initRegisterMessage(
        std::string(user_name), "12345678", "12345678", std::string(user_name), phone);
    requestMessage(socket, message, NetworkManager::REGISTER, "");

    while (isConnected) {
        vector<char> buffer_read(4096);
        int buffer_len = socket->readData(buffer_read, 4096);
        vector<pair<google::protobuf::Message*, int>> lst_messages =
            NetworkManager::getInstance()->parseFrom(buffer_read, buffer_len);
        if (buffer_len > 0) {
        }

        Common::getInstance()->sleep(100);
    }
    socket->closeSocket();
}

void initPhone() {
    std::string s;
    std::ifstream infile("4.0.txt");
    while (std::getline(infile, s)){
        if (s[0] != '0') {
            s = '0' + s; 
        }
        phones.push_back(s);
        //cout << s << endl;
    }
    infile.close();
}

int main(int argc, char* argv[])
{

    initPhone();

    cout << "phone size: " << phones.size() << endl;
    
    std::thread *t[1000];
   
    for (int i = 0; i < 200; i++) {
        t[i] = new std::thread(&loginRequest, i);
        if (t[i]->joinable())
            t[i]->detach(); 
    } 

    for (int i = 200; i < 600; i++) {
        t[i] = new std::thread(&registerRequest, i, phones[i]);
        if (t[i]->joinable())
            t[i]->detach();
    }
    int choice; 
    cout << "input choice: ";  cin >> choice; 
    if (choice == 1) {
        isConnected = false; 
    } else  isConnected = true;
    return 0;
}

