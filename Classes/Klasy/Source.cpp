#include <iostream>
#include <string>
#include "Array.h"
using namespace std;


class Person {
	int id;
public:
	string name;
	int age;
	int room;

	Person(int i) {
		id = i;
		name = "";
		age = 0;
		room = 0;
	}

	Person(int i, string n, int a, int r) {
		id = i;
		name = n;
		age = a;
		room = r;
	}

	//metoda ktora sluzy tylko do pobierania dancyh nazywana jest czesto getterem 
	int getId() {
		return id;
	}

	void introduceSelf(){
		cout << "Hi, my name is " << name << ", I'm " << age << " years old.\n";
	}

	void read() {
		cout << "name: ";
		cin >> name;
		cout << "age: ";
		cin >> age;
		cout << "room: ";
		cin >> room;
	}
};



int main() {
	Array<char> a;
	for (int i = 0; i < 10; ++i) {
		a.addFront(i+'a');
		a.print();
		cout << endl;
	}
	a.at(6) = '2';
	//a.rotateRight();
	a.rotateLeft();
	a.set(3, '@');
	a.print();
	a.popBack();
	a.popBack();
	a.print();
	a.fill(8+'a');
	a.print();
	a.popBack();
	a.popBack();
	a.popBack();
	a.print();
				}


int main1() {
	Person p1(1);
	Person p2(2);
	Person p3(3, "Jan", 43, 4567);
	p1.age = 0;
	cout << p1.getId() << endl;
	p3.introduceSelf();
	
	p1.read();
	p1.introduceSelf();
	return 0;
}