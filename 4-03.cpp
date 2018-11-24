1 #include"4_03_Circle.h"
 2 #include<iostream>
 3 using namespace std;
 4 int main()
 5 {
 6 	Circle c1(3.5), c2;
 7 	cout << "area of c1=" << c1.Area() << ",circumference of c1=" << c1.Circumference() << endl;
 8 	cout << "area of c2=" << c2.Area() << ",circumference of c2=" << c2.Circumference() << endl;
 9
10 system("pause");
11 return 0;
12 }
1 #include "4_03_Circle.h"
 2 double Circle::Area()
 3 {
 4 	return PI*Radius*Radius;
 5 }
 6 double Circle::Circumference()
 7 {
 8 	return 2 * PI*Radius;
 9 }
