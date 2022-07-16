#include "Person.h"
Person::Person(string name, int age) {

	this->name = name;
	this->age = age;

}
void Person::print() const {
	cout << " name is : " << name << " age is : " << age << endl;
}

bool Person::operator<(const Person& other) const {

	if (name == other.name) {
		return age < other.age;
	}
	else {
		return name < other.name;
	}
}