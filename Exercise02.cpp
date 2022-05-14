#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {

   int length, width, radius;
 
cout << "Enter the length of the rectangle:" << endl;
cin >> length;
cout << "Enter the width of the rectangle:" << endl;
cin >> width;
cout << "Enter the radius of the circle:" << endl;

  Rectangle * rect;
  rect = new Rectangle(length,width);
	  rect->display();
	  delete rect;
  

  Circle * cir;
  

cout << "Enter the radius of the circle:" << endl;

cin >> radius;
cir = new Circle(radius);
cir->display();
delete cir;


  cout << "End of the programm" << endl;

  return 0;

}