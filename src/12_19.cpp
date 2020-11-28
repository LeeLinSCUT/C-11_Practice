#include "12_2practice.h"
#include<memory>
#include<iostream>
#include<string>
StrBlob::StrBlob(): data(std::make_shared<std::vector<std::string>>()){}
StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)){}
bool StrBlob::empty() const
{
    return (*data).empty();
     //data解引用是一个vector对象
}
void StrBlob::push_back(const std::string s1)
{
    check("push_back");
    (*data).push_back(s1);
}
void StrBlob::pop_back()
{
    check("pop_back");
    (*data).pop_back();
}
const std::string& StrBlob::front() const
{//返回第一个值
    check("front");
    return (*data).front();
}
const std::string& StrBlob::back() const
{
    check("back");
    return data->back();
}
void StrBlob::check(const std::string s1) const
{
    if(0>=(*data).size())
        throw std::out_of_range(s1);
}
StrBlobPtr StrBlob::begin()  //如果把这个函数设为const，那*this就是const的，const无法初始化非常量引用
{
    return StrBlobPtr((*this));
}
StrBlobPtr StrBlob::end() 
{
    auto ret = StrBlobPtr(*this,data->size());
    return ret;
}
StrBlobPtr StrBlob::begin() const  //如果把这个函数设为const，那*this就是const的，const无法初始化非常量引用
{
    return StrBlobPtr((*this));
}
StrBlobPtr StrBlob::end() const
{
    auto ret = StrBlobPtr(*this,data->size());
    return ret;
}
std::string& StrBlobPtr::deref() const
{
    auto sptr = check(curr,"deref ouf of range");
    return (*sptr)[curr];

}   
StrBlobPtr& StrBlobPtr::incr()
{
    check(curr,"incr");
    ++curr;
    return *this;
}
std::shared_ptr<std::vector<std::string>> StrBlobPtr::check(std::size_t s, const std::string msg) const
{
    auto ret = wptr.lock();
    if(!ret) //如果无shared_ptr
    {
        throw std::runtime_error("unbound StrBlobPtr");
    }
    if(s>=ret->size()) //如果索引大小超过空间的大小？
    {
        throw std::runtime_error(msg);
    }
    return ret;
}
int main()
{
    const StrBlob b1 = {"first","second","third"};
    StrBlobPtr b1ptr = b1.begin();
    std::cout<<b1ptr.deref()<<std::endl;
    b1ptr.incr();
    std::cout<<b1ptr.deref()<<std::endl;
    b1ptr.incr();
    std::cout<<b1ptr.deref()<<std::endl;
    b1ptr.incr();
    std::cout<<b1ptr.deref()<<std::endl;
    b1ptr.incr();
}