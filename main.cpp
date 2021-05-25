#include <iostream>
#include <vector>

using namespace std;

struct studendRecord
{
	int studentID;
	string name;
	string major;
	double GPA;

};


int main()
{
	const int MAX = 40;
	HashTable<studendRecord> students(MAX);

	int size = inputInteger("Enter a number of read-in record (1..." + to_string(MAX) + "): ", 1, MAX);

	//A > Read data file, hash and insert into the dynamic array
	// students.insert() all number of records

	//B > Find an element from the dynamic array
	//students.find_index()
	
	//C > Insert an element into the dynamic array
	//students.insert()
	
	//D > Remove an element from the dynamic array
	//students.remove()
	
	//E > Display all records from the array
	cout << students << '\n';

	return 0;
}