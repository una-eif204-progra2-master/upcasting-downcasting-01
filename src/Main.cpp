//
// Created by Maikol Guzman Alan on 3/16/22.
//
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <sstream>
#include <iostream>
#include "PhysicalProduct.h"
#include "DigitalProduct.h"
#include "ProductManager.h"

using namespace std;

int main() {
    cout << "Welcome to the UNA! (VIRTUAL)\n" << endl;

    try {
        /* initialize random seed: */
        srand (time(nullptr));
        int randomNumberV1 = rand() % 500;
        int randomNumberV2 = rand() % 59 + 100;

        PhysicalProduct physicalProduct;
        physicalProduct.setName("PS5 Game: call of duty");
        physicalProduct.setWeight(randomNumberV1);
        physicalProduct.setPrice(randomNumberV2);

        DigitalProduct digitalProduct;
        digitalProduct.setName("PS5 Game: Fifa");
        digitalProduct.setPrice(randomNumberV2);
        digitalProduct.setFilePath("My Docu");

        Product* product;

        // Implicit Upcasting
        product = &physicalProduct;
        cout << "UPCASTING..........> PROPERTY" << endl;
        cout << "Upcasting          > " << product->getName() << endl;

        // Upcasting with Methods
        ProductManager* productManager;
        cout << "UPCASTING..........> METHOD" << endl;
        productManager->showProductNames(&physicalProduct);
        productManager->showProductNames(&digitalProduct);
        cout  << endl;

        // Explicit downcasting from Product to Manager
        PhysicalProduct* physicalProduct2 = (PhysicalProduct*) (product);
        cout << "DOWNCASTING........> PROPERTY" << endl;
        cout << "Downcasting        > " << physicalProduct2->getName() << endl;

    } catch (exception& ex) {
        cerr << ex.what() << '\n' << std::endl;
    }

}