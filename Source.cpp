#include<iostream>
using namespace std;
#define MAX 10

void input(int array[][MAX], char name [], int size)
{
	char ch;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Name of Vertice No " << i + 1 << " :";
		cin >> name[i];
	}
	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size; j++)
		{
			cout << name[i] << " have connection with " << name[j] << "(y/n): ";
			cin >> ch;
			if (toupper(ch) == 'Y')
				array[i][j] = 1;
			else
				array[i][j] = 0;
		}
		cout << endl << endl;
	}
}
void display(int array[][MAX], char name[], int size)
{
	cout << "\t";
	for (int i = 0; i < size; i++)
		cout<< name[i] << "\t";
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << name[i] << "\t";
		for (int j = 0; j < size; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int array[MAX][MAX];
	char name[MAX];
	int size;

	cout << "Enter Number of Nodes: ";
	cin >> size;

	input(array, name, size);
	display(array, name, size);

	system("pause");
}