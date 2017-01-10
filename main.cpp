#include <iostream>
#include <cmath>
using namespace std;

void print_palindrom (int n)
{
    int iFirst = 1, iLast = 9;  //half (with central digit)
    for (int i = 1; i < (n+1)/2; i++)
    {
        iFirst = iFirst * 10;
        iLast = iLast * 10 + 9;
    }

    int iRevers, temp;
    for (int i = iFirst; i <= iLast; i++)
    {
        iRevers = 0;
        if (n % 2 == 0)
        {
            temp = i;
        }
        else
        {
            temp = i / 10; // without central digit
        }

        while (temp != 0)
        {
            iRevers = iRevers * 10 + temp % 10; //Переворачиваем число по цифрам
            temp /= 10; //Отбрасываем последнюю цифру
        }
        temp = n/2;
        temp = i * pow(10.0,temp) + iRevers;  //palindrom

        if (temp % 9 == 0)
            cout << temp << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    print_palindrom (n);
    return 0;
}
