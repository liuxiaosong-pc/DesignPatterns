/***************************/

#include "abstractFactory.h"
#include "abstractProduct.h"
#include "main.h"
#include <iostream>
using namespace std;

void main() {

	abstractFactory * pFactory = abstractFactory::createFactory(abstractFactory::FactoryType::ProductType_A);
	abstractProductTypeA * pCar = pFactory->CreaterProductA();
	abstractProductTypeB * pBike = pFactory->CreaterProductB();

	cout << "Benz factory - Car: " << pCar->name() << endl;
	cout << "Benz factory - Bike: " << pBike->name() << endl;

	SAFE_DELETE(pCar);
	SAFE_DELETE(pBike);
	SAFE_DELETE(pFactory);
}