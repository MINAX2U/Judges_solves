#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(){
    std::string input;
    std::getline(std::cin, input);

    std::istringstream iss(input);
    std::vector<std::string> names;

    std::string name;
    while (std::getline(iss, name, ' ')) {
        names.push_back(name);
    }

    for (const auto& name : names) {
        std::cout << name << std::endl;
    }

    return 0;
}
