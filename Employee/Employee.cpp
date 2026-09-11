// Employee.cpp 
/*
Class Employee

ID
First name
Last name
FullName()
Title
Email
Phone
Salary
Department
SendEmail(..)
SendSMS(...)
Print()

including all properties set and get, except for the ID readonly
Use constructor to iniate all values
*/
#include <iostream>
using namespace std;

class Employee {

private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    string _Department;
    double _Salary;

public:
    Employee(int ID, string FirstName, string LastName, string Title, string Email, string Phone, string Department, double Salary) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Department = Department;
        _Salary = Salary;
    }

    int GetID() {
        return _ID;
    }

    void SetFirstName(string FirstName) {
        _FirstName = FirstName;
    }

    string GetFirstName() {
        return _FirstName;
    }

    void SetLastName(string LastName) {
        _LastName = LastName;
    }

    string GetLastName() {
        return _LastName;
    }

    string GetFullName() {
        return _FirstName + " " + _LastName;
    }

    void SetTitle(string Title) {
        _Title = Title;
    }

    string GetTitle() {
        return _Title;
    }

    void SetEamil(string Email) {
        _Email = Email;
    }

    string GetEmail() {
        return _Email;
    }

    void SetPhone(string Phone) {
        _Phone = Phone;
    }

    string GetPhone() {
        return _Phone;
    }

    void SetDepartment(string Department) {
        _Department = Department;
    }

    string GetDepartment() {
        return _Department;
    }

    void SetSalary(double Salary) {
        _Salary = Salary;
    }

    double GetSalary() {
        return _Salary;
    }

    void Print() {
        cout << "\nInfo:\n";
        cout << "__________\n";
        cout << "\nID       : " << _ID;
        cout << "\nFirstName : " << _FirstName;
        cout << "\nLastName  : " << _LastName;
        cout << "\nFullName  : " << GetFullName();
        cout << "\nTitle     : " << _Title;
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
        cout << "\nDepartment:" << _Department;
        cout << "\nSalary    : " << _Salary;
        cout << "\n__________\n";
    }

    void SendEmail(string Subject, string Body) {
        cout << "The following message sent successfully to email: "
            << _Email << endl;
        cout << "Subject: " << Subject << "\nBody: " << Body << endl;
    }

    void SendSMS(string TextMessage) {
        cout << "\nThe following SMS sent successfully to phone: "
            << _Phone << endl;
        cout << TextMessage << endl;
    }
};

int main() {

    Employee Employee1 = Employee(1, "Abdulrahman", "Al-Haritani", "Working In Softer Company",
        "abdulrahamanharitani@gmail.com", "0995717078", "Enginerring", 5000);

    Employee1.Print();
    Employee1.SendEmail("Hello", "How are you?");
    Employee1.SendSMS("How are you?");

    cout << endl;
    system("pause");
}