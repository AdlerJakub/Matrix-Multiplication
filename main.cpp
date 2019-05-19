#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


int main(int argc, char** argv) {
	int w1, h1, w2, h2;
	
	cout << "Podaj wysokosc pierwszej macierzy: " << endl;
	cin >> h1;
	cout<< "Podaj szerokosc pierwszej macierzy: " << endl;
	cin >> w1;

	double matrix1[h1][w1];
	
	cout << "Podaj wysokosc drugiej macierzy: " << endl;
	cin >> h2;
	cout<< "Podaj szerokosc drugiej macierzy: " << endl;
	cin >> w2;
	
	double matrix2[h2][w2];
	
	
	//matrix one
	for(int i=0; i<h1; i++)
	{
		for(int j=0; j<w1; j++)
		{
			cout<< "Podaj pole" << i << j<< endl;
			cin >> matrix1[i][j];
		}
	}
	
	for(int i=0; i<h1; i++)
	{
		for(int j=0; j<w1; j++)
		{
			cout<< matrix1[i][j]<< " , ";
			
		}
		cout << ";" << endl;
	}
	
	
	//matrix 2
	
		for(int i=0; i<h2; i++)
	{
		for(int j=0; j<w2; j++)
		{
			cout<< "Podaj pole" << i << j<< endl;
			cin >> matrix2[i][j];
		}
	}
	
	for(int i=0; i<h2; i++)
	{
		for(int j=0; j<w2; j++)
		{
			cout<< matrix2[i][j]<< " , ";
			
		}
		cout << ";" << endl;
	}
	
	double tmp=0;
	double result[h1][w2];
	for(int k=0; k<h1; k++)
	{
		for(int i=0; i<w2; i++) //was h1
	{
		for(int j=0; j< w1; j++)
		{
			tmp += matrix1[k][j] * matrix2[j][i];
		}
		//cout << tmp << endl;
		result[k][i] = tmp;
		tmp = 0;
			
	}	
	
	}
	
	
	

	
	
	cout << "macierz wynikowa:" << endl;
		for(int i=0; i<h1; i++)
	{
		for(int j=0; j<w2; j++)
		{
			cout<< result[i][j]<< " , ";
			
		}
		cout << ";" << endl;
	}
	
	
	cout << "Kocham Ale!" << endl;
	system("Pause");
	return 0;
}
