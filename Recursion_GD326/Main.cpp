#include <iostream>

using namespace std;

void question1();
void question2();
void question3();
void question4();


int main()
{
	question2();
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
}

void question2()
{
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 20;
	}
	print(arr, size);
}