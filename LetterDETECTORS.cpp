#include <iostream>
using namespace std;
int main()
{
	system("cls");
	char letter = ' ';
	cout << "Enter character to find its presence: ";
	cin >> letter;
	int size;
	cout << "Size: ";
	cin >> size;
	string data[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter elements in the array: ";
		cin >> data[i];
	}

	int counter = 0;

	for (int i = 0; i < size; i++)
	{

		string word = data[i];

		for (int j = 0; j < word.length(); j++)
		{
			if (word[j] == letter)
			{
				counter = counter + 1;
			}
		}
	}
		cout << "Output: " << counter;
}