#include <iostream>

#include "duck.h"

using namespace std;

int main()
{
    printf("Mitin duck came:\n");
    Duck *d = new MitinDuck;
    d->flyPerform();
    d->quackPerform();

    printf("\n");
    printf("Model duck came:\n");
    d = new ModelDuck;
    d->flyPerform();
    d->quackPerform();

    printf("\n");
    printf("Duck recieved jet ability:\n");
    d->setFlyBehavior(new FlyJet);
    d->flyPerform();
    d->quackPerform();

    return 0;
}
