#pragma once

class Person
{
    public:
        std::string name;
        int age;

        Person(std::string _name, int _age);
        void Introduce();
};
