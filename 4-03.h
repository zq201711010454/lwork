

1 #ifndef _Circle
 2 #define _Circle
 3 class Circle
 4 {
 5 private:
 6 	double Radius;
 7 	const double PI;
 8 public:
 9 	Circle(double r = 0)
10 	{
11
12 		PI(3.1415926)
13 		Radius = r;
14 	}
15 	double Area();
16 	double Circumference();
17 };
18
19 #endif

