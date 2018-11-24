1 #include<iostream>
 2 using namespace std;
 3 class Student
 4 {
 5 private:
 6 	int num;
 7 	char name[20];
 8 public:
 9 	static int total;
10 	Student()  { total++; }
11 	~Student(){ total--; }
12 	Student(int n, char *p = "wang");
13 	void GetName();
14 	int Getnum();
15
16 };
17
18 int Student::total = 0;
19 Student::Student(int n, char *p)
20 {
21 	num = n;
22 	strcpy(name, p);
23 	total++;
24 }
25
26 void Student::GetName()
27 {
28 	cout << name << endl;
29 }
30
31 int Student::Getnum()
32 {
33 	return num;
34 }
35
36 int main()
37 {
38 	cout << "The number of all students:" << Student::total << endl;
39 	Student *p = new Student(13);
40 	cout << "The number of all students:" << Student::total << endl;
41 	cout << "The number of all students:" << p->total << endl;
42 	delete p;
43 	cout << "The number of all students:" << Student::total << endl;
44 	Student s[2];
45 	cout << "The number of all students:" << s[0].total << endl;
46 	cout << "The number of all students:" << Student::total << endl;
47 	system("pause");
48 	return 0;
49
50 }
51
