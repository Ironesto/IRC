#include "parse.hpp"

#include <iostream>

void parse::message(const std::string& message, std::string& command, std::string& content){
    std::vector<std::string> tokens = parse(message, ' ');
    command = tokens[0];
    tokens.erase(tokens.begin());
    content = join(tokens, ' ');
}

std::vector<std::string> parse::split(const std::string& str, char delim){
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delim)){
        tokens.push_back(token);
    }
    return tokens;
}

std::string parse::join(const std::vector<std::string>& vec, char delim){
    std::string str;
    for (auto it = vec.begin(); it != vec.end(); ++it){
        str += *it;
        if (it != vec.end() - 1){
            str += delim;
        }
    }
    return str;
}

void parse::handle_Kick(const std::vector<std::string>& params){
    if (params.size() < 3){
        std::cerr << "Usage: /kick <channel> <user>" << std::endl;
        return;
    }
}

void parse::handle_Invite(const std::vector<std::string>& params){
    // handle invite command
}

void parse::handle_Topic(const std::vector<std::string>& params){
    // handle topic command
}

void parse::handle_Mode(const std::vector<std::string>& params){
    // handle mode command
}


