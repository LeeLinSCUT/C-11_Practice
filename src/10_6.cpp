#include<iterator>
#include<algorithm>
#include<iostream>
int main()
{
    int ia[] = {1,2,3,4,5,6,6,6,6};
    for(auto mem:ia)
        std::cout<<mem<<std::endl;
    std::fill_n(ia,sizeof(ia),0);
    for(auto mem:ia)
        std::cout<<mem<<std::endl;
}