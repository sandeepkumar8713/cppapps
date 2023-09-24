## Geeks for Geeks QnA part 4

1. What is the main use of the keyword “Volatile”?

Just like its name, things can change suddenly and unexpectantly; So it is used to inform the compiler that the
value may change anytime. Also, the volatile keyword prevents the compiler from performing optimization on the code. 
It was intended to be used when interfacing with memory-mapped hardware, signal handlers, and machine code instruction.

2. Define storage class in C++ and name some

Storage class is used to define the features(lifetime and visibility) of a variable or function. These features
usually help in tracing the existence of a variable during the runtime of a program.

storage_class var_data_type var_name; 

Example : auto, extern, static, register, mutable

3. What is a mutable storage class specifier? How can they be used?

Just like its name, the mutable storage class specifier is used only on a class data member to make it modifiable
even though the member is part of an object declared as const. Static or const, or reference members cannot use the
mutable specifier. When we declare a function as const, this pointer passed to the function becomes const.

4. Define the Block scope variable. 

So the scope of a variable is a region where a variable is accessible. There are two scope regions, A global and block
or local. 

A block scope variable is also known as a local scope variable. A variable that is defined inside a function (like main) or inside a block (like loops and if blocks) is a local variable. It can be used ONLY inside that particular function/block in which it is declared. a block-scoped variable will not be available outside the block even if the block is inside a function.

5. What is the function of the keyword “Auto”?

The auto keyword may be used to declare a variable with a complex type in a straightforward fashion. You can use auto 
to declare a variable if the initialization phrase contains templates, pointers to functions, references to members, 
etc. With type inference capabilities, we can spend less time having to write out things the compiler already knows.
As all the types are deduced in the compiler phase only, the time for compilation increases slightly but it does not 
affect the runtime of the program. 

6. Define namespace in C++.

Namespaces enable us to organize named items that would otherwise have global scope into smaller scopes, allowing us
to give them namespace scope. This permits program parts to be organized into distinct logical scopes with names. 
The namespace provides a place to define or declare identifiers such as variables, methods, and classes. 

Or we could say that A namespace is a declarative zone that gives the identifiers (names of types, functions, 
variables, and so on) within it a scope. Namespaces are used to arrange code into logical categories and to avoid 
name clashes, which might happen when you have many libraries in your code base.

7. When is void() return type used?

The void keyword, when used as a function return type, indicates that the function does not return a value. When 
used as a parameter list for a function, void indicates that the function takes no parameters. Non-Value Returning 
functions are also known as void functions. They’re called “void” since they’re not designed to return anything. 
True, but only partially. We can’t return values from void functions, but we can certainly return something. 
Although void functions have no return type, they can return values.

8. Can we call a virtual function from a constructor?

Yes, we can call a virtual function from a constructor. But it can throw an exception of overriding.

9. What are void pointers?

Just like its name a void pointer is a pointer that is not associated with anything or with any data type. 
Nevertheless, a void pointer can hold the address value of any type and can be converted from one data type to another.

10. What is ‘this‘ pointer in C++?
this pointer enables every object to have access to its own address through an essential pointer. All member 
functions take this pointer as an implicit argument. this pointer may be used to refer to the calling object within
a member function. 
1. this pointer is used to pass an object as a parameter to another method.
2. Each object gets its own copy of the data member.
3. this pointer is used to declare indexers.


