#include<iostream>
#include<cmath>

void helloword(int a);

int main(void)
{
    int a=5;
    helloword(a);
    return 0;
}

void helloword(int a)
{
    std::cout<<"hello word from a funtion!\n";
    std::cout<< a <<"\n";
}