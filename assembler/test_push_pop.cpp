#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

int main ()
{
    {
        // SETUP FIXTURE
        stack<int> Stack;
        
        // TEST
        assert(Stack.empty() == true); 

        Stack.push(100);
        Stack.push(200);
        Stack.push(300);

        assert(Stack.full() == false);  
        assert(Stack.empty() == false); 
        assert(Stack.top() == 300);       

        int third = Stack.pop();
        int second = Stack.pop();

        assert(Stack.top() == 100);       

        int first = Stack.pop();

        assert(Stack.empty() == true); 

        // VERIFY
        assert(first == 100);
        assert(second == 200);
        assert(third == 300);
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        
        // TEST
        Stack.push(5);
        Stack.push(15);
        Stack.push(25);
        Stack.push(35);

        assert(Stack.top() == 35);
        int a = Stack.pop();
        int b = Stack.pop();
        int c = Stack.pop();
        int d = Stack.pop();

        // VERIFY
        assert(a == 35);
        assert(b == 25);
        assert(c == 15);
        assert(d == 5);
        assert(Stack.empty() == true);
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        
        // TEST
        for(int i = 1; i <= 5; ++i)
            Stack.push(i * 10);

        assert(Stack.top() == 50);

        int val = Stack.pop();
        assert(val == 50);
        assert(Stack.top() == 40);

        // VERIFY
        val = Stack.pop();
        assert(val == 40);
        val = Stack.pop();
        assert(val == 30);
    }

    {
        // SETUP FIXTURE
        stack<String> stringStack;
        
        // TEST
        assert(stringStack.empty() == true);

        stringStack.push("alpha");
        stringStack.push("beta");
        stringStack.push("gamma");

        assert(stringStack.full() == false);
        assert(stringStack.empty() == false);
        assert(stringStack.top() == "gamma");

        String third = stringStack.pop();
        String second = stringStack.pop();

        assert(stringStack.top() == "alpha");

        String first = stringStack.pop();

        assert(stringStack.empty() == true);

        // VERIFY
        assert(first == "alpha");
        assert(second == "beta");
        assert(third == "gamma");
    }

    {
        // SETUP FIXTURE
        stack<String> stringStack;
        
        // TEST
        stringStack.push("one");
        stringStack.push("two");
        stringStack.push("three");
        stringStack.push("four");

        assert(stringStack.top() == "four");

        String a = stringStack.pop();
        String b = stringStack.pop();
        String c = stringStack.pop();
        String d = stringStack.pop();

        // VERIFY
        assert(a == "four");
        assert(b == "three");
        assert(c == "two");
        assert(d == "one");
        assert(stringStack.empty() == true);
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        
        // TEST
        Stack.push(11);
        Stack.push(22);
        Stack.push(33);

        stack<int> copyStack(Stack);
        assert(copyStack.top() == 33);
        copyStack.pop();
        assert(copyStack.top() == 22);

        stack<int> assignStack;
        assignStack = Stack;
        assert(assignStack.top() == 33);

        // VERIFY
        assert(Stack.top() == 33);
    }

    {
        // SETUP FIXTURE
        stack<String> stringStack;
        
        // TEST
        stringStack.push("red");
        stringStack.push("green");
        stringStack.push("blue");

        stack<String> copyStack(stringStack);
        assert(copyStack.top() == "blue");
        copyStack.pop();
        assert(copyStack.top() == "green");

        stack<String> assignStack;
        assignStack = stringStack;
        assert(assignStack.top() == "blue");

        // VERIFY
        assert(stringStack.top() == "blue");
    }

    std::cout << "Done with the cases" << std::endl;
    return 0;
}
