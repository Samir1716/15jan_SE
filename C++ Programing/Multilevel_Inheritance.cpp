#include <iostream>
#include <string>
using namespace std;

// Define Students class with roll number member
class Students 
{
protected:
    int roll_number;
public:
    void set_roll_number(int r)
    {
        roll_number = r;
    }
    void read_roll_number() 
    {
        cout << "Roll Number: " << roll_number << endl;
    }
    void write_roll_number() 
    {
        cout << "Enter Roll Number: ";
        cin >> roll_number;
    }
};

// Define Test class with marks in two subjects members
class Test : public Students
{
protected:
    int subject1_marks;
    int subject2_marks;
public:
    void set_test_marks(int s1, int s2)
    {
        subject1_marks = s1;
        subject2_marks = s2;
    }
    void read_test_marks() 
    {
        read_roll_number();
        cout << "Subject 1 marks: " << subject1_marks << endl;
        cout << "Subject 2 marks: " << subject2_marks << endl;
    }
    void write_test_marks() 
    {
        write_roll_number();
        cout << "Enter Subject 1 marks: ";
        cin >> subject1_marks;
        cout << "Enter Subject 2 marks: ";
        cin >> subject2_marks;
    }
};

// Define Result class with total marks member
class Result : public Test 
{
protected:
    int total_marks;
public:
    void set_total_marks() 
    {
        total_marks = subject1_marks + subject2_marks;
    }
    void read_result() 
    {
        read_test_marks();
        cout << "Total Marks: " << total_marks << endl;
    }
};

// Define Main function with multilevel inheritance
int main() 
{
    // Create a Result object
    Result r;
    r.write_test_marks();
    r.set_total_marks();
    cout << "Result:" << endl;
    r.read_result();

    return 0;
}
