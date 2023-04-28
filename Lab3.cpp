//Lab3-OOP-Q1.cpp
// ///////////////////////////////////////////////////////////////////
// Developer: Joshua Hughes
// Student ID: 400298496
// Purpose: To create 3 employees and get data from the user about them, then display that data in a neat format to the user.
// Functions: main( ) - main program
// is my original work. No other person's work has been used without due acknowledgement
// and I have not made my work available to anyone else
//////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string m_name;
    int m_idNum;
    string m_dept;
    string m_pos;
public:
    Employee();
    ~Employee();
    string GetName();
    int GetID();
    string GetDept();
    string GetPos();
    void SetName(string n);
    void SetID(int n);
    void SetDept(string d);
    void SetPos(string p);

};

Employee::Employee() {

    m_name = "";
    m_idNum = 0;
    m_dept = "";
    m_pos = "";
}
Employee::~Employee() {

}
string Employee::GetName() {

    return m_name;
}
int Employee::GetID() {

    return m_idNum;
}
string Employee::GetDept() {

    return m_dept;
}
string Employee::GetPos() {

    return m_pos;
}
void Employee::SetName(string n) {

    m_name = n;
}
void Employee::SetID(int n) {
    
    m_idNum = n;
}
void Employee::SetDept(string d) {

    m_dept = d;
}
void Employee::SetPos(string p) {

    m_pos = p;
}

int main()
{
    int temp;
    string tempS;
    Employee employee;
    cout << "Enter the name of employee 1: ";
    getline(cin, tempS);
    employee.SetName(tempS);
    cout << "Enter the ID Number of employee 1: ";
    cin >> temp;
    employee.SetID(temp);
    cout << "Enter the department employee 1 is in: ";
    cin >> tempS;
    employee.SetDept(tempS);
    cout << "Enter the position of employee 1: ";
    cin >> tempS;
    employee.SetPos(tempS);
    cin.ignore();

    Employee employee2;
    cout << "Enter the name of employee 2: ";
    getline(cin, tempS);
    employee2.SetName(tempS);
    cout << "Enter the ID Number of employee 2: ";
    cin >> temp;
    employee2.SetID(temp);
    cout << "Enter the department employee 2 is in: ";
    cin >> tempS;
    employee2.SetDept(tempS);
    cout << "Enter the position of employee 2: ";
    cin >> tempS;
    employee2.SetPos(tempS);
    cin.ignore();

    Employee employee3;
    cout << "Enter the name of employee 3: ";
    getline(cin, tempS);
    employee3.SetName(tempS);
    cout << "Enter the ID Number of employee 3: ";
    cin >> temp;
    employee3.SetID(temp);
    cout << "Enter the department employee 3 is in: ";
    cin >> tempS;
    employee3.SetDept(tempS);
    cout << "Enter the position of employee 3: ";
    cin >> tempS;
    employee3.SetPos(tempS);

    cout << endl << endl << "Employee 1:\nName: " << employee.GetName() << "\nID Number: " << employee.GetID() << "\nDepartment: " << employee.GetDept() << "\nPosition: " << employee.GetPos() << endl << endl;
    cout << "Employee 2:\nName: " << employee2.GetName() << "\nID Number: " << employee2.GetID() << "\nDepartment: " << employee2.GetDept() << "\nPosition: " << employee2.GetPos() << endl << endl;
    cout << "Employee 3:\nName: " << employee3.GetName() << "\nID Number: " << employee3.GetID() << "\nDepartment: " << employee3.GetDept() << "\nPosition: " << employee3.GetPos() << endl << endl;
}
