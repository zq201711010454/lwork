
1 #include<iostream>
 2 #include<string.h>
 3 using namespace std;
 4 class Student
 5 {private:static int total;
 6 int num;
 7 char name[20];
 8 public:
 9     Student(){total++;}
10     ~Student(){total--;}
11     Student (int n,char *p="wang");
12     void GetName();
13     int Getnum();
14     static void Print();
15 };
16 int Student::total=0;
17 Student::Student(int n,char *p)
18 {
19     num=n;
20     strcpy(name,p);
21     total++;
22 }
23 void Student::GetName()
24 {
25     cout<<name<<endl;
26 }
27 int Student::Getnum()
28 {
29     return num;
30 }
31 void Student::Print()
32 {
33     cout<<"the number of all studebts: "<<total<<endl;
34 }
35 int main()
36 {
37     Student::Print();
38     Student *p=new Student(13);
39     Student::Print();
40     p->Print();
41     delete p;
42     p->Print();
43     Student s[2];
44     Student::Print();
45     Student::Print();
46     return 0;
47 }
