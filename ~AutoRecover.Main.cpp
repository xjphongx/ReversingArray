/*
Create a function called 'reverseArray' that receives as arguments an int array and its size. Reverse the elements in place based on the example.
Example 
Before: 1 2 3 4 
After: 4 3 2 1 
*/
#include <iostream> 

using namespace std;
void printArray(int theArray[], int size);
void reverseArray(int *intArr,int size);

int main() {

	//calls for user input size of the array
	int size = 0;
	cout << "Please enter an array size" << endl;
	cin >> size;
	
	//using dynamic array topic
	int *intArry;
	intArry = new int[size];
	
	//calls for the actual array values
	cout << "Please enter the values for the array" << endl;
	for (int a = 0; a < size  ; a++)
	{
		cin >>intArry[a];
	}
	printArray(intArry,size);//prints the original
	
	/*
	delete [] intArray;
	intArray = NULL;
	Might need to use this
	*/

	//reversing the array starts down below this comment
	cout << "\nPrinting array in reverse order" << endl;
	reverseArray(intArry, size);
	printArray(intArry, size);//prints the new array

	system("pause");
	return 0; 
}
void printArray(int theArray[], int size) {
	for (int x = 0; x < size; x++)
	{
		cout << theArray[x] << " ";
	}
}
/*using pointers to reverse the order since 
pointer arrays are already passed by reference
from what i read online
*/
void reverseArray(int *intArry, int size)
{
	//create an array pointer for last elem
	//i hope this works
	//i might need to go over this again
	int temp;
	int *end = intArry + size - 1; //bc array index is size-1
	while (end > intArry)
	{
		temp = *intArry;
		*intArry = *end;
		*end = temp;
		intArry++;
		end--;
	}



	
};

