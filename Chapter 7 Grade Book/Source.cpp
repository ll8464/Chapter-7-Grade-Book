//Lee Lacey
//ITSE 1307
//Chapter 7 Grade Book

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int); //Get test scores
double getTotal(const double[], int); //Totals test scores per student
void getName(string[]); //Saves the Name to an Array
string getLetter(double); //Assigns a Letter grade

int main()
{
	//Variables and Initialization

	const int TESTS = 4;
	const int SIZE = 5; //SIZE of class
	string students[SIZE]; //Student Name Array
	int count; // Loop counter
	char letter[SIZE]; //Letter grade Array
	double testScores[TESTS], total, average;
	double scores[SIZE][TESTS];//Test scores for double array
	string Names[SIZE]; //array for names
	int average1, average2, average3, average4, average5; //Variables to hold average tests


	//Five Double Arrays
	double student1[TESTS];
	double student2[TESTS];
	double student3[TESTS];
	double student4[TESTS];
	double student5[TESTS];

	cout << fixed << showpoint << setprecision(1); //Formatting Output

	//Students Names
	getName(Names);
	
	
	//Get Test Scores
	cout << "\nTest Scores for First Student" << endl;
	getTestScores(student1, TESTS);

	//TOTAL TEST SCORES
	total = getTotal(student1, TESTS);

	average1 = total / 4;

	
	//-------------------------------------Student 2
	//Get Test Scores
	cout << "\nTest Scores for Second Student" << endl;
	getTestScores(student2, TESTS);

	//TOTAL TEST SCORES
	total = getTotal(student2, TESTS);

	average2 = total / 4;

	
	//-------------------------------------Student 3
	//Get Test Scores
	cout << "\nTest Scores for Third Student" << endl;
	getTestScores(student3, TESTS);

	//TOTAL TEST SCORES
	total = getTotal(student3, TESTS);

	average3 = total / 4;

	
	//--------------------------------------Student 4
	//Get Test Scores
	cout << "\nTest Scores for Fourth Student" << endl;
	getTestScores(student4, TESTS);

	//TOTAL TEST SCORES
	total = getTotal(student4, TESTS);

	average4 = total / 4;

	
	
	//--------------------------------------Student 5
	//Get Test Scores
	cout << "\nTest Scores for Fifth Student" << endl;
	getTestScores(student5, TESTS);

	//TOTAL TEST SCORES
	total = getTotal(student5, TESTS);

	average5 = total / 4;

	
	cout << "\n Test and Letter Scores\n" << endl;

	//Display
	cout << Names[0] << "'s Average Test Score: " << average1 << endl;
	cout <<"Letter Grade:" << getLetter(average1) << endl;
	cout << Names[1] << "'s Average Test Score: " << average2 << endl;
	cout << "Letter Grade:" << getLetter(average2) << endl;
	cout << Names[2] << "'s Average Test Score: " << average3 << endl;
	cout << "Letter Grade:" << getLetter(average3) << endl;
	cout << Names[3] << "'s Average Test Score: " << average4 << endl;
	cout << "Letter Grade:" << getLetter(average4)<<endl;
	cout << Names[4] << "'s Average Test Score: " << average5 << endl;
	cout << "Letter Grade:" << getLetter(average5) << endl;
	return 0;
}
void getTestScores(double scores[], int size)
{
	//Loop Counter
	int index;
	//Get each test score
	for (index = 0; index <= size - 1; index++)
	{
		cout << "Enter Test Score Number "
			<< (index + 1) << ": ";
		cin >> scores[index];
	}
}
double getTotal(const double numbers[], int size)
{
	double total = 0;//Accumulator
	//Add the elements to total
	for (int count = 0; count < size; count++)
		total += numbers[count];
	//Return the total
	return total;
}

void getName(string Names[])
{
	//Input for Student's Name
	cout << "Name of Students:\n";

	for (int count = 0; count < 5; count++)
	{
		cout << "Enter the student's name: ";
		cin >> Names[count];
	}

}
string getLetter(double average)
{
	string letter;
	if (average <= 100 && average >= 90)
		letter = "A";
	else if (average < 90 && average >= 80)
		letter = "B";
	else if (average < 80 && average >= 70)
		letter = "C";
	else if (average < 70 && average >= 60)
		letter = "D";
	else if (average < 60 && average >= 0)
		letter = "F";
	else 
		cout << "Invalid input, please try again";

	return letter;


}