/*
Name: Kip/Kasey Brasher
Date: 11/29/2021
Class: CIS 1202


*/

#include <iostream>
using namespace std;


class invalidCharacterException {}; // If start is not a letter (A-Z, a-z), throw an invalidCharacterExcpeption.
class invalidRangeException {}; //If the target is not a letter, throw an invalidRangeException.

/*
notes:
-	If start is not a letter (A-Z, a-z), throw an invalidCharacterExcpeption.
-	If the target is not a letter, throw an invalidRangeException.
-	Otherwise, return the letter described by the start and offset.


*/

char character(char start, int offset)
{
	int AsciiValue = start + offset;

	

	if ( (AsciiValue < 65 || AsciiValue  > 90) && ( (AsciiValue < 97) || (AsciiValue > 122) ) )
		throw invalidRangeException();

	if ((start < 65 || start > 90) && ((start < 97) || (start > 122)))
		throw invalidCharacterException();


	return char(AsciiValue);

}


int main()
{
	char start;
	int offset;
	
	cout << character('a', 1) << endl;


	try 
	{
		character('a', -1);
	}

	catch (invalidRangeException i) 
	{
		cout << "Error! invalidRangeException" << endl;
	}


	cout << character('Z', -1) << endl;



	try 
	{
		character('?', -1);
	}

	catch (invalidCharacterException i) 
	{
		cout << "Error! invalidCharacterException" << endl;
	}
}