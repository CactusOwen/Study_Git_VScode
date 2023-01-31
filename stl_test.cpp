#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

void test_unoredered_map();
void test_map();
void test_pair();
void test_struct();
void test_class();

int main() {
    // test_unoredered_map();
    // test_map();
    // test_pair();
    test_struct();
    test_class();
}

struct t_stru{
    int value;
    std::string name;

    void print_stru(){
        std::cout << name << "'s value: " << value << std::endl;
    }
};

class t_class{
public:
    int value;
    std::string name;
public:
    t_class(){
        value = 0;
        name = "No name";
    }

    t_class(int _v, std::string _n){
        value = _v;
        name = _n;
    }

    void print_data(){
        std::cout << name << "'s value: " << value << std::endl;
    }
};

void test_struct(){
    t_stru ts;
    ts.name = "Version one";
    ts.value = 123;
    ts.print_stru();
}

void test_class(){
    t_class tc(999, "ver class");

    std::cout << tc.value << std::endl;
    tc.print_data();
}

void test_pair(){
    std::cout << "\n**Pair Test Start------------------------\n";

    std::pair<int, int> p;
    std::cout << "Check Pair: " << p.first << "/" << p.second << std::endl;
    p.first = 12; p.second = 45;
    std::cout << "Check Pair: " << p.first << "/" << p.second << std::endl;

    std::cout << "\n**Pair Test Start------------------------\n\n";
}

void test_unoredered_map(){
    std::cout << "\n**Unoredered Map Test Start------------------------";

    std::unordered_map<std::string, int> um;

    um.insert(std::pair<std::string, int>("one", 10));
    um.insert(std::make_pair("two", 22));
    um["three"] = 34;
    um.insert(std::make_pair("four", 42));

    std::cout << "\n*Max Size------------------------\n";

    std::cout << "Map's max size: " << um.max_size() << std::endl;

    std::cout << "\n*search v1------------------------\n";

    std::unordered_map<std::string, int>::iterator it;

    for(it = um.begin(); it != um.end(); it++){
        std::cout << it->first << "/" << it->second << std::endl;
    }

    std::cout << "\n*search v2------------------------\n";

    for(auto pair: um){
        std::cout << pair.first << "/" << pair.second << std::endl;
    } //why auto pair can't use '->' ?

    std::cout << "\n*Find------------------------\n";

    std::cout << um.find("two")->first << "'s value : " << um.find("two")->second << std::endl;
    std::cout << um.find("four")->first << "'s value : " << um.find("four")->second << std::endl;

    std::cout << "\n*Size------------------------\n";

    std::cout << "Now size: " << um.size() << std::endl;

    std::cout << "\n*Erase------------------------\n";

    um.erase("two"); std::cout << "erase two" << std::endl;
    um.erase("three"); std::cout << "erase three" << std::endl;
    // there are no other way to erase object of unoredered_map

    for(auto pair: um){
        std::cout << pair.first << "/" << pair.second << std::endl;
    }

    std::cout << "Now size: " << um.size() << std::endl;

    std::cout << "\n*Empty------------------------\n";

    std::cout << (um.empty() ? "Empty!" : "Not Empty!") << std::endl;

    um.erase("one"); std::cout << "erase one" << std::endl;
    um.erase("four"); std::cout << "erase four" << std::endl;

    std::cout << "Now size: " << um.size() << std::endl;

    std::cout << (um.empty() ? "Empty!" : "Not Empty!") << std::endl;

    std::cout << "\n*Max Size------------------------\n";

    std::cout << "Map's max size: " << um.max_size() << std::endl;

    std::cout << "\n**Unoredered Map Test End------------------------\n\n";
}

void test_map(){
    std::cout << "\n**Map Test Start------------------------";

    std::map<std::string, int> um;

    um.insert(std::pair<std::string, int>("one", 10));
    um.insert(std::make_pair("two", 22));
    um["three"] = 34;
    um.insert(std::make_pair("four", 42));

    std::cout << "\n*Max Size------------------------\n";

    std::cout << "Map's max size: " << um.max_size() << std::endl;

    std::cout << "\n*search v1------------------------\n";

    std::map<std::string, int>::iterator it;

    for(it = um.begin(); it != um.end(); it++){
        std::cout << it->first << "/" << it->second << std::endl;
    }

    std::cout << "\n*search v2------------------------\n";

    for(auto pair: um){
        std::cout << pair.first << "/" << pair.second << std::endl;
    } //why auto pair can't use '->' ?

    std::cout << "\n*Find------------------------\n";

    std::cout << um.find("two")->first << "'s value : " << um.find("two")->second << std::endl;
    std::cout << um.find("four")->first << "'s value : " << um.find("four")->second << std::endl;

    std::cout << "\n*Size------------------------\n";

    std::cout << "Now size: " << um.size() << std::endl;

    std::cout << "\n*Erase------------------------\n";

    um.erase("two"); std::cout << "erase two" << std::endl;
    um.erase("three"); std::cout << "erase three" << std::endl;
    // there are no other way to erase object of unoredered_map

    for(auto pair: um){
        std::cout << pair.first << "/" << pair.second << std::endl;
    }

    std::cout << "Now size: " << um.size() << std::endl;

    std::cout << "\n*Empty------------------------\n";

    std::cout << (um.empty() ? "Empty!" : "Not Empty!") << std::endl;

    um.erase("one"); std::cout << "erase one" << std::endl;
    um.erase("four"); std::cout << "erase four" << std::endl;

    std::cout << "Now size: " << um.size() << std::endl;

    std::cout << (um.empty() ? "Empty!" : "Not Empty!") << std::endl;

    std::cout << "\n*Max Size------------------------\n";

    std::cout << "Map's max size: " << um.max_size() << std::endl;

    std::cout << "\n**Map Test End------------------------\n\n";
}