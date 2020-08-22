#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H

#include <iostream>

class FlyBehavior
{
public:
    virtual ~FlyBehavior() {}
    virtual void fly() = 0;
};

class SolidFly : public FlyBehavior
{
public:
    virtual void fly() {std::cout << "This is solid fly" << std::endl;}
};

class NoFly : public FlyBehavior
{
public:
    virtual void fly() {std::cout << "This is no fly" << std::endl;}
};

class FlyJet : public FlyBehavior
{
public:
    virtual void fly() {std::cout << "This is jet fly" << std::endl;}
};

#endif // FLYBEHAVIOR_H
