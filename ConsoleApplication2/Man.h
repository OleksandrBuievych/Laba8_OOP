#pragma once
#include <iostream>
#include <string.h>
using namespace std;
class Man
{
public:
	string name;
	int age;
	bool sex; // True - man, false - women
	double weight;
	Man(string name, int age, bool sex, double weight) : name(name), age(age), sex(sex), weight(weight) {};
	void rename() {
		cout << "Введіть нове імя" << endl;
		cin >> name;
	
	}

	void reage() {
		cout << "Введіть новий вік" << endl;
		cin >> age;

	}
	void reweight() {
		cout << "Введіть нову вагу" << endl;
		cin >> weight;

	}
	void display() {
		cout << "Імя: " << name << endl;
		cout << "Вік: " << age << endl;
		if (sex) {

			cout << "Стать: чоловік" << endl;
		}
		else {
			cout << "Стать: жінка" << endl;
		
		}
		cout << "Вага: " << weight << endl << endl;
	
	}
	
};


class Student : public Man {
public:
	int year;
 Student(string name, int age, bool sex, double weight, double year_s) : Man(name, age, sex, weight) {
	 year = year_s;
 
 };
	void reYearStud() {
		cout << "Введіть новий рік закінчення навчання: " << endl;
		cin >> year;
	}
	void yearPlus() {
		year+=1;
		cout << "Рік закінчення навчання збільшився на 1" << endl;
	}
	void display_stud() {
		cout << "Імя: " << name << endl;
		cout << "Вік: " << age << endl;
		if (sex) {

			cout << "Стать: чоловік" << endl;
		}
		else {
			cout << "Стать: жінка" << endl;

		}
		cout << "Вага: " << weight << endl;
		cout << "Рік закінчення навчання: " << year << endl;
	}
};
//Створити клас Man(людей), з полями : ім'я, вік, рiд й вага.
//Визначити методи перепризначення імені, зміни віку й зміни ваги.Створити
//похідний клас Student, що має поле року навчання.Визначити методи
//перепризначення й збільшення року навчання.