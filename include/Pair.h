#ifndef PAIR_H
#define PAIR_H

#include <iostream>

using namespace std;


class Pair
{
    public:
        Pair(int, long long);
        Pair();
        bool operator>(Pair);
        bool operator>=(Pair);
        bool operator<(Pair);
        bool operator<=(Pair);
        bool operator==(Pair);
        Pair operator=(Pair);
        friend ostream& operator<<(ostream& os, const Pair& P);
        int getKey();
        long long getValue();
        virtual ~Pair();

    private:
        int key;
        long long value;
};

#endif // PAIR_H
