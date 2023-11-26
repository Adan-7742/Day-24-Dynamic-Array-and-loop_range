//=======================================================================================================
//                                                                                                      =
//............................Dynamic Array.............................................................=
//                                                                                                      =
//=======================================================================================================
/*


Dynamic arrays, also known as dynamic allocation arrays, are arrays that can resize automatically 
as needed during program execution. This is in contrast to static arrays, which have a fixed size 
that is determined at compile time.

Dynamic arrays are useful for situations where the amount of data to be stored is not known in advance,
or where the amount of data may change frequently during program execution. For example, you might use a dynamic
array to store a list of items that can be added or removed at any time.




*/
#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;
int pro() {

    //dynamic arrays can be created using the new and delete operators.
    //  The new operator allocates memory for an array of the specified size and type, and 
    // it returns a pointer to the first element of the array.
    // The delete operator deallocates the memory that was allocated by the new operator.


    // Create a dynamic array of 10 integers
    int* array = new int[10];

    // Fill the array with numbers
    for (int i = 0; i < 10; i++) {
        array[i] = i + 1;
    }

    // Print the array
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }

    // Delete the array
    delete[] array;

    return 0;

}

//...................OUTPUT...................

//             1 2 3 4 5 6 7 8 9 10



// ...............................Array to store string values........................

int pro1() {

    // Create a dynamic array of 5 strings
    std::string* array = new std::string[5];

    // Fill the array with strings
    array[0] = "Hello";
    array[1] = "World";
    array[2] = "!";
    array[3] = "";
    array[4] = "Goodbye";

    // Print the array
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }

    // Delete the array
    delete[] array;

    return 0;
}

// ....................OUTPUT....................

//            Hello World ! Goodbye






/*



Stack:

* Stack allocation is the default allocation mechanism for local variables, including arrays.
* Variables declared within a function are allocated on the stack.
* Stack memory is automatically deallocated when the function returns.
* Stack allocation is efficient for small arrays.

Heap:

* Heap allocation is used for dynamic arrays, which are arrays that can be resized at runtime.
* Arrays declared using the new operator are allocated on the heap.
* Heap memory must be explicitly deallocated using the delete operator.
* Heap allocation is more flexible than stack allocation, but it is also less efficient.


*/

int sumArray(int array[]) {
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }
    return sum;
}



//...................Range base loop..................

/*


The range-based for loop is a new feature introduced in C++11 that simplifies 
iterating over containers. It provides a more concise and expressive way to traverse
the elements of a container, eliminating the need for explicit index variables and bounds checks.

The syntax of the range-based for loop is:


                for (range_declaration : range_expression) {
                  // Loop body
                }


range_declaration:  

This declares a variable that will hold each element of the
range during the iteration. The type of the variable is automatically deduced
from the type of the elements in the range.

range_expression:   

This is an expression that evaluates to a range,
such as a container object or a braced-init-list.


*/


int loop_range() {

    cout << ".................Simple..................." << endl;

    for (char letter : {'a', 'b', 'c', 'd', 'e'}) {
        std::cout << letter << " ";
    }

    cout << "................. Using....Set..................." << endl;

      std::set<int> numbers = {5, 10, 15, 20, 25};

  for (int number : numbers) {
    std::cout << number << " ";
  }

  
  cout << ".................Map Using......................."<<endl;

  std::map<std::string, int> fruits = { {"apple", 10}, {"banana", 15}, {"orange", 20} };

  for (auto pair : fruits) {
      std::cout << pair.first << ": " << pair.second << std::endl;
  }

  cout << ".................vector Using......................." << endl;

  std::vector<int> numbers = { 10, 20, 30, 40, 50 };

  for (int number : numbers) {
      std::cout << number << " ";
  }

    return 0;

}
int main()
{
    pro();
    pro1();

    int array[10];
    // Use the array
    int sum = sumArray(array);
    std::cout << "The sum of the array is: " << sum << std::endl;
    loop_range();
}