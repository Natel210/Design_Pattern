#include "AbstractFactory.h"
int main()
{
    AbstractFactory aFac;
    aFac.Make(1);
    aFac.Make(2);
    aFac.Make(1);
    aFac.Make(1);
    exit(0);
}