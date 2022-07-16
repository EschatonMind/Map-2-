#pragma once
#include <iostream>
#include<map>
using namespace std;
class Person
{
private:

	string name;
	int age;

public:

	Person(string name, int age);
	void print()const;
	bool operator<(const Person& other) const;
};

