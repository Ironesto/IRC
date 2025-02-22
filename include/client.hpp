#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <iostream>
#include <string>
#include <vector>

class Client{
    private:
        int fd;
        std::string username;
        std::string nickname;
        bool registered;

    public:
        Client();
        ~Client();
        int get_fd();
        std::string get_username();
        std::string get_nickname();
        void set_fd(int fd);
        void set_username(std::string &username);
        void set_nickname(std::string &nickname);
        void set_registered(bool registered);
        bool is_registered();
       
};

std::vector<Client *>::iterator find_client_nickname(std::vector<Client *> &clients, const std::string &nickname);
dts::vrctor<Client *>::iterator find_client_fd(std::vector<Client *> &clients, int fd);
#endif