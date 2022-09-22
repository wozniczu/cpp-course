#include <iostream>
#include <cstring>
#include "Mystring.h"
#pragma warning(disable : 4996)
 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}


// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

Mystring operator-(Mystring& rhs)
{
    return Mystring();
}

bool operator==(Mystring& lhs, Mystring& rhs)
{
    if (strcmp(lhs.str, rhs.str) == 0)
        return true;
    else return false;
}

bool operator!=(Mystring& lhs, Mystring& rhs)
{
    if (strcmp(lhs.str, rhs.str) != 0)
        return true;
    else return false;
}

bool operator<(Mystring& lhs, Mystring& rhs)
{
    if (strcmp(lhs.str, rhs.str) < 0)
        return true;
    else return false;
}

bool operator>(Mystring& lhs, Mystring& rhs)
{
    if (strcmp(lhs.str, rhs.str) > 0)
        return true;
    else return false;
}

Mystring operator+(const Mystring& lhs, const Mystring& rhs)
{
    char *buffor = new char[strlen(lhs.str)+ strlen(rhs.str)+1];
    strcpy(buffor, lhs.str);
    strcat(buffor,rhs.str);
    Mystring temp{ buffor };
    delete[] buffor;
    return temp;
}

Mystring &operator+=(Mystring& lhs, const Mystring& rhs)
{
    lhs.str = strcat(lhs.str, rhs.str);
    return  lhs;
}

Mystring operator*(const Mystring& lhs, int x)
{
    char* buffor = new char[strlen(lhs.str) * x + 1];
    for (int i{0};i<x;i++)
    {
        strcpy(buffor, lhs.str);
    }
    Mystring temp{ buffor };
    delete[] buffor;
    return temp;
}

Mystring &operator*=(Mystring& lhs,int x)
{
    char* buffor = new char[strlen(lhs.str) * x + 1];
    for (int i{ 0 }; i < x; i++)
    {
        strcpy(buffor, lhs.str);
    }
    lhs.str = buffor;
    delete[] buffor;
    return lhs;
}

Mystring& operator++(Mystring& obj) {
    for (size_t i = 0; i < std::strlen(obj.str); i++)
        obj.str[i] = std::toupper(obj.str[i]);
    return obj;
}


Mystring operator++(Mystring& obj, int) {
    Mystring temp{ obj };
    ++obj;
    return temp;
}