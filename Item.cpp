#include "Item.h"
#include <iostream>
using namespace std;

Item::Item() {
	itemCode = 0;
	unitPrice = 0;
	discount = 0;
}
Item::Item(int it_code, float uni_price) {
	itemCode = it_code;
	unitPrice = uni_price;
}
Item::~Item() {
	cout << "\nDISTRUCTOR IN PROGRESS" << endl;
  }

void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
