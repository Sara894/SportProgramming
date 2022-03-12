


//Требуется узнать максимальное число, сумма цифр в десятичной записи которого равна n,
//а также в его десятичной записи нет нулей и подряд идущих одинаковых цифр.
//https://codeforces.com/contest/1647/problem/B
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;//размеры таблицы
		cin >> n >> m;
		bool elegant =1;
		/*if (elegant)
			cout << "YES";
		else
			cout << "NO";*/
		int** arr = new int *[n];
		for (int i = 0; i < n; i++)
			arr[i] = new int[m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				printf("\n arr[%d][%d]: ", i, j);
				cin >> arr[i][j];
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << "\n";
		}

	}
}