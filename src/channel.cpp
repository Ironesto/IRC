#include "channel.hpp"

Channel::Channel(const std::string& name) : name(name) {}

void Channel::addClient(Client& client) {
    clients.push_back(&client);
}

void Channel::removeClient(Client& client) {
    for (auto it = clients.begin(); it != clients.end(); ++it) {
        if (*it == &client) {
            clients.erase(it);
            break;
        }
    }
}

void Channel::broadcast(const std::string& message) {
    for (auto client : clients) {
        // send message to client
    }
}

void Channel::setName(const std::string& name) {
    this->name = name;
}

std::string Channel::getName() const {
    return name;
}

void Channel::setTopic(const std::string& topic) {
    this->topic = topic;
}

std::string Channel::getTopic() const {
    return topic;
}

void Channel::setMode(const std::string& mode) {
    this->mode = mode;
}

std::string Channel::getMode() const {
    return mode;
}

void Channel::set_maxClients(size_t maxClients) {
    this->maxClients = maxClients;
}

bool Channel::isFull() const {
    return clients.size() >= maxClients;
}

size_t Channel::getMaxClients() const {
    return maxClients;
}

Channel::~Channel() {
    for (auto client : clients) {
        // send message to client
    }
}



