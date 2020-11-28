#include<string>
#include<iostream>
class Hasptr
{
public:
    Hasptr(const std::string &s = std::string()):ps(new std::string(s)),i(0){}
    Hasptr(Hasptr& );
    void print_mem() const
    {
        std::cout<<*ps<<std::endl;
    }
private:
    std::string *ps;
    int i;
};
Hasptr::Hasptr(Hasptr &ptr)
{
    ps = new std::string();
    ps = ptr.ps;
    i = ptr.i;
}
int main()
{
    Hasptr str1("test");
    Hasptr str2 = str1;
    str2.print_mem();
}