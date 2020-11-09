#include <iostream>
int fact(int val)
{
    return (val>1? (val)*fact(--val):int(1));
}
int main()
{
    int val;
    std::cout<<"Please input a number"<<std::endl;
    std::cin>>val;
    std::cout<<"result:"<<fact(++val)<<std::endl;
    return 1;
}