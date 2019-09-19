#include<iostream>
#include<cmath>

int main(void)
{
    int y{0};
    int x{0};
    int sum{0};
    for (int i = 0; i < 10000; i++)
    {
        x=i%3;
        y=i%5;
        if (x==0 || y==0)
        {
            //std::cout<< i << std::endl;
            sum=sum+i;
        } 
    }
    std::cout<<"la suma de los numeros multiplos de 3 y 5 antes de 1000 es: "<< sum<< std::endl; 
    
    return 0;

}