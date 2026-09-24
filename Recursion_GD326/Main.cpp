#include <iostream>

using namespace std;

void question1();
void question2();
void question3();
void question4();
void question5();

int main()
{
	question5();
}
bool isPalindrome(string &s, int n = 0)
{
	if (n > s.length() / 2)
		return true;
	if (s[n] != s[s.length() - 1 - n])
		return false;
	else
		return isPalindrome(s, n + 1);

}
void question1()
{
	int size = 6;
	string words[] = { "racecar", "derek", "navan",
		"cavan", "gohangasalamiimalasagnahog", "deed"};
	for (int i = 0; i < size; i++)
	{
		cout << words[i] << ": " <<
			(isPalindrome(words[i]) ? "Yes" : "No") << endl;
	}
}

void findMinMax(int* arr, int size, int& min, int& max, int n = 0)
{
	if (n == size)
	{
		return;
	}
	else
	{
		if (arr[n] < min|| n == 0)
		{
			min = arr[n];
		}
		if (arr[n] > max || n == 0)
		{
			max = arr[n];
		}
		findMinMax(arr, size, min, max, n + 1);
	}
}

void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i != 0)
			cout << ", ";
		cout << *arr;
		arr++;
	}
	cout << endl;
}

void question2()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 20;
	}
	print(arr, size);
	int min=0, max=0;
	findMinMax(arr, size, min, max);
	cout << "Min: " << min << " & Max: " << max << endl;
} 

string reverse(string& s, int n = 0)
{
	if (n == s.size())
		return "";
	else
		return reverse(s, n + 1) + s[n];
}

void question3()
{
	string word = "pots&pans";
	cout << word << " in reverse is " << reverse(word) << endl;
}
int stringToInteger(string& num, int n=0)
{
	if (n == num.size())
		return 0;
	return 10*stringToInteger(num, n+1) + num[num.length() - 1 - n] - '0';
}
void question4()
{
	string numericString;
	cout << "Please enter a number: ";
	cin >> numericString;
	cout << "As Integer: " << stringToInteger(numericString);
}

int power(int x)
{
	if (x == 0)
		return 1;
	return 2 * power(x - 1);
}

void question5()
{
	for (int i = 1; i <= 10;i++)
	{
		cout << "2^" << i << "  = " << power(i) << endl;
	}
}