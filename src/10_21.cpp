#include<iostream>
int main()
{
    int i = 2;
    auto f = [&i] ()-> bool {return i>0?!bool(i--):!bool(i);};
    std::cout<<f()<<std::endl;
    std::cout<<f()<<std::endl;
    std::cout<<f()<<std::endl;  
    std::cout<<f()<<std::endl; 
}