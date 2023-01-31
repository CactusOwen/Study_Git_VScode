#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, int> um;

    um.insert(std::pair<std::string, int>("one", 10));
    um.insert(std::make_pair("two", 22));
    um["third"] = 34;
    um.insert(std::make_pair("forth", 42));

    std::cout << "\n------------------------\n";

    std::unordered_map<std::string, int>::iterator it;

    for(it = um.begin(); it != um.end(); it++){
        std::cout << it->first << "/" << it->second << std::endl;
    }

    std::cout << "\n------------------------\n";

    for(auto pair: um){
        std::cout << pair.first << "/" << pair.second << std::endl;
    } //why auto pair can't use '->' ?

    
}