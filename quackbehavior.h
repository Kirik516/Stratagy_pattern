#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>

class QuackBehavior
{
public:
    virtual ~QuackBehavior() {}
    virtual void quack() = 0;
};

class SolidQuack : public QuackBehavior
{
public:
    virtual void quack() {std::cout << "QUACK" <<std::endl;}
};

class Quack : public QuackBehavior
{
public:
    virtual void quack() {std::cout << "Quack" << std::endl;}
};

#endif // QUACKBEHAVIOR_H
