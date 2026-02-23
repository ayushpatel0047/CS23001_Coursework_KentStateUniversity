// 
// Kent State University
// CS 23001 - J. Maletic
//
// Lab on dynamic memory
//
// Memory allocation and array bounds checking
//
// C/C++ does not check array bounds, so accessing an element of an
//    array outside of its defined size results in Undefined Behavior
//
// TO COMPILE: clang++ -Wall array_bounds_check.cpp -o bounds_check
// TO RUN: ./bounds_check
//           Then enter a postivie integer value at the prompt
//
// Instructions:
//   Read the code.
//   Run the program on wasp/hornet (multiple) times.
//   Try these values of 10, 16, 32, 33, 40
//
//   Read over the output each time.
//

//   What is wrong with the output?
    /* Ans : If n>5, str1 overwrites memory, corrupting str2. Output shows garbled values. */

//   What is wrong with the code?
    /* Ans :  writing str[i] for i>= 5 is invalid. */

//   Why is no error raised?
    /* Ans : C++ does not check array bounds at runtime */

//   How many bytes are between the start of str1 and str2?
    /* Ans : Depends on allocator */

//   How can you test for this logical error?
     /* Ans : Enter n>5 and see if str2 gets corrupted, can use Valgrind to detect overflows */

//   How can you prevent this type of error?
     /* Ans : Can use std::vector pr std::array for safe access */


//   Include the delete[] at the end and recompile, what changes?
     /* Ans : It prevents memory leaks, output does not change. */
     

#include <iostream>


int main () {
    char *str1 = new char[5];     //Allocate two arrays on the heap
    char *str2 = new char[20];
    int n=0;

    std::cout  << "str1->char[5]" << std::endl;
    std::cout  << "str2->char[20]" << std::endl;
    std::cout  << "Enter positive integer value: ";  // n > 0
    std::cin >> n;

    std::cout  << "Write to array str1:" << std::endl;
    for (int i = 0; i < n; ++i) {   //Write to str1[0...n-1]
        str1[i] = 'X';
        std::cout << "str1[" << i << "] = 'X'" << std::endl;
    }

    std::cout  << "Contents of array str1:" << std::endl;
    for (int i = 0; i < n; ++i) {   //Print str1[0...n-1]
        std::cout << "str1[" << i << "] == " << "|" <<  str1[i] << "|" << std::endl;
    }

    std::cout  << "Contents of array str2:" << std::endl;
    for (int i = 0; i < 20; ++i) {    //Print str2[0...19]
        std::cout << "str2[" << i << "] == " << "|" <<  str2[i] << "|" << std::endl;
    }

    delete[] str1;  //Try with and without deletes
    delete[] str2;

    return 0;
}

