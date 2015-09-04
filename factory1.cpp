#include "factory1.h"
#include "prodcuta1.h"
#include "prodcutb1.h"

Factory1::Factory1()
{

}

Factory1::~Factory1()
{

}

ProductA *Factory1::createProductA()
{
    return new ProdcutA1();
}

ProductB *Factory1::createProductB()
{
    return new ProdcutB1();
}

void Factory1::destroyProductA(ProductA *&product)
{
    delete product;
    product = 0;
}

void Factory1::destroyProductB(ProductB *&product)
{
    delete product;
    product = 0;
}

