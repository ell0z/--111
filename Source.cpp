#include <iostream> 
#include <time.h>
using namespace std;
void main()
{
	double time_spent = 0.0;
	clock_t begin = clock();
	setlocale(LC_ALL, "rus");
	int rows = 0;
	cout << "vvedite n=" << endl;
	cin >> rows;
	int cols = 0;
	cout << "vvedite n=" << endl;
	cin >> cols;

	int **arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		
	   arr[i] = new int[cols];

	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() %20;
		}
		
	}
	int sum(0);
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i < j)

				sum+=arr[i][j];
		} 

	}
	clock_t end = clock();
	time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Vremya vipolnenia %f seconds ==  ", time_spent);
	delete[] arr;
	cout << sum ;
}