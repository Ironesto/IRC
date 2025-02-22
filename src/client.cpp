#include "client.hpp"

Client::Client(){
}

Client::~Client(){
}

int Client::get_fd(){
    return this->fd;
}

std::string Client::get_username(){
    return this->username;
}

std::string Client::get_nickname(){
    return this->nickname;
}

void Client::set_nickname(std::string nickname){
    this->nickname = nickname;
}

void Client::set_username(std::string username){
    this->username = username;
}

void Client::set_fd(int fd){
    this->fd = fd;
}   

void Client::set_registered(bool registered){
    this->registered = registered;
}

bool Client::is_registered(){
    return this->registered;
}

std::vector<Client *>::iterator find_client_nickname(std::vector<Client *> &clients, const std::string &nickname){
    for (auto it = clients.begin(); it != clients.end(); ++it){
        if ((*it)->get_nickname() == nickname){
            return it;
        }
    }
    return clients.end();
}

std::vector<Client *>::iterator find_client_fd(std::vector<Client *> &clients, int fd){
    for (auto it = clients.begin(); it != clients.end(); ++it){
        if ((*it)->get_fd() == fd){
            return it;
        }
    }
    return clients.end();
}



