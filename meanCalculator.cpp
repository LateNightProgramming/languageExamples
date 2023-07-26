#include <iostream>
#include <string>
#include <list>

double mathFunc(std::list <double> data) {
    double mean = 0;
    for (int i : data) {
        mean+=i;
    }
    return mean/data.size();
}

void setup() {
    std::list <double> data = {};
    std::string inp;
    while (true) {
        std::cout << "\ninput a value ";
        std::cin >> inp;
        if (inp == "end") {
            std::cout << "\nsetup process ended";
            break;
        } else {
            try {
                data.push_back(std::stod(inp));
            } catch (...) {
                std::cout << "\ninvalid response";
            }
        }
    }
    std::cout << "\nmean = " << mathFunc(data);
    while (inp != "yes" && inp != "no") {
        std::cout << "\ndo you wish to restart? ";
        std::cin >> inp;
        if (inp == "yes") {
            std::cout << "\nrestarting...";
            setup();
        } else if (inp == "no") {
            std::cout << "\nfinishing...";
        } else {
            std::cout << "invalid response";
        }
    }
}

int main() {
    std::cout << "welcome!\ntype 'end' to finish the setup process";
    setup();
    return 0;
}
