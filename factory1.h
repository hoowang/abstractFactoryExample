#ifndef FACTORY1_H
#define FACTORY1_H

class ProductA;
class ProductB;
#include "abstractfactory.h"
class Factory1 : public abstractFactory
{
public:
    Factory1();
    ~Factory1();

public:
    virtual ProductA* createProductA();
    virtual ProductB* createProductB();
    virtual void destroyProductA(ProductA*& product);
    virtual void destroyProductB(ProductB*& product);
};

#endif // FACTORY1_H
