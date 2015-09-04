#ifndef FACTORY2_H
#define FACTORY2_H


class ProductA;
class ProductB;
#include "abstractfactory.h"
class Factory2 : public abstractFactory
{
public:
    Factory2();
    ~Factory2();
public:
    virtual ProductA* createProductA();
    virtual ProductB* createProductB();
    virtual void destroyProductA(ProductA*& product);
    virtual void destroyProductB(ProductB*& product);
};

#endif // FACTORY2_H
