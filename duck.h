#ifndef DUCK_H
#define DUCK_H

#include "flybehavior.h"
#include "quackbehavior.h"

class Duck
{
protected:
    FlyBehavior *flyBehav;
    QuackBehavior *quackBehav;

public:
    void flyPerform() {this->flyBehav->fly();}
    void quackPerform() {this->quackBehav->quack();}
    void setFlyBehavior(FlyBehavior *fb)
    {
        if (this->flyBehav != NULL)
            delete this->flyBehav;

        this->flyBehav = fb;
    }
};

class MitinDuck : public Duck
{
public:
    MitinDuck()
    {
        this->flyBehav = new SolidFly;
        this->quackBehav = new SolidQuack;
    }
};

class ModelDuck : public Duck
{
public:
    ModelDuck()
    {
        this->flyBehav = new NoFly;
        this->quackBehav = new Quack;
    }

};

#endif // DUCK_H
