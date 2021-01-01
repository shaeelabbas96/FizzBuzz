/*Programmed by: Muhammad Shaeel Abbas
29th September 2020
This program effectively demonstrates a classification tree that predicts whether a patient would need to be admitted
To the hospital, based on their input parameters such as age, race, sex, etc*/


//Import libraries
#include <iostream> 
#include <string>
using namespace std; //std input output

string isMult(int i)
{
	string output;
	if (i % 3 == 0)
	{
		output += "Fizz";
	}
	if(i % 5 == 0)
	{
		output +="Buzz";
	}
	if (i % 3 != 0 && i % 5 != 0)
	{
		output += to_string(i);
	}

	return output;
	output = "";
}


int main()

{
	for (int i = 0; i <= 100; i++)
	{
		cout << isMult(i) << endl;
	}

	
	system("pause");
	return 0;
}