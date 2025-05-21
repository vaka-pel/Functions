#include<iostream>
using namespace std;

void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

void Print(int arr[], const int n);
void Print(double arr[], const int n);

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

void Sum(int arr[], const int n, int s = 0);
void Sum(double arr[], const int n, double s = 0);
void Sum(bool arr[], const int n, bool s = 0);
void Sum(char arr[], const int n, char s = 0);

void Avg(int arr[], const int n, int a = 0);
void Avg(double arr[], const int n, double a = 0);
void Avg(bool arr[], const int n, bool a = 0);
void Avg(char arr[], const int n, char a = 0);

void MinValueIn(int arr[], const int n, int min = 0);
void MinValueIn(double arr[], const int n, double min = 0);
void MinValueIn(bool arr[], const int n, bool min = 0);
void MinValueIn(char arr[], const int n, char min = 0);

void MaxValueIn(int arr[], const int n, int max = 0);
void MaxValueIn(double arr[], const int n, double max);
void MaxValueIn(bool arr[], const int n, bool max);
void MaxValueIn(char arr[], const int n, char max);




void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];

	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
    Print(arr, n);
   	Sum(arr, n);
	Avg(arr, n);
    MinValueIn(arr, n);
    MaxValueIn(arr, n);
   

	
	const int SIZE = 8;
	double brr[SIZE];
    FillRand(brr, SIZE);
    Print(brr, SIZE);
    Sort(brr, SIZE);
    Print(brr, SIZE);
    
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}
 void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
 for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])

			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)

		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sum(int arr[], const int n, int s)
{	
   	for (int i = 0; i < n; i++)
 	{
		s += arr[i];
	}
	cout << "Сумма: " << s << endl;		
}
void Sum(double arr[], const int n, double s)
{	
   	for (int i = 0; i < n; i++)
 	{
		s += arr[i];
	}
	cout << "Сумма: " << s << endl;		
}
void Sum(bool arr[], const int n, bool s)
{	
   	for (int i = 0; i < n; i++)
 	{
		s += arr[i];
	}
	cout << "Сумма: " << s << endl;		
}
void Sum(char arr[], const int n, char s)
{	
   	for (int i = 0; i < n; i++)
 	{
		s += arr[i];
	}
	cout << "Сумма: " << s << endl;		
}

void Avg(int arr[], const int n, int a)
{ 
     for (int i = 0; i < n; i++)
	 { 
		 a  += arr[i];
     }
     cout << "Среднее-арифметическое: " <<  a / n  << endl;
        
}
void Avg(double arr[], const int n, double a)
{ 
     for (int i = 0; i < n; i++)
	 { 
		 a  += arr[i];
     }
     cout << "Среднее-арифметическое: " <<  a / n  << endl;
        
}
void Avg(bool arr[], const int n, bool a)
{ 
     for (int i = 0; i < n; i++)
	 { 
		 a  += arr[i];
     }
     cout << "Среднее-арифметическое: " <<  a / n  << endl;
        
}
void Avg(char arr[], const int n, char a)
{ 
     for (int i = 0; i < n; i++)
	 { 
		 a  += arr[i];
     }
     cout << "Среднее-арифметическое: " <<  a / n  << endl;
        
}

void MinValueIn(int arr[], const int n, int min)
{ 
		min = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] < min)min = arr[i];
     }
     cout << "Минимальное значение : " <<  min  << endl;
        
}
void MinValueIn(double arr[], const int n, double min)
{ 
		min = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] < min)min = arr[i];
     }
     cout << "Минимальное значение : " <<  min  << endl;
        
}
void MinValueIn(bool arr[], const int n, bool min)
{ 
		min = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] < min)min = arr[i];
     }
     cout << "Минимальное значение : " <<  min  << endl;
        
}
void MinValueIn(char arr[], const int n, char min)
{ 
		min = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] < min)min = arr[i];
     }
     cout << "Минимальное значение : " <<  min  << endl;
        
}

void MaxValueIn(int arr[], const int n, int max)  
{ 
		max = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] > max)max = arr[i];
     }
     cout << "Максимальное значение : " <<  max  << endl;
     
}
void MaxValueIn(double arr[], const int n, double max)  
{ 
		max = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] > max)max = arr[i];
     }
     cout << "Максимальное значение : " <<  max  << endl;
     
}
void MaxValueIn(bool arr[], const int n, bool max)  
{ 
		max = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] > max)max = arr[i];
     }
     cout << "Максимальное значение : " <<  max  << endl;
     
}
void MaxValueIn(char arr[], const int n, char max)  
{ 
		max = arr[0];
	 for (int i = 0; i < n; i++)
	 { 
		 if (arr[i] > max)max = arr[i];
     }
     cout << "Максимальное значение : " <<  max  << endl;
     
}

