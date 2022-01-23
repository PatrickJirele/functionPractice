/*
	191
	main	
	functionWarmUp
	pjirele, jkilloy

*/

#include <iostream>

#include <string>

using namespace std;

int maxIntVal(int x, int y)
{
	if (x > y)
	{
		cout << "Expected: " << endl;
		cout << "Largest number" << endl;
		cout << "Actual: " << endl;
		return x;
	}
	else
	{
		cout << "Expected: " << endl;
		cout << "Largest number" << endl;
		cout << "Actual: " << endl;
		return y;
	}
} // end maxIntVal

int sumNum(int n)
{
	int total = 0;
	for (int i = 0; i <= n; i++)
	{
		total = total + i;
	} // end for

	cout << "Expected: " << endl;
	cout << "The sum of the numbers from 1 to n" << endl;
	cout << "Actual: " << endl;
	return total;
} // end sumNum

bool isEven(int n)
{
	cout << "Expected: " << endl;
	cout << "If the number is even expected true if the number is odd expected false " << endl;
	cout << "Actual: " << endl;
	return n % 2 == 0;
} // end isEven

string fixCaps(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);

	} // end for
	s[0] = toupper(s[0]);

	cout << "Expected: " << endl;
	cout << "returns the string with the first letter capitalized and the rest of the letters lowercased" << endl;
	cout << "Actual: " << endl;
	return s;
} // end fixCaps


void toLowerCase(string& s)
{
	for (int i = 0; i < s.length(); i++)
	{
		s[i] = tolower(s[i]);
	} // end for
	cout << "Expected: " << endl;
	cout << "String in all lowercase" << endl;
	cout << "Actual: " << endl;
	cout << s << endl;
} // end toLowerCase


int xToY(int x, int y)
{
	int total = 1;
	cout << "Expected " << endl;
	cout << "first number raised to the power of y" << endl;
	cout << "Actual" << endl;
	if (y != 0)
	{
		for (int i = 0; i < y; i++)
		{
			total = total * x;
		}// end for
		return total; 
	}
	else
		return 1;
} // end xToY




bool isAllCaps(string s)
{
	cout << "Expected" << endl;
	cout << "returns true if string is all capital lettesr" << endl;
	cout << "Actual" << endl;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] < 65 || s[i] > 90)
		{
			return false;
		} // end if
	} // end for
	return true;
} // end isALlCaps


void toProperCaps(string& n)
{
	cout << "Expected" << endl;
	cout << "Properly capitilized name" << endl;
	cout << "Actual" << endl;
	n[0] = toupper(n[0]);
	for (int i = 1; i < n.length(); i++)
	{
		if (n[i - 1] == ' ')
		{
			n[i] = toupper(n[i]);
		}
		else
		{
			n[i] = tolower(n[i]);
		}
	}// end for

} // end toPrperCaps


int main()
{
	
	int x, y;
	
	cout << "Enter two numbers ";
	cin >> x >> y;
	cout << maxIntVal(x, y) << endl;

	cout << endl;
	cout << endl;

	cout << "Enter a max value ";
	cin >> x;
	cout << sumNum(x) << endl;

	cout << endl;
	cout << endl;

	cout << "Enter a value ";
	cin >> x;
	cout << boolalpha;
	cout << isEven(x) << endl;

	cout << endl;
	cout << endl;
	
	string s;
	cout << "Enter a string ";
	cin >> s;
	cout << fixCaps(s) << endl;

	cout << endl;
	cout << endl;

	cout << "Enter a string ";
	cin >> s;
	toLowerCase(s);
	
	cout << endl;
	cout << endl;
	
	
	cout << "Enter two values ";
	cin >> x >> y;
	cout << xToY(x, y) << endl;

	cout << endl;
	cout << endl;
	
	
	cout << "Enter a string ";
	cin >> s;
	cout << isAllCaps(s) << endl;
	
	cout << endl;
	cout << endl;
	
	
	cout << "Enter a string for propercaps ";

	cin.ignore();
	getline(cin, s);
	toProperCaps(s);

	cout << s << endl;
	

} // end main