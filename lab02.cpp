//Elian Renteria
//CSE2020_Lab02

#include <fstream>
#include <iostream>
#include "Student.cpp"

using namespace std;

int main()
{

	int cap,idin,size;
	string namein;
	Student newStudent = Student();
	cout << "\nEnter the capacity of dynamic array: ";
	cin >> cap;
	Student *groups = new Student[cap]; 
	for(int i=0; i < cap; i++)
	{
		
		cout << "\n" << "\nEnter the student id: ";
		cin >> idin;
		if(idin == 0)
		{
			size = i;
			break;
		}
		else
		{
			cout << "\nEnter the student name: ";
			cin >> namein;
		}
		if((i+1)==cap)
			size = cap;
		newStudent.set_id(idin);
		newStudent.set_name(namein);
		groups[i] = newStudent;
	}
	cout << "\nThe students are: ";
	for(int c=0;c<size;c++)
	{
		groups[c].print_student();
	}
	return 0;
}