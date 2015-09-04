#include "factory2.h"
#include "producta2.h"
#include "productb2.h"

Factory2::Factory2()
{

}

Factory2::~Factory2()
{

}

ProductA *Factory2::createProductA()
{
    return new ProductA2();
}

ProductB *Factory2::createProductB()
{
    return new ProductB2();
}

void Factory2::destroyProductA(ProductA *&product)
{
    delete product;
    product = 0;
}

void Factory2::destroyProductB(ProductB *&product)
{
    delete product;
    product = 0;
}

