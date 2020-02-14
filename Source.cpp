#include<iostream>
#include<ctime>
using namespace std;
void Fillarr(int arr[3][8], int const ROW,int const WAL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < WAL; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}
}
void Printarr(int arr[3][8], int const ROW, int const WAL)
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < WAL;j++)
		{
			cout << arr[i][j]<< "  ";
		}
		cout << endl;
	}
}
void main()
{
	setlocale(LC_ALL, "Ru");
	int ROW = 3,WAL=8;
	srand(time(NULL));
	int arg[3][8];
	Fillarr(arg, ROW, WAL);
	Printarr(arg, ROW, WAL);
}