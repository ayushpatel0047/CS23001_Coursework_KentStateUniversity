#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {
    {
        String str = "ABCD-EFGH";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << result[0] << std::endl;
        std::cout << result[1] << std::endl;
        assert(result.size() == 2);
    }

    {
        String str = "A--B--C";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        for(int i=0;i<result.size();i++) std::cout << result[i] << std::endl;
        assert(result.size() == 7);
    }

    {
        String str = "-XYZ";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << result[0] << std::endl;
        std::cout << result[1] << std::endl;
        assert(result.size() == 2);
    }

    {
        String str = "XYZ-";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << result[0] << std::endl;
        std::cout << result[1] << std::endl;
        assert(result.size() == 2);
    }

    {
        String str = "ABCDEFG";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        std::cout << result[0] << std::endl;
        assert(result.size() == 1);
    }

    {
        String str = "-----";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 6);
    }

    {
        String str = "AB-123-CD-XYZ-789";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        for(int i=0;i<result.size();i++) std::cout << result[i] << std::endl;
        assert(result.size() == 5);
    }

    {
        String str = "12#34#56#78";
        std::vector<String> result;
        result = str.split('#');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 4);
    }

    {
        String str = "ONE TWO THREE FOUR";
        std::vector<String> result;
        result = str.split(' ');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 4);
    }

    {
        String str = "";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 1);
    }

    {
        String str = "!@#-$%^-&*()";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 3);
    }

    {
        String str = "A  B   C";
        std::vector<String> result;
        result = str.split(' ');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 8);
    }

    {
        String str = "X";
        std::vector<String> result;
        result = str.split('X');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 2);
    }

    {
        String str = "-START-END-";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 4);
    }

    {
        String str = "A1B2C3-D4E5";
        std::vector<String> result;
        result = str.split('-');
        std::cout << "Size of Vector: " << result.size() << std::endl;
        assert(result.size() == 2);
    }

    std::cout << "Done testing split." << std::endl;
    return 0;
}
