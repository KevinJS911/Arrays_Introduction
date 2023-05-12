#include <iostream>

using namespace std;

int main()
{
	//1-D array
	//One way
	int aInt1[5];
	aInt1[0] = 1000;
	aInt1[1] = 1001;
	aInt1[2] = 1002;
	aInt1[3] = 1003;
	aInt1[4] = 1004;

	cout << aInt1[0]<<endl << aInt1[1] << endl << aInt1[2] << endl << aInt1[3] << endl
		<< aInt1[4] << endl;

	//Second way
	int aInt2[5] = { 1000, 1001, 1002, 1003, 1004 };
	cout << aInt2[0] << endl << aInt2[1] << endl << aInt2[2] << endl << aInt2[3] << endl
		<< aInt2[4] << endl;
	
	//Pointer to array is the first element
	cout << *aInt2<<endl;

	//Multidimensional Array
	int k = 0;
	int aInt3[5][4];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			aInt3[i][j] = k;
			k++;
			cout << aInt3[i][j] <<" ";
		}
		cout << endl;
	}

	int aInt4[5][5] = {
		{0,1,2,3,4},
		{5,6,7,8,9},
		{10,11,12,13,14},
		{15,16,17,18,19},
		{20,21,22,23,24}
	};

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout <<" "<< aInt4[i][j] ;
		}
		cout << endl;
	}

	//Chars and strings
	char aCharacter = 'x';
	cout << "aCharacter: " << aCharacter<< endl;

	char firstName[] = { 'K', 'e', 'v', 'i', 'n', '\0' };
	cout << "firstName: " << firstName << endl;

	char lastName[] = "Stanly"; // this is also a string but mutable (basically each letter is different
	cout << "lastName: " << lastName << endl;

	string middleName = "John"; // this is a string but is immutable (i.e., John is 1 bucket)
	cout << "middleName: " << middleName << endl;

	cout << strlen(lastName);

	//Adding commas to long number


	return 0;
}