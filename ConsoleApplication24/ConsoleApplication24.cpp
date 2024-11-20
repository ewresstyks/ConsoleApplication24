#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	string name;
	int age;
public:
	Person() {
		age = 0;
	};
	Person(const char* _name, int _age) {
		name.append(_name);
		age = _age;
	};
	void Input() {
		cout << "Enter ur name - ";
		getline(cin, name);
		cout << "Enter ur age - ";
		cin >> age;
	}
	void Print() {
		cout << "Name - " << name << endl << "Age - " << age << endl;
	}

};

class Teacher :public Person
{
	string sch;
	string subj;
public:
	Teacher() :Person() {}
	Teacher(const char* n, int _a, const char* _subj, const char* sch) :Person(n, _a) {
		this->sch.append(sch);
		this->subj.append(_subj);
	}
	void Input() {
		Person::Input();
		cout << "Enter ur school";
		getline(cin, sch);
		cout << "Enter ur subject";
		getline(cin, subj);
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "School - " << sch << endl << "Subject - " << subj << endl;
	}
};

class Doctor :public Person
{
	string hosp;
	double salary;
public:
	Doctor() :Person() { salary = 0; }
	Doctor(const char* n, int _a, double salary, const char* hosp) :Person(n, _a) {
		this->hosp.append(hosp);
		this->salary = salary;
	}
	void Input() {
		Person::Input();
		cout << "Enter ur Hospital -";
		getline(cin, hosp);
		cout << "Enter ur Salary -";
		cin >> salary;
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "Hospital - " << hosp << endl << "Salary - " << salary << endl;
	}
};

class Doctor :public Person
{
	string sch;
	double salary;
public:
	Doctor() :Person() { salary = 0; }
	Doctor(const char* n, int _a, double salary, const char* sch) :Person(n, _a) {
		this->sch.append(sch);
		this->salary = salary;
	}
	void Input() {
		Person::Input();
		cout << "Enter ur Hospital -";
		getline(cin, sch);
		cout << "Enter ur Salary - ";
		cin >> salary;
		cout << endl;
	}
	void Print() {
		Person::Print();
		cout << "School - " << sch << endl << "Salary - " << salary << endl;
	}
};


class Student :public Person
{
	string Academy;
public:
	Student() :Person() {}
	Student(const char* _name, int _age, const char* _academy) :Person(_name, _age) {
		Academy.append(_academy);
	}
	void Input() 
	{
		Person::Input(); 
		cout << "Academy - ";
		cin >> Academy;
	}
	void Print() {
		Person::Print();
		cout << "Academy - " << Academy << endl;
	}


};

int main()
{
	Student a("Irina", 20, "ITStep Academy");
	a.Print();
	a.Input();
	a.Print();

	Teacher b("Irina", 20, "ITStep Academy", "123");
	a.Print();
	a.Input();
	a.Print();
}