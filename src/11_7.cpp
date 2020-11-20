#include<map>
#include<iostream>
#include<vector>
#include<string>
typedef std::map<std::string,std::vector<std::string>> fml_type;
void add_new(fml_type &);
void print_fml(const fml_type &);
int main()
{
    fml_type fmls;
    add_new(fmls);
    print_fml(fmls);
    add_new(fmls);
    print_fml(fmls);
}
void add_new(fml_type &fml)
{
    std::cout<<"input the last name"<<std::endl;
    std::string l_n;
    std::string c_n;
    std::cin>>l_n;
    std::cout<<"input Chirldren's name"<<std::endl;
    while(std::cin>>c_n)
    {
        fml[l_n].push_back(c_n);
    }
    std::cin.clear();
    std::cout<<"finished"<<std::endl;
}
void print_fml(const fml_type &fml)
{
    for(auto &pair : fml)
    {
        std::cout<<pair.first<<":";
        for(auto mem : pair.second)
        {
            std::cout<<mem<<"   ";
        }
        std::cout<<std::endl;
    }
}