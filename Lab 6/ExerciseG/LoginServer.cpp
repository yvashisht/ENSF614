#include <iostream>
#include <vector>
#include <string>

#include "LoginServer.hpp"
#include "Client_A.hpp"
#include "Client_B.hpp"

using namespace std;

LoginServer* LoginServer::instance = nullptr;

static LoginServer* getInstance() {
if (instance == nullptr) {
    instance = new LoginServer();
}
return instance;
}

void add(std::string username, std::string password) {
for (const auto& user : users) {
    if (user.username == username) {
        return;
    }
}
users.push_back(User{username, password});
}

User* validate(string username, string password) {
    for (auto&user : users) {
        if (user.username == username && user.password == password) {
            return &user;
        }
    }
    return nullptr;
}