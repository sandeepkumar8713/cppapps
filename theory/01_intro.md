# CPP theory

## C++ core feature vs Standard library vs STL

**Core Feature**
1. Basic building block that makes up c++ programming language.
2. Example : How you **define variables**, Rules that define how you can use a function 
3. It defines the **basic rules** of C++ program. It is the foundation.

**Standard Library**
1. It is ready to use highly specialized components that we can easily use in Cpp program
2. Example : **iostream, string**.
3. We can use it directly without going into details of operation.

**STL**
1. **Standard Template Library** is part of the standard library, but it is a collection of container types.
2. Collection of things, Set of types that allows us to **store collections**, 
   **algorithm or functions** that works on this collection, 
   Specialized types i.e. iterators that allows us to navigate through these containers running these algorithms on
   each element in the collection.

## Data types
1. int, float, double, char, bool, **void**, auto
2. n bits can represent **0 to (2^n) - 1** numbers
3. 15; // Decimal, 017; // Octal, 0x0F; // Hexadecimal, 0b00001111; // Binary
4. Octal is not used any longer in modern times.
5. sizeof(int), sizeof(truck_count)
6. **Braced initializers** List initialization does not allow **narrowing**. 
   int narrowing_conversion {2.9} // compilation error
7. **Functional initialization**
   int orange_count(10);
8. **iomanip** std library to manage input and output formatting.

## Pointer
1. Size of pointer is always **8 bytes**. As it saves the address of 64 bit memory location.
2. **Initialization** 
   int int_var {43};
   int *p_int{&int_var};// The address of operator (&);
3. 






