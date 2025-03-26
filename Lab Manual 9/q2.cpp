#include <iostream>
using namespace std;
class Student {
    static int totalStudents;
    string name;
    int age;
    string id;
public:
    Student(string name="", int age=0, string id="") {
        this->name = name;
        this->age = age;
        this->id = id;
        totalStudents++;
    }
    static int getTotalStudents() {
        return totalStudents;
    }  
};
int Student::totalStudents = 0;
int main() {
    Student s1("John", 20, "24F-2069");
    Student s2("Jane", 21, "23F-1570");
    Student s3("Jim", 22, "24F-2070");
    Student s4("Jill", 23, "24F-2071");
    Student s5("Jack", 24, "24F-2072");
    cout << "Total students: " << Student::getTotalStudents() << endl;
}
