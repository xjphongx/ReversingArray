/*
Create a function called 'reverseArray' that receives as arguments an int array and its size. Reverse the elements in place based on the example.
Example
Before: 1 2 3 4
After: 4 3 2 1

*/
#include <iostream> 

using namespace std;

void reverseArray(int a[],int s);

int main() {
	//print out the original array
	int size;
	int numArray[size];
	for (int a = 0; a < 4; a++)
	{
		cout << numArray[a];
	}
	// function call and print
	reverseArray(numArray, 4);

	system("pause");
	return 0; 
}
void reverseArray(int a[], int num)
{
	int temp;
	for (int j = 0; j < 4; j++)
	{
		temp = a[j];
		a[j] = a[4 - j - 1];
		a[4 - j - 1] = temp;
	}
	
};

void reverseArray(int & a[], int num)
{

}
