#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N];
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double myMatrix[N][N]){
for (int i = 0; i < N; i++)
{
	cout<<"Row "<<i+1<<": ";
	for (int j = 0; j < N; j++)
	{
		cin>>myMatrix[i][j];
	}
}
}

void findLocalMax(const double fisrt[][N], bool second[][N]){
for (int i = 0; i < N; i++)
{
	for (int j = 0; j < N; j++)
	{
		second[i][j]=0;
	}
}
for (int i = 1; i < N-1; i++)
{
	for (int j = 1; j < N-1; j++)
	{
		if(fisrt[i][j]>=fisrt[i-1][j]&&fisrt[i][j]>=fisrt[i+1][j]&&fisrt[i][j]>=fisrt[i][j-1]&&fisrt[i][j]>=fisrt[i][j+1])
		{
			second[i][j]=1;
		}
		else
		{
			second[i][j]=0;
		}
		
	}
}
}

void showMatrix(const bool last[][N]){
for (int i = 0; i < N; i++)
{
	for (int j = 0; j < N; j++)
	{
		cout<<last[i][j]<<" ";
	}
	cout<<"\n";
}
}
