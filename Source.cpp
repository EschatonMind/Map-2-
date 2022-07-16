#include "Person.h"


int main() {

	//--------------------------- creating a map of " person " and " it's number " is the key
	map<int, Person> people;

	//--------------------------- creating a map of " person " and " it's Person " is the key
	map<Person, int> people2;

	//--------------------------- Initializing " people " with data
	string name;
	int age;
	for (int i = 1; i <= 5; i++) {

		cin >> name;
		cin >> age;

		people.insert(make_pair(i, Person(name, age)));
	}

	//--------------------------- Iterating through map inorder to call " print " function for the " person " and also showing the map
	map<int, Person>::iterator it = people.begin();
	for (it; it != people.end(); it++) {

		cout << " | " << it->first << " | " << flush; 
		it->second.print() ;
	}

	//--------------------------- Initializing " people2 " with data
	string name2;
	int age2;
	for (int i = 1; i < 5; i++) {
		cin >> name2;
		cin >> age2;
		people2.insert(make_pair(Person(name2, age2), i));
	}

	//--------------------------- Iterating through map inorder to call " print " function for the " person " and also showing the map, tip: because in the " people2 ", " person " is the key while we know keys are unique so we make sure of this by first : making the " print() " function const and second: by oerloading the " < " operator 
	map<Person, int>::iterator it2 = people2.begin();
	for (it2; it2 != people2.end(); it2++) {
		cout << " | " << it2->second << " | " << flush;
		it2->first.print();
	}

	return 0;

}