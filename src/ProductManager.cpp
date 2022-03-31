//
// Created by Maikol Guzman Alan on 3/30/22.
//

#include "ProductManager.h"

void ProductManager::showProductNames(Product *product) {
    cout << "Product Name       > " << product->getName() << endl;
    cout << "Product Price      > " << product->getPrice() << endl;
}
