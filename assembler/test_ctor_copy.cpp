#include "stack.hpp"
#include <cassert>
#include <iostream>
#include "../string/string.hpp"

int main ()
{
    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(123);
        Stack.push(456);
        Stack.push(789);

        // TEST
        stack<int> result;
        result = Stack;

        // VERIFY
        int third = result.pop();
        int second = result.pop();
        int first = result.pop();

        assert(first == 123);
        assert(second == 456);
        assert(third == 789);
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(987);
        Stack.push(654);
        Stack.push(321);

        // TEST
        stack<int> result;
        result = Stack;

        // VERIFY
        int third = result.pop();
        int second = result.pop();
        int first = result.pop();

        assert(first == 987);
        assert(second == 654);
        assert(third == 321);
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("ajjkdkbkdsbsdfdskbfdsk");
        Stack.push("kdsfjkdsfjkdslfjsdlfj");
        Stack.push("qwoeiruoieruoieruoiwe");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "ajjkdkbkdsbsdfdskbfdsk");
        assert(second == "kdsfjkdsfjkdslfjsdlfj");
        assert(third == "qwoeiruoieruoieruoiwe");
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("zmxncbvlasdfqwer");
        Stack.push("plmoknijbuhvygct");
        Stack.push("qazwsxedcrfvtgby");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "zmxncbvlasdfqwer");
        assert(second == "plmoknijbuhvygct");
        assert(third == "qazwsxedcrfvtgby");
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("asdfghjklqwertyui");
        Stack.push("poiuytrewqlkjhgfd");
        Stack.push("mnbvcxzlkjhgfdsap");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "asdfghjklqwertyui");
        assert(second == "poiuytrewqlkjhgfd");
        assert(third == "mnbvcxzlkjhgfdsap");
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(1111);
        Stack.push(2222);
        Stack.push(3333);

        // TEST
        stack<int> copyStack(Stack);

        // VERIFY
        int third = copyStack.pop();
        int second = copyStack.pop();
        int first = copyStack.pop();

        assert(first == 1111);
        assert(second == 2222);
        assert(third == 3333);
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("qwertyuiopasdfgh");
        Stack.push("lkjhgfdsaqwertyu");
        Stack.push("zxcvbnmasdfghjkl");

        // TEST
        stack<String> copyStack(Stack);

        // VERIFY
        String third = copyStack.pop();
        String second = copyStack.pop();
        String first = copyStack.pop();

        assert(first == "qwertyuiopasdfgh");
        assert(second == "lkjhgfdsaqwertyu");
        assert(third == "zxcvbnmasdfghjkl");
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(10);
        Stack.push(20);
        Stack.push(30);

        // TEST
        stack<int> assignStack;
        assignStack = Stack;

        // VERIFY
        int third = assignStack.pop();
        int second = assignStack.pop();
        int first = assignStack.pop();

        assert(first == 10);
        assert(second == 20);
        assert(third == 30);
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("asdfqwerzxcvtyui");
        Stack.push("plmoknijbuhvygct");
        Stack.push("qazwsxedcrfvtgby");

        // TEST
        stack<String> assignStack;
        assignStack = Stack;

        // VERIFY
        String third = assignStack.pop();
        String second = assignStack.pop();
        String first = assignStack.pop();

        assert(first == "asdfqwerzxcvtyui");
        assert(second == "plmoknijbuhvygct");
        assert(third == "qazwsxedcrfvtgby");
    }

    std::cout << "Test cases Done" << std::endl;
    return 0;
}
