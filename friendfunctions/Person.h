#pragma once

class Person
{
    private:
        std::string name;

    public:
        Person();

        friend std::string GetName(const Person &p);
};
