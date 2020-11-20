#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
struct Sales_data
{
    std::string book_name;
};
bool compareName(const Sales_data &s1, const Sales_data &s2)
{
    return s1.book_name.size()<s2.book_name.size();
}
int main()
{   
    std::vector<Sales_data> SD_v;
    Sales_data a;
    while(std::cin>>a.book_name)
    {
        SD_v.push_back(a);
    }
    std::stable_sort(SD_v.begin(),SD_v.end(),compareName);
    for(auto mem:SD_v)
    {
        std::cout<<mem.book_name<<std::endl;
    }
}