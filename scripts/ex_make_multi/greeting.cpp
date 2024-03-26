#include "greeting.h"
#include <iostream>

Greeting::Greeting(const std::string& name): name(name) {}

void Greeting::sayHello() const {
    std::cout << "Hello, " << name << "!" << std::endl;
}
