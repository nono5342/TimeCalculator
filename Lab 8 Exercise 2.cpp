#include <iostream>
using namespace std;
void main()
{//create loop here to turn program on off 
	int hrs = 0;
	int min = 0;
	int sec = 0;
	int inp, n;
	cout << "How many times to add?";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Time #" << i << endl;
		cout << "Hours?" << endl;
		cin >> inp;
		hrs = hrs + inp;
		cout << "Minutes?" << endl;
		cin >> inp;
		min = min + inp;
		cout << "Seconds?" << endl;
		cin >> inp;
		sec = sec + inp;

		hrs = hrs + min / 60 + (sec / 60) / 60;
		min = min % 60 + sec / 60;
		sec = sec % 60;
	}
	cout << "Sum: " << hrs << ": " << min << ": " << sec;
}