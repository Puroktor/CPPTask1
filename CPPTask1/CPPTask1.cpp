#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cout << "Matrix row number:" << endl;
	cin >> n;
	cout << "Matrix column number:" << endl;
	cin >> m;
	int** matrix = new int* [n];
	cout << "Matrix:" << endl;
	for (int i = 0; i < n; i++)
	{
		matrix[i] = new int[m];
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	bool* logicalVector = new bool[n];
	for (int i = 0; i < n; i++)
	{
		bool isIncreasing = true;
		for (int j = 1; j < m; j++)
		{
			if (abs(matrix[i][j - 1]) >= abs(matrix[i][j]))
			{
				isIncreasing = false;
				break;
			}
		}
		logicalVector[i] = isIncreasing;
	}

	cout << "Logical vector:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << logicalVector[i] << " ";
	}

	for (int i=0; i<n; i++) 
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	delete[] logicalVector;
}