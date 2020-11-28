#include<memory>
#include<vector>
#include<iostream>
#include<string>
#include<stdexcept>
class StrBlobPtr;
class StrBlob
{
public:
    friend class StrBlobPtr;
    StrBlob();
    StrBlob(std::initializer_list<std::string>);
    bool empty() const;
    void push_back(const std::string);
    void pop_back();
    const std::string& front() const;
    const std::string& back() const;
    StrBlobPtr begin() ;
    StrBlobPtr end() ;
    StrBlobPtr begin() const;
    StrBlobPtr end() const;
private:
    std::shared_ptr<std::vector<std::string>> data; //声明一个什么类型的指针
    void check(const std::string) const ; //这个const绑定在this指针上
};
class StrBlobPtr
{
public:
    StrBlobPtr():curr(0){}
    StrBlobPtr(StrBlob &a,std::size_t c=0):wptr(a.data),curr(c){}
    StrBlobPtr(const StrBlob &a,std::size_t c=0):wptr(a.data),curr(c){} //重载const版本
    std::string& deref() const;
    StrBlobPtr& incr();
private:
    std::weak_ptr<std::vector<std::string>> wptr;
    std::string::size_type curr;
    std::shared_ptr<std::vector<std::string>> check(std::size_t, const std::string) const;  //check函数重名即是重载了
};
//  data = std::make_shared<std::vector<std::string>>(il); 这是二次赋值了。给一个智能指针（分配好空间的）。
// int main()
// {
//     StrBlob b1 = {"first","second","third"};
//     StrBlob b2 = b1;
//     std::cout<<b1.back()<<std::endl;
//     b2.pop_back();
//     std::cout<<b2.back()<<std::endl;
// }