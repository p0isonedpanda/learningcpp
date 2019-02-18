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
    // unique pointers will be automatically freed upon exiting their scope
    {
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();

        entity->Print();
    }
    return 0;
}
