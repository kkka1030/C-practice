#include "Intcell.h"

Intcell::Intcell(int initialValue) : storedValue{initialValue}{}

int Intcell::read() const
{
    return storedValue;
}

void Intcell::write(int x)
{
    storedValue=x;
}