#include<iostream>
#include<cmath>

int sum(int m, int n);

int main(void)
{
    std:: cout << sum(200000,300000)<< "\n";
    return 0;
}

int sum(int m, int n)
{
    int result=0;
    for (int ii = m; ii <= n; ++ii)
    {
        if ((ii%3==0) or (ii%5==0) or (ii%7==0))
        {
            result +=ii;
        }
        
    }
    
    return result;
}