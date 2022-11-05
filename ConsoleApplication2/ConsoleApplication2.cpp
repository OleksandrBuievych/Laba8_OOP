
#include <iostream>
#include <Windows.h>
#include "Man.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
   Man Oleg("Олег", 23, true, 66);
   Oleg.display();
   Oleg.rename();
   Oleg.display();
   Student Olya("Оля", 23, false, 55,2005);
   Olya.display_stud();
   Olya.yearPlus();
   Olya.display_stud();
}

