#include "Pair.h"

Pair::Pair(int k, long long v)
{
    key = k;
    value = v;
}

Pair::Pair()
{
    key = 0;
    value = 0;
}

bool Pair::operator>(Pair P)
{
    return(key > P.key);
}

bool Pair::operator>=(Pair P)
{
    return(key >= P.key);
}

bool Pair::operator<(Pair P)
{
    return(key < P.key);
}

bool Pair::operator<=(Pair P)
{
    return(key <= P.key);
}


bool Pair::operator==(Pair P)
{
    return (key == P.key /*&& value == P.value*/);
}

Pair Pair::operator=(Pair P)
{
    key = P.key;
    value = P.value;
    return (*this);
}

ostream& operator<<(ostream& os, const Pair& P)
{
    os << P.key << "=>" << P.value;
    return os;
}

int Pair::getKey()
{
    return key;
}

long long Pair::getValue()
{
    return value;
}


Pair::~Pair()
{
    //dtor
}
