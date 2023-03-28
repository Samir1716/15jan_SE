#include <iostream>
#include <string>
using namespace std;

// Define Person class with name and age members
class Person 
{
protected:
    string name;
    int age;
public:
    void set_person_data(string n, int a) 
    {
        name = n;
        age = a;
    }
    void read_person_data() 
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    void write_person_data() 
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

// Define Student class with percentage member
class Student : public Person 
{
protected:
    float percentage;
public:
    void set_student_data(float p) 
    {
        percentage = p;
    }
    void read_student_data()
    {
        read_person_data();
        cout << "Percentage: " << percentage << endl;
    }
    void write_student_data()
    {
        write_person_data();
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
};

// Define Teacher class with salary member
class Teacher : public Person 
{
protected:
    float salary;
public:
    void set_teacher_data(float s) 
    {
        salary = s;
    }
    void read_teacher_data() 
    {
        read_person_data();
        cout << "Salary: " << salary << endl;
    }
    void write_teacher_data()
    {
        write_person_data();
        cout << "Enter Salary: ";
        cin >> salary;
    }
};

// Define Main function with multiple inheritance
int main() 
{
    // Create a student object
    Student s;
    s.write_student_data();
    s.set_student_data(85.5);
    cout << "Student Data:" << endl;
    s.read_student_data();
    
    // Create a teacher object
    Teacher t;
    t.write_teacher_data();
    t.set_teacher_data(5000);
    cout << "Teacher Data:" << endl;
    t.read_teacher_data();
    
    return 0;
}
