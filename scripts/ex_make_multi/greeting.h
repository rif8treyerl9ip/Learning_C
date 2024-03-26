#ifndef GREETING_H
#define GREETING_H

#include <string>
class Greeting {
public:
    Greeting(const std::string& name);
    void sayHello() const;

private:
    std::string name;
};

#endif
