#ifndef LOGINSERVER_HPP
#define LOGINSERVER_HPP

#include "User.hpp"
#include <vector>

class LoginServer {
    static LoginServer* instance;
    std::vector<User> users;

    LoginServer() {}

public:
    static LoginServer* getInstance();
    void add(std::string username, std::string password);
    User* validate(std::string username, std::string password);
};

#endif // LOGINSERVER_HPP
