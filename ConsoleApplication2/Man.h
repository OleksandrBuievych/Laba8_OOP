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
		cout << "������ ���� ���" << endl;
		cin >> name;
	
	}

	void reage() {
		cout << "������ ����� ��" << endl;
		cin >> age;

	}
	void reweight() {
		cout << "������ ���� ����" << endl;
		cin >> weight;

	}
	void display() {
		cout << "���: " << name << endl;
		cout << "³�: " << age << endl;
		if (sex) {

			cout << "�����: ������" << endl;
		}
		else {
			cout << "�����: ����" << endl;
		
		}
		cout << "����: " << weight << endl << endl;
	
	}
	
};


class Student : public Man {
public:
	int year;
 Student(string name, int age, bool sex, double weight, double year_s) : Man(name, age, sex, weight) {
	 year = year_s;
 
 };
	void reYearStud() {
		cout << "������ ����� �� ��������� ��������: " << endl;
		cin >> year;
	}
	void yearPlus() {
		year+=1;
		cout << "г� ��������� �������� ��������� �� 1" << endl;
	}
	void display_stud() {
		cout << "���: " << name << endl;
		cout << "³�: " << age << endl;
		if (sex) {

			cout << "�����: ������" << endl;
		}
		else {
			cout << "�����: ����" << endl;

		}
		cout << "����: " << weight << endl;
		cout << "г� ��������� ��������: " << year << endl;
	}
};
//�������� ���� Man(�����), � ������ : ��'�, ��, �i� � ����.
//��������� ������ ��������������� ����, ���� ��� � ���� ����.��������
//�������� ���� Student, �� �� ���� ���� ��������.��������� ������
//��������������� � ��������� ���� ��������.