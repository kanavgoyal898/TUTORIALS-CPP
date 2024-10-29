#include <iostream>
#include <map>

// Maps in STL

int main() {
    std::map<char, int> keyValuePair;
    keyValuePair['x'] = 3;
    keyValuePair['y'] = 4;
    keyValuePair['z'] = 5;

    keyValuePair.insert({{'a', 0}, {'b', 1}, {'c', 2}});
    std::map<char, int> :: iterator itr;
    for(itr = keyValuePair.begin(); itr != keyValuePair.end(); itr++) {
    std::cout << "(*itr).first: " << (*itr).first << "      itr->second: " << itr->second << std::endl;
    }

    std::cout << "Size of map 'keyValuePair: " << keyValuePair.size() << std::endl; 

    return 0;
}