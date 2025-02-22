#ifndef CHANNEL_HPP
#define CHANNEL_HPP

#include <string>
#include <vector>
#include "Client.hpp"

class Channel {
public:
    Channel();
    ~Channel();
    void addClient(Client& client);
    void removeClient(Client& client);
    void set_maxClients(size_t maxClients);
    void setName(const std::string& topic);
    std::string getName() const;
    void setTopic(const std::string& topic);
    std::string getTopic() const;   
    void setMode(const std::string& mode);
    std::string getMode() const;
    void broadcast(const std::string& message);
    bool isFull() const;
    size_t getMaxClients() const;
    

private:
    std::string name;
    std::string topic;
    std::string mode;
    std::vector<Client*> clients;
    size_t maxClients;
    Channel(const Channel& other);
    Channel& operator=(const Channel& other);
};

#endif
