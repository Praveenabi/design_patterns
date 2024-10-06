#include <iostream>

// Interface or Abstract Class
class Fruit {
    public:
    virtual ~Fruit() = default;
    virtual void print_name() = 0;
};

// Derived class
class Apple : public Fruit {
    public:
    void print_name() override {
        std::cout << "Apple"<<std::endl;
    }
};

// Derived class
class Banana : public Fruit {
    public:
    void print_name() override {
        std::cout << "Banana"<<std::endl;
    }
};

enum class FruitType {
    APPLE,
    BANANA
};
 
// object factory class
class FruitFactory {
    public:
    static Fruit* createFruit(FruitType type) {
        if(type == FruitType::APPLE) {
            return new Apple();
        }
        else if(type == FruitType::BANANA) {
            return new Banana();
        }
        else {
            return nullptr;
        }
    }
};