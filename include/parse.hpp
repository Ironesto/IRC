#ifndef PARSE_HPP
#define PARSE_HPP

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

class Parse {
    public:
        Parse() {};
        ~Parse() {};
        static std::vector<std::string> split(const std::string& str, char delim);
        static std::string join(const std::vector<std::string>& vec, char delim);

        void message(const std::string& message, std::string& command, std::string& content);
    private:
        void handle_Kick(const std::vector<std::string>& params);
        void handle_Invite(const std::vector<std::string>& params);
        void handle_Topic(const std::vector<std::string>& params);
        void handle_Mode(const std::vector<std::string>& params);

};  

#endif