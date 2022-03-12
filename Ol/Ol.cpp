


//Требуется узнать максимальное число, сумма цифр в десятичной записи которого равна n,
//а также в его десятичной записи нет нулей и подряд идущих одинаковых цифр.
#include <iostream>
using namespace std;
int sumCifr(int);
int numRazrad(int n);
int main()
{
   /* int n;
    cin >> n;*/
    
    //нолей нет вообще
    //подряд идущие одинаковые цифры нельзя
    //чем меньше каждая цифра в разрядной сетке, тем больше само число
    //т.е n = 5 то можно 5, 14,23 ,32,41,212
    // 0<=n<=1000
    int sum = 0;
  
   /* for (int i = 1; i < n && sum != n; i++)
    {
        sum += i;
        cout << i;
    }*/

    //for (int i = 1; sumCifr(i) <= 2 ; i++)
    //{
    //    cout << i << endl;
    //}

    numRazrad(7);
}

int sumCifr(int cifr)
{
   
    int sum = 0;
    while (cifr != 0)
    {
        sum += cifr % 10;
        cifr /= 10;
    }
    return sum;

}

int numRazrad(int n) {//сколько разрядов у числа сумма цифер которого примерно равна n
    int numRazrad = 0;
    if (n == 1)
        numRazrad = 1;
    else
    {
        int i = 1;
        while (n > 0) {
            n -= i;
            cout << n<<endl;
            i++;
        }
    }

    return numRazrad;
}

