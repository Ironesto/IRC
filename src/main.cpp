#include <iostream>
#include <string>


int main(int argc, char **argv) {

    if (argc != 3){
        std::cerr << "Usage: " << argv[0] << " <server_ip> <port> <password>" << std::endl;
        return 1;
    }

    std::string server_ip = argv[1];
    int port = std::atoi(argv[2]);
    std::string password = argv[3];


    
      
}
