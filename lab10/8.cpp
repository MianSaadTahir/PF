#include <iostream>
using namespace std;

void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);

main()
{
  int firstArraySize, secondArraySize;

  cout << "Enter the number of elements for the first array (must be 2): ";
  cin >> firstArraySize;
  int firstArray[firstArraySize];
  cout << "Enter " << firstArraySize << " elements for the first array, one per line:" << endl;
  for (int i = 0; i < firstArraySize; i++)
  {
    cin >> firstArray[i];
  }

  cout << "Enter the number of elements for the second array: ";
  cin >> secondArraySize;
  int secondArray[secondArraySize];
  cout << "Enter " << secondArraySize << " elements for the second array, one per line:" << endl;
  for (int i = 0; i < secondArraySize; i++)
  {
    cin >> secondArray[i];
  }

  insertArrayInMiddle(firstArray, firstArraySize, secondArray, secondArraySize);
}

void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
  cout << "Resulting array: [" << firstArray[0] << ", ";
  for (int i = 0; i < secondArraySize; i++)
  {
    cout << secondArray[i] << ", ";
  }
  cout << firstArray[1] << "]";
}