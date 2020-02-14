#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int SIZE = 20;
	int arr[SIZE][SIZE];
		int Variable;
		bool  value;

		for (int i = 0; i < SIZE; )
		{
			Variable = rand() % 80;
			value = false;

			for (int j = 0; j < i; j++)
			{
				if (arr[j][j] == Variable)
				{
					value = true;
					break;
				}

			}
			if (!value)
			{
				arr[i][i] = Variable;
				++i;
			}
			
		}
		for (int i = 0; i < SIZE; i++)
		{
			cout << arr[i][i] << endl;
		}






}