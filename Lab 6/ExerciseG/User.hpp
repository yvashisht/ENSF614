#ifndef USER_HPP
#define USER_HPP

#include <string>

class User {
    std::string username;
    std::string password;

public:
    User(std::string username, std::string password)
        : username(username), password(password) {}

    std::string getUsername() const { return username; }
    std::string getPassword() const { return password; }
};

#endif // USER_HPP
