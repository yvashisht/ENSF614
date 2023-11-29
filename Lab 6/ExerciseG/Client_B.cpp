#include "LoginServer.hpp"
#include "Client_A.hpp"
#include "Client_B.hpp"

using namespace std;

void add(std::string username, std::string password) {
    LoginServer::getInstance()->add(username, password);
}

User* validate(std::string username, std::string password) {
    return LoginServer::getInstance()->validate(username, password);
}

