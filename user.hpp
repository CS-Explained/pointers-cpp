#ifndef USER_HPP
#define USER_HPP

#include <string>

class User
{
private:
    std::string name;
public:
    User(std::string name):name(name)
    {
        //or this->name = name;
        //or SetName (name);
    }
    void SetName (std::string name)
    {
        this->name = name;
    }
    std::string GetName () const
    {
        return this->name;
    }
};
#endif