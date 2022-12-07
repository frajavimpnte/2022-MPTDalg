#include "EOQ.hh"
#include <cmath>

#include <iostream>
using namespace std;

EOQ::EOQ()
{
    k = 0;
    h = 0;
    d = 0;
}

EOQ::EOQ(float k, float h, float d)
{
    this->k = k;
    this->h = h;
    this->d = d;
}

void EOQ::setK(float k)
{
    this->k = k;
}

float EOQ::getK()
{
    return k;
}

void EOQ::setH(float h)
{
    this->h = h;
}

float EOQ::getH()
{
    return h;
}
void EOQ::setD(float d)
{
    this->d = d;
}
float EOQ::getD()
{
    return d;
}
float EOQ::solve()
{
    return sqrt( 2*k*d / h );
}

float EOQ::print()
{
    cout << "Parámetros del inventario: " << endl;
    cout << "k:" << k << endl;
    cout << "h:" << h << endl;
    cout << "d:" << d << endl;
}

EOQ::~EOQ()
{
    //dtor
}
