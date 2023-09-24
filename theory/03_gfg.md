## Geeks for Geeks QnA part 2

1. Explain **inheritance**.
The capability or ability of a class to **derive properties and characteristics from another class** is known as inheritance. 
In simple terms, it is a system or technique of **reusing and extending existing** classes without modifying them.

2. When should we use **multiple inheritance**?
Multiple inheritances mean that a derived class can inherit **two or more base/parent classes**. It is useful when a derived class
needs to **combine numerous attributes/contracts and inherit some**, or all, of the implementation from these attributes/contracts.
To take a real-life example consider your Parents where Parent A is your DAD Parent B is your MOM and Chid C is you.

3. What is **virtual inheritance**?
Virtual inheritance is a technique that ensures only one copy of a base class’s member variables is inherited by 
**grandchild-derived classes**. Or in simple terms, virtual inheritance is used when we are dealing with a situation of
multiple inheritances but want to **prevent multiple instances of the same class** from appearing in the inheritance hierarchy.

```cpp
struct Mammal: virtual Animal {
    virtual void Breathe() {}
};
struct WingedAnimal: virtual Animal {
    virtual void Flap() {}
};
// A bat is still a winged mammal
struct Bat: Mammal, WingedAnimal {};
```

4. What is polymorphism in C++?
Polymorphism is known as many forms of the same thing. In simple terms, we can say that Polymorphism is the ability to display a member function in multiple forms depending on the type of object that calls them. 

In other words, we can also say that a man can be an employee to someone, a son of someone, a father of someone, and a husband of someone; this is how polymorphism can be projected in real life.

There is 2 type of polymorphism:
**Compile Time Polymorphism**
1. Function Overloading
2. Operator Overloading
**Run Time Polymorphism**
1. Function Overriding
2. Virtual Function

5. What are the different types of polymorphism in C++?
**Compile Time Polymorphism or Static Binding**
This type of polymorphism is achieved during the **compile time** of the program which results in it making a bit faster
than Run time. Also, Inheritance is not involved in it. It is comprised of 2 further techniques:

**Function Overloading**: When there are multiple functions with the same name but different parameters then this is known
as function overloading.

**Operator Overloading**: It is basically giving practice of giving a special meaning to the existing meaning of an operator or in simple terms redefining the pre-redefined meaning

```cpp
class GFG {
   // private and other modes
   statements
   public
   returnType operator symbol (arguments) {
   statements
   } 
   statements
};
```

**Run-time polymorphism** takes place when functions are invoked during run time. 
 
**Function Overriding**: Function overriding occurs when a base class member function is **redefined in a derived class**
with the same arguments and return type.

```cpp
int main(){
    Child child_derived;
    child_derived.geeksforgeeks(); // geeksforgeeks this func is defined in both base and dervied class
    return 0;
}
```

**Runtime Polymorphism can be achieved by data members** in C++. Let’s see an example where we are accessing the field by 
reference variable which refers to the instance of the derived class.

```cpp
#include <bits/stdc++.h>
using namespace std;
 
//  base class declaration.
class Animal {
public:
    string color = "Black";
};
 
// inheriting Animal class.
class Dog : public Animal {
public:
    string color = "Grey";
};
 
// Driver code
int main(void)
{
    Animal d = Dog(); // accessing the field by reference
                      // variable which refers to derived
    cout << d.color;
}

Black // OUTPUT
```

A **virtual function** is a member function that is declared in the base class using the keyword virtual and 
is re-defined (Overridden) in the derived class.

6. Explain the **constructor** in C++.
A constructor is a special type of member function of a class, whose name is the same as that of the class by whom it is invoked 
and initializes value to the object of a class. 

There are 3 types of constructors:
A. **Default constructor**: It is the most basic type of constructor which accepts no arguments or parameters. Even if it is not 
called the compiler calls it automatically when an object is created.

B. **Parameterized constructor**: It is a type of constructor which accepts arguments or parameters. It has to be called explicitly
   by passing values in the arguments as these arguments help initialize an object when it is created. It also has the same name
   as that of the class. 

C. A **copy constructor** is a member function that initializes an object using another object of the same class. Also, the 
   Copy constructor takes a reference to an object of the same class as an argument. (**arugument and return type**)

```cpp
Sample(Sample& t) 
{
    id = t.id;
}
```

7. What is a **virtual destructor**?
When destroying instances or objects of a **derived class using a base class pointer object**, a virtual destructor is invoked to
free up memory space allocated by the derived class object or instance.

Virtual destructor guarantees that **first the derived class’ destructor** is called. **Then the base class’s destructor**
is called to release the space occupied by both destructors in the inheritance class which saves us from the **memory leak**.
It is advised to make your **destructor virtual whenever your class is polymorphic**.

8. Is **destructor overloading** possible? If yes then explain and if no then why?
The simple answer is **NO** we cannot overload a destructor. It is mandatory to have **only one destructor** per class in C++. 
Also to mention, Destructor **neither take arguments** nor they have a **return type** that might help to overload.
