#include<iostream>
int func(int* val1, int* val2)
{
    int temp = *val1;
    *val1 = *val2;
    (*val2) = temp;
    return 0;
}
int main()
{
    int a = 0, b = 5;
    func(&a,&b);
    std::cout<<a<<b<<std::endl;
}