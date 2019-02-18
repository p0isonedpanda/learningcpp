#include <iostream>
#include <memory>

class Entity
{
    public:
        Entity()
        {
            std::cout << "created entity" << std::endl;
        }

        ~Entity()
        {
            std::cout << "destroyed entity" << std::endl;
        }

        void Print()
        {
            std::cout << "hello there!" << std::endl;
        }
};

int main()
{
    // shared pointers are freed as soon as all references are gone
    {
        std::shared_ptr<Entity> e0;
    
        {
            std::shared_ptr<Entity> entity = std::make_shared<Entity>();
            e0 = entity;

            entity->Print();
            e0->Print();
        }
    }
    return 0;
}
