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
        Stack.push(4567);
        Stack.push(890);

        // TEST
        stack<int> result;
        result = Stack;

        // VERIFY
        int third = result.pop();
        int second = result.pop();
        int first = result.pop();

        assert(first == 123);
        assert(second == 4567);
        assert(third == 890);
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(999);
        Stack.push(888);
        Stack.push(777);

        // TEST
        stack<int> result;
        result = Stack;

        // VERIFY
        int third = result.pop();
        int second = result.pop();
        int first = result.pop();

        assert(first == 999);
        assert(second == 888);
        assert(third == 777);
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("ajjkdkbkdsbsdfdskbfdsk");
        Stack.push("qweoiruoiqweoiruqweoiru");
        Stack.push("zmxncbvlasdfqwerplmokni");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "ajjkdkbkdsbsdfdskbfdsk");
        assert(second == "qweoiruoiqweoiruqweoiru");
        assert(third == "zmxncbvlasdfqwerplmokni");
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("asdfghjklqwertyuiopzxc");
        Stack.push("plmoknijbuhvygctfderwa");
        Stack.push("qazwsxedcrfvtgbyhnujmik");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "asdfghjklqwertyuiopzxc");
        assert(second == "plmoknijbuhvygctfderwa");
        assert(third == "qazwsxedcrfvtgbyhnujmik");
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("mnbvcxzlkjhgfdsapoiuyt");
        Stack.push("qwertyuiopasdfghjklzxc");
        Stack.push("poiuytrewqlkjhgfdsamnb");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "mnbvcxzlkjhgfdsapoiuyt");
        assert(second == "qwertyuiopasdfghjklzxc");
        assert(third == "poiuytrewqlkjhgfdsamnb");
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(1111);
        Stack.push(2222);
        Stack.push(3333);

        // TEST
        stack<int> result;
        result = Stack;

        // VERIFY
        int third = result.pop();
        int second = result.pop();
        int first = result.pop();

        assert(first == 1111);
        assert(second == 2222);
        assert(third == 3333);
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("qazwsxedcrfvtgbyhnujmik");
        Stack.push("plmoknijbuhvygctfderwa");
        Stack.push("asdfghjklqwertyuiopzxc");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "qazwsxedcrfvtgbyhnujmik");
        assert(second == "plmoknijbuhvygctfderwa");
        assert(third == "asdfghjklqwertyuiopzxc");
    }

    {
        // SETUP FIXTURE
        stack<int> Stack;
        Stack.push(42);
        Stack.push(84);
        Stack.push(126);

        // TEST
        stack<int> result;
        result = Stack;

        // VERIFY
        int third = result.pop();
        int second = result.pop();
        int first = result.pop();

        assert(first == 42);
        assert(second == 84);
        assert(third == 126);
    }

    {
        // SETUP FIXTURE
        stack<String> Stack;
        Stack.push("loremipsumdolorsitamet");
        Stack.push("consecteturadipiscingelit");
        Stack.push("seddoeiusmodtemporincid");

        // TEST
        stack<String> result;
        result = Stack;

        // VERIFY
        String third = result.pop();
        String second = result.pop();
        String first = result.pop();

        assert(first == "loremipsumdolorsitamet");
        assert(second == "consecteturadipiscingelit");
        assert(third == "seddoeiusmodtemporincid");
    }

    std::cout << "Test cases Done" << std::endl;
    return 0;
}
