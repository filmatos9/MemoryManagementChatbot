#include <memory>
#include <vector>
#include <iostream>

using std::vector;

int main() {
    vector<std::unique_ptr<int>> vec;
    vec.push_back(std::make_unique<int>(1));
    vec.push_back(std::make_unique<int>(2));
    vec.push_back(std::make_unique<int>(3));

    std::find_if(vec.begin(), vec.end(), )
}