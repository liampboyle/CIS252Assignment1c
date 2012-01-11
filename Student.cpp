/* *********************************************************************
 * Liam Boyle
 * CIS 252-55Z1
 * Assignment 1 Student.cpp
 * 11 Jan 2012
 * demonstrating a basic data structure
 * *********************************************************************
 */

 #include <iostream>
 #include <cstdlib>
 using namespace std;

 struct Student
 {
	 int creditHours;
	 double gradePointAverage;
 };

int main()
{
	// Main function variable declarations
		//pass

	// Main function struct declarations
	Student oneSophomore;

	// Main function code body

	// I/O sequence
	cout << "Please enter student's number of credit hours: ";
	cin >> oneSophomore.creditHours;
	cout << endl;

	cout << "Please enter student's grade point average: ";
	cin >> oneSophomore.gradePointAverage;
	cout << endl;

	cout << "The number of credit hours is:  "
			<< oneSophomore.creditHours << endl;
	cout << "The grade point average is:  "
			<< oneSophomore.gradePointAverage << endl;

	return 0;
}
