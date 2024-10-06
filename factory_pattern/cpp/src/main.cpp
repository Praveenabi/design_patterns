#include <iostream>
#include <vector>

#include "fruit.h"

int main() {
    std::cout << "Factory Design Pattern\n";

    std::vector<Fruit*> fruits;

    fruits.push_back(FruitFactory::createFruit(FruitType::APPLE));
    fruits.push_back(FruitFactory::createFruit(FruitType::BANANA));

    for(const auto& fruit: fruits) {
        fruit->print_name();
    }

    for(auto& fruit: fruits) {
        delete fruit;
    }
    return 0;
}