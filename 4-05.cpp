1 #include<iostream>
 2 #include<string.h>
 3 using namespace std;
 4 class Person
 5 {
 6     private:int age;
 7     char *name;
 8     public:
 9         Person(int n=1,char *na="zhuli");
10         ~Person();
11         void Print();
12         //void Print()const;//
13         void ModifyAge();
14 };
15 Person::Person(int n,char *na)
16 {
17     age=n;
18     name=new char[strlen(na)+1];
19     strcpy(name,na);
20 }
21 Person::~Person()
22 {
23     delete[]name;
24 }
25 void Person::Print()
26 {
27     cout<<"age:"<<age<<"name:"<<name<<endl;
28     cout<<"This id general Print()."<<endl;
29 }
30 void Person::Print()const
31 {
32     cout<<"age:"<<age<<"name:"<<name<<endl;
33     cout<<"This is const Print()."<<endl;
34 }
35 void Person::ModifyAge()
36 {
37     age++;
38 }
39 int main()
40 {
41     const Person p1(17,"wu");
42     cout<<"Output const object p1"<<endl;
43     p1.Print();
44     Person p2(18,"zhang");
45     cout<<"Output general object p2"<<endl;
46     p2.ModifyAge();
47     p2.Print();
48     return 0;
49 }
