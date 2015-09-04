#include <iostream>
#include "abstractfactory.h"
#include "producta.h"
#include "productb.h"
#include "factory1.h"
#include "factory2.h"

using namespace std;

int main()
{
    abstractFactory *factoryObj1 = new Factory1();
    ProductA *productObjA1 = factoryObj1->createProductA ();
    ProductB *productObjB1 = factoryObj1->createProductB ();

    productObjA1->show();
    productObjB1->show();

    abstractFactory *factoryObj2 = new Factory2();
    ProductA *productObjA2 = factoryObj2->createProductA ();
    ProductB *productObjB2 = factoryObj2->createProductB ();

    productObjA2->show();
    productObjB2->show();

    factoryObj1->destroyProductA (productObjA1);
    factoryObj1->destroyProductB (productObjB1);
    delete factoryObj1;
    factoryObj1 = 0;
    factoryObj2->destroyProductA (productObjA2);
    factoryObj2->destroyProductB (productObjB2);
    delete factoryObj2;
    factoryObj2 = 0;
    return 0;
}

