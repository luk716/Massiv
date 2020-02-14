#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
		srand(time(NULL));
		int arr[15];
		int Variable;
		bool value;
		for (int i = 0; i < 15;)
		{
			value = false;
			Variable = rand()%40;
			for (int j = 0; j < i+1; j++)
			{ 
				if (arr[j] == Variable) 
				{
					value = true;
					break;
				}
				if(!value)
				{
					arr[i] = Variable;
				
				}
			}
			i++;
		}
		for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
		{
			cout << arr[i] << " ";
		}

}