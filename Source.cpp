#include<iostream>
#include<ctime>
using namespace std;
void FillArr(int aru[10][10],int const ROW = 10,int const RoW =10) 
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < RoW; j++)
		{
			 aru[i][j] = rand() % 10;
		}
	}

}
void PrintArr(int aru[10][10], int const ROW = 10, int const RoW = 10)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < RoW; j++)
		{
			cout << aru[i][j] << "    ";
		}
		cout << endl;
	}
}
void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int ROW = 10;
	const int RoW = 10;

	int arg[ROW][RoW];
	FillArr(arg,ROW);
	PrintArr(arg,ROW);
	int min = 100;
	bool value = false;
	int pam = 0;
	int k = 0;
	int art[10];

	int arr[ROW];
	int variable;
	for (int i = 0; i < ROW; i++)
	{
		pam = arg[i][i];

		for (int j = 0; j < ROW; j++)
		{

				if (arg[i][j] < min)
				{  
					min = arg[i][j];
					
				
				}
				//variable = arg[i][j];
				arg[i][i] = min;
				art[i] = min;

		}
		arr[i] = pam;
		min = 100;
	}
	int Min = 100;
	int Valik = 0;
	int ValiK = 0;
	int ary[10];
	for (int i = 0; i < ROW;i++)
	{
		for (int j = 0; j < ROW;j++)
		{
		   if(i != j)
		   {
			   
				   if (arg[i][j] == art[i])
				   {
					   arg[i][j] = arr[i];
					   break;
				   }
			   
		   }
		}
	}
	cout << "ÂÒÎÐÎÉ ÌÀÑÑÈÂ" << endl;

	PrintArr(arg,ROW,RoW);
	cout << "ÒÐÅÒÈÉ ÌÀÑÑÈÂ " << endl;
	for (int i = 0; i < ROW; i++)
	{
		cout << arr[i] << endl;		


	}
	cout << endl;


}