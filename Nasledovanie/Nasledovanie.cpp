#include <iostream>
using namespace std;

class Person
{
protected:
	
	string name;
	int age;

public:

	Person() = default;
	Person(const char* n, int a)
	{
		name.append(n);
		age = a;
	}
	void Input()
	{
		cout << "Input name: " << endl;
		cin >> name;
		cout << "Input age: " << endl;
		cin >> age;
	}
	void Output()
	{
		cout << "Name: " << name << "\t Age: " << age << "\t";
	}
};

class Student :public Person
{
private:

	string Academy;

public:

	Student():Person(){}
	Student(const char* n, int a, const char* Ac) :Person(n, a)
	{
		Academy.append(Ac);
	}
	void Input() // переопределение метода Input
	{
		Person::Input(); // вызов метода базового класса
		cout << "Input Academy: " << endl;
		cin >> Academy;
	}
	void Output()
	{
		Person::Output();
		cout << "Academy: " << Academy << endl;
	}
};

class Teacher :public Person
{
private:

	string school;
	string subject;

public:

	Teacher() : Person() {}
	Teacher(const char* n, int a, const char* sc, const char* sb) : Person(n, a)
	{
		school.append(sc);
		subject.append(sb);
	}

	void Input()
	{
		Person::Input();
		cout << "Input School: " << endl;
		cin >> school;
		cout << "Input subject: " << endl;
		cin >> subject;
	}

	void Output()
	{
		Person::Output();
		cout << "School: " << school << "\tSubject: " << subject << endl;
	}
};

class Doctor :public Person
{
private:

	string hospital;
	double salary;

public:
	Doctor() :Person() {};
	Doctor(const char* n, int a, const char* hp, double sl) :Person(n, a)
	{
		hospital.append(hp);
		salary = sl;
	}
	void Input()
	{
		Person::Input();
		cout << "Input hospital: " << endl;
		cin >> hospital;
		cout << "Input salary: " << endl;
		cin >> salary;
	}
	void Output()
	{
		Person::Output();
		cout << "Hospital: " << hospital << "\tSalary: " << salary << endl;
	}
};

class Director :public Person
{
private:

	string school;
	double salary;

public:
	Director() :Person() {};
	Director(const char* n, int a, const char* sc, double sl) :Person(n, a)
	{
		school.append(sc);
		salary = sl;
	}
	void Input()
	{
		Person::Input();
		cout << "Input school: " << endl;
		cin >> school;
		cout << "Input salary: " << endl;
		cin >> salary;
	}
	void Output()
	{
		Person::Output();
		cout << "School: " << school << "\tSalary: " << salary << endl;
	}
};

int main()
{
	Student obj1("Artur", 16, "ITStep College");
	obj1.Output();
	obj1.Input();
	obj1.Output();

	Teacher obj2("Kristina", 30, "", "Programming");
	obj2.Output();
	obj2.Input();
	obj2.Output();

	Doctor obj3;
	obj3.Input();
	obj3.Output();

	Director obj4;
	obj4.Input();
	obj4.Output();
}