#include <iostream>

using namespace std;

class student
{
public:
    string address;
    void setName(string str)
    {
        if (str.size()<=15 && str.size() >=7){
            name = str;
        } else {
            cout << "invalid name" << endl;
        }
    }
    string getName()
    {
        return name;
    }
    void setAge(int num)
    {
        if (num<=21 && num >= 19){
            age = num;
        }else {
            age = 0;
        }
    }
    int getAge()
    {
        return age;
    }
    void setGrade(int num)
    {
        if (num>=0 && num <= 100){
            grade = num;
        }else {
            cout << "invalid grade" << endl;
        }
    }
    int getGrade()
    {
        return grade;
    }
    void printAll()
    {
        cout << name << endl;
        cout << age << endl;
        cout << address << endl;
        cout << grade << endl;
    }
    void status()
    {
        if (grade >= 50){
            cout << "You Passed!!" << endl;
        } else {
            cout << "Sorry!, You faild!!" << endl;
        }
    }
private:
    string name;
    int age;
    int grade;
};

int main()
{
    student a;
    a.setName("ahmed khaled");
    a.setAge(20);
    a.address = "Assiut, Manfalout";
    a.setGrade(70);
    cout << "------------------------\n";
    a.printAll();
    cout << "------------------------\n";
    a.status();



    //int d = a.getAge();
    //cout << d;

    return 0;
}
