#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

int main ()
{
    {
        
        // SETUP FIXTURE
        stack<int> integer_stack;

        // VERIFY
        assert(integer_stack.empty());
        std::cout<<"Is empty"<<std::endl;
    }
    std::cout << "Done with testing default" << std::endl;
    return 0;
}