//
// Created by Maikol Guzman Alan on 3/30/22.
//

#include "ProductManager.h"
#include "DigitalProduct.h"
#include "PhysicalProduct.h"

void ProductManager::showProductNames(Product *product) {
    cout << "Product Name       > " << product->getName() << endl;
    cout << "Product Price      > " << product->getPrice() << endl;
}

void ProductManager::showProductNamesWithDC(Product* product) {
    DigitalProduct* digitalProduct = dynamic_cast<DigitalProduct*>(product);
    PhysicalProduct* physicalProduct = dynamic_cast<PhysicalProduct*>(product);

    if (digitalProduct)
        cout << "From Product To Digital    > " << digitalProduct->getName() << endl;
    else if (physicalProduct)
        cout << "From Product To Physical   > " << physicalProduct->getName() << endl;
    else
        cout << "Product                    > " << product->getName() << endl;
}
