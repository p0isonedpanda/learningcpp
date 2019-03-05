#pragma once

class Person
{
    private:
        std::string name;

    public:
        Person();

        // declare that the GetName function is a friend of the Person class
        // which allows it to access members of the class as if it were a function
        // of the class
        friend std::string GetName(const Person &p);
};
