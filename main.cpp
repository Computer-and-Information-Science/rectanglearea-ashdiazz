#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;

  double area = width * length;
  double perimeter = 2 * length + 2 * width;

cout << "Rectangle Properties:" <<endl;
cout << " Length = 7.2" <<endl;
cout << " Width = 1.3" <<endl;
cout << "Area = " << area <<endl;
cout << "Perimeter = " << perimeter <<endl;
}