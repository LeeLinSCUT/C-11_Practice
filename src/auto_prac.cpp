#include <iostream>
#include <string>
#include <vector>
int main()
{
    int num_arr[]={1,2,3,4,5};
    int *beg = std::begin(num_arr);
    int *end = std::end(num_arr);
    for(;beg!=end;beg++)
    {
        *beg = 0;
    }
    for(auto mem:num_arr)
    {
        std::cout<<mem<<std::endl;
    }
    return 0;
}