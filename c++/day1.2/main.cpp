#include <iostream>

using namespace std;

struct students
{
    int id;
    string name;
    int age;
};
void fillStudent(students * s,int num)
{
    for(int i=0;i<num;i++)
    {
        cout << "Enter student "<<i+1<<" ID: ";
        cin >> s ->id;
        cout << "Enter student "<<i+1<<" Name: ";
        cin >> s ->name;
        cout << "Enter student "<<i+1<<" Age: ";
        cin >> s ->age;
    }
}
void displayStudents(students * s,int num)
{
    for(int i=0;i<num;i++)
    {
        cout << "ID "<<i+1<<" is: "<< s->id << endl;
        cout << "Name "<<i+1<<" is: "<< s->name << endl;
        cout << "Age "<<i+1<<" is: "<< s->age << endl;
    }
}

int main()
{
    students s[2];
    fillStudent(s,2);
    displayStudents(s,2);
    return 0;
}
