#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age,rollno;
    string grade;
};
int main() {
    student s1;
    s1.name = "Alice";
    s1.age = 20;
    s1.rollno = 101;
    s1.grade = "A";

    cout << "Name: " << s1.name << endl;
      student s2;
    s2.name = "shubham";
    s2.age = 21;
    s2.rollno = 1031;
    s2.grade = "b";
    cout<<"Age: " << s2.age << endl;

    return 0;
}
