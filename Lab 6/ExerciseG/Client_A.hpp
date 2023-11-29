#ifndef CLIENT_A_HPP
#define CLIENT_A_HPP

#include "LoginServer.hpp"

class Client_A {
public:
    void add(std::string username, std::string password);
    User* validate(std::string username, std::string password);
};

#endif // CLIENT_A_HPP
