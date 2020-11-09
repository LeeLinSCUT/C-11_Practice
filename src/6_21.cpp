#include<iostream>
int compare(const int val, const int* pval)
{
    if(val>*pval)
        return val;
    else
        return *pval;
}
int main()
{
    int val1 = 5;
    int val2 = 10;
    int* pval2 = &val2;
    std::cout<<compare(val1,pval2)<<std::endl;
}