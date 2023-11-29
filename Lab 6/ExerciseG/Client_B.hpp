#ifndef CLIENT_B_HPP
#define CLIENT_B_HPP

#include "LoginServer.hpp"

class Client_B {
public:
    void add(std::string username, std::string password);
    User* validate(std::string username, std::string password);
};

#endif // CLIENT_B_HPP
