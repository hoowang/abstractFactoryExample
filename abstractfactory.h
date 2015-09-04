#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

class ProductA;
class ProductB;

class abstractFactory
{
public:
    abstractFactory();
    virtual ~abstractFactory();

public:
    virtual ProductA* createProductA() = 0;
    virtual ProductB* createProductB() = 0;
    virtual void destroyProductA(ProductA*& product) = 0;
    virtual void destroyProductB(ProductB *&product) = 0;
};

#endif // ABSTRACTFACTORY_H
