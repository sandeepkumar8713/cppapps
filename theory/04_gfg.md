## Geeks for Geeks QnA part 3

1. Which **operations are permitted on pointers**?
Pointers are the variables that are used to store the address location of another variable. Operations that are permitted to
a pointer are:
1. Increment/Decrement of a Pointer
2. Addition and Subtraction of integer to a pointer
3. Comparison of pointers of the same type

2. What is the purpose of the **“delete”** operator?
The delete operator is used to **delete/remove all the characteristics/properties from an object by deallocating its memory**; 
furthermore, it returns true or false in the end. In simple terms, it destroys or deallocates array and non-array(pointer)
objects which are created by new expressions.

3. How **delete [] is different from delete**?
**delete[]**
1. It is used for deleting a **whole array**
2. It is used for deleting the objects of **new[]**; By this, we can say that delete[] is used to delete an array of objects
	
```cpp
int GFG = new int[100];
// uses GFG for deletion
delete [] GFG;
```

**delete**
1. It is used to delete only one single pointer
2. It is used for deleting the objects of **new**; By this, we can say that delete is used to delete a single object

4. What do you know about **friend class and friend function**?
A friend class is a class that can access **both the protected and private variables** of the classes where it is declared as a friend.

```cpp
class Class_1st {
    // ClassB is a friend class of ClassA
    friend class Class_2nd;
    statements;
}
class Class_2nd {
    statements;
}
```

A friend function is a function used to access the **private, protected, and public data members or member functions** of other 
classes. It is declared with a friend keyword. The advantage of a friend function is that it is 
**not bound to the scope of the class** and once it is declared in a class, furthermore to that, it 
**cannot be called by an object of the class;** therefore it can be called by other functions. 
Considering all the mentioned points we can say that a friend function is a **global function**.

```cpp
class GFG{
    statements;
    friend int divide(10,5);
    statements;
}
```

5. What is an **Overflow Error**?
Overflow Error occurs when the **number is too large for the data type to handle**. In simple terms, it is a type of error that is
valid for the defined but exceeds used the defined range where it should coincide/lie. 

For example, the range of int data type is **–2,147,483,648 to 2,147,483,647** and if we declare a variable of size 
**2,247,483,648(2^31)** it will generate a overflow error.

6. What does the **Scope Resolution operator** do?
A scope resolution operator is denoted by a **‘::‘** symbol. Just like its name this operator **resolves the barrier of scope**
in a program. A scope resolution operator is used to reference a member function or a global variable out of their scope
furthermore to which it can also access the concealed variable or function in a program.

Scope Resolution is used for numerous amounts of tasks:
1. To access a **global variable** when there is a **local variable with the same name**
2. To define the **function outside the class**
3. In case of **multiple inheritances**
4. **For namespace**

7. What are the C++ access modifiers?
The access **restriction specified to the class members**(whether it is member function or data member) is known as access 
modifiers/specifiers. 

Access Modifiers are of 3 types:
1. **Private** – It can neither be accessed nor be viewed from outside the class 
2. **Protected** – It can be accessed if and only if the accessor is the derived class
3. **Public** – It can be accessed or be viewed from outside the class 

8. Can you compile a program without the main function?
Yes, it is absolutely possible to compile a program without a main(). For example Use Macros that defines the main

```cpp
#include 
<stdio.h>
#define fun main
int fun(void)
{
    printf("Geeksforgeeks");
    return 0;
}
```

9. What is **STL**?
STL is known as **Standard Template Library**, it is a library that provides 4 components like container, algorithms, and iterators.
1. Algorithms : Binary, Lower/Upper bound, Min/Max, Reverse/Rotate -> sort/scoop
2. Containers :
    a. **Array, Vector, Dequeue, List**
    b. **Stack, Queue, Priority Queue**
    c. **Set, Map**
    4. **Unordered Set, Unordered Map**

10. Define **inline function**. Can we have a recursive inline function in C++?
An inline function is a form of request not an order to a compiler which results in the **inlining of our function** to the 
main function body. An inline function can become **overhead if the execution time of the function is less than the switching**
time from the caller function to called function. To make a function inline **use the keyword inline** before and define the
function before any calls are made to the function.

The answer is **No**; It cannot be recursive. An inline function cannot be recursive because in the case of an inline function
the code is **merely placed into the position** from where it is called and **does not maintain a piece of information on the stack** 
which is necessary for recursion.
Plus, if you write an inline keyword in front of a recursive function, the **compiler will automatically ignore** it because the
inline is only taken as a **suggestion by the compiler**.

11. What is an **abstract class** and when do you use it?
An abstract class is a class that is specifically designed to be used as a base class. An abstract class contains 
**at least one pure virtual function**. You declare a pure virtual function by using a pure specifier(= 0) in the declaration
of a virtual member function in the class declaration

You **cannot** use an abstract class as a **parameter type, a function return type, or the type of an explicit conversion**, nor can you 
declare an object of an abstract class. However, it **can be used to declare pointers and references** to an abstract class. 

An abstract class is used if you want to provide a **common, implemented functionality** among all the implementations of the
component. Abstract classes will allow you to **partially implement** your class, whereas interfaces would have no implementation
for any members whatsoever. In simple words, Abstract Classes are a **good fit if you want to provide implementation details**
to your children but **don’t want to allow an instance of your class** to be directly instantiated.

12. What are the **static data members and static member** functions?
The static data member of a class is a normal data member but preceded with a static keyword. It executes **before main()** in a
program and is **initialized to 0** when the first object of the class is created. It is **only visible to a defined class**
but its scope is of a lifetime.

```cpp
static Data_Type Data_Member;  
```

The static member function is the member function that is used to **access other static data members** or 
other **static member functions**. It is also defined with a static keyword. We can access the static member function using 
the **class name or class objects.**

```cpp
class Point{

private:
    double m_x;
    double m_y;
    static size_t m_point_count;

public:
    size_t get_point_count() const{
        return m_point_count;
    }

    Point(double x, double y) : m_x{x},m_y{y}{
        std::cout << "Point constructor called" << std::endl;
        ++m_point_count;
    }
};
 
// Call in main
int main(){
    std::cout << "Point count : " << Point::m_point_count << std::endl; //0
    Point p1(10.0,20.1);
    std::cout << "Point count : " << p1.get_point_count() << std::endl; //1
}
```
