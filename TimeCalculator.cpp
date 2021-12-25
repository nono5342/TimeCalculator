#include <iostream>
using namespace std;
void main()
{//create loop here to turn program on off 
	int hrs = 0;
	int min = 0;
	int sec = 0;
	int inp, n;
	char op; 
	cout << "Operation? ( + | - )\n";
	cin >> op;
	switch (op)
	{
	case '+':
	{
		cout << "How many times to add?\n";
		cin >> n;

		for (int i = 1; i <= n; i++)
			/*
			put every input in a temp variable
			add it to assigned place (hrs, min, sec) initialized at 0
			loop to cumulate
			*/
		{
			cout << "Time #" << i << "\n";
			cout << "Hours? \n";
			cin >> inp;
			hrs = hrs + inp;
			cout << "Minutes?\n";
			cin >> inp;
			min = min + inp;
			cout << "Seconds?\n";
			cin >> inp;
			sec = sec + inp;

			hrs = hrs + min / 60 + (sec / 60) / 60;
			min = min % 60 + sec / 60;
			sec = sec % 60;
		}
		cout << "Sum: " << hrs << ": " << min << ": " << sec << "\n";
		break;
	}
	case '-':
	{
		cout << "How many times to subtract?\n";
		cin >> n;

		//first entry outside loop to keep things positive

		cout << "Time #1\n";
		cout << "Hours?\n";
		cin >> hrs;
		cout << "Minutes?\n";
		cin >> min;
		cout << "Seconds?\n";
		cin >> sec;

		//rest is normal and boring

		for (int i = 2; i <= n; i++)
		{
			cout << "Time #" << i << "\n";
			cout << "Hours?\n";
			cin >> inp;
			hrs = hrs - inp;
			cout << "Minutes?\n";
			cin >> inp;
			min = min - inp;
			cout << "Seconds?\n";
			cin >> inp;
			sec = sec - inp;

			hrs = hrs + min / 60 + (sec / 60) / 60;
			min = min % 60 + sec / 60;
			sec = sec % 60;
		}
		cout << "Difference: " << hrs << ": " << min << ": " << sec << "\n";
		break;
	}
	default:
		cout << "Please enter + or - and try again!";
	}
}