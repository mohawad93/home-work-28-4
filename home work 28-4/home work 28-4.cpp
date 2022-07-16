#include <iostream>
#include <string>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumber(int arr[100], int& arrlong)
{
	cout << "Enter number of element :" << endl;
	cin >> arrlong;

	for (int i = 0; i < arrlong; i++)
	{
		arr[i] = RandomNumber(1, 100);

	}
}
void printArray(int arr[100], int arrlong)
{
	for (int i = 0; i < arrlong; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void copyArray(int arrSource[100],int arrDestenetion[100],int arrlong)
{
	for (int i = 0; i < arrlong; i++)
	{
		arrDestenetion[i] = arrSource[i];
	}
	cout << endl;
}



int main()
{
	int arr[100], arrlong,arr2[100];

	srand((unsigned)time(NULL));
	FillArrayWithRandomNumber(arr, arrlong);
	cout << "array 1 element :";
	printArray(arr, arrlong);
	copyArray(arr, arr2, arrlong);
	cout << "\narray 2 element :";
	printArray(arr2, arrlong);
	


}