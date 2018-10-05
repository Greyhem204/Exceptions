/*Instructions:
 *Write a program that demonstrates the try/catch exception handler blocks for a minimum of 4 different exceptions.   

 *Write a program that demonstrates the try/catch exception handler blocks for a minimum of 4 different exceptions.   Use more than one catch type.
 
 *Use more than one catch type.
 
 *Explanation of the exceptions and conditions that caused them should be commented appropriately in the program.
  
 *Zip up the Visual Studio project folder and submit.
 
 */

//Include (in order: in/out stream, strings, exceptions, vectors)
#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <array>

using namespace std;// using the namespace std library

void main()
{
	string input;
	int num = 0;
	vector<int> myVector(4, 0);

	do
	{
		cout << "Enter an integer (99 to end): ";
		cin >> input;
		/*Try Requires Handlers*/
		try
		{
			num = stoi(input);
			if (num == 0)
			{
				throw "Cannot divide by 0.";
			}
			else
			{
				myVector.at(0) = 1000 / num;
			}

			if (num != 99) cout << "Input = " << num << endl;
		}
		/*Try Handlers*/
		catch (char * msg)
		{
			cout << msg << endl;
		}
		catch (exception& e)
		{
			cout << "Exception: " << e.what() << '\n';
		}
		catch(...)
		{
			cout << "Catch Others" << endl;
		}

	} while (num != 99);
}

