***OBJECT ORIENTED PROGRAMMING***
-
Object programming technique/style/paradigm where the program revolves around the object.
- Object has its own staetes/properties and behavior
- Class is a user defined data type
- Object is a instance of a class
- empty class takes 1 byte of memory
- public, private, protected
- public - can be accessed within and outside the class
- private - can be accessed inside the class
- getter and setter
- Dynamic allocation
- whenever we create an object the constructor is called (function w name same as that of the class)
- default constructor
- Parameterised constructor
- 'this' keyword -> jo bhi aapka current object hota hai uska address this me store hota hai
- 'this' is basically a pointer pointing towards current object (jaha se humne call maardi)
- once you write a constructor of your own, then the compiler made constructor dies
- Copy constructor - Trying to copy one object into another
    cc is inbuilt
- writing your own copy constructor
- Shallow copy - Default constructor - same memory being accessed
- Deep copy - creating a user defined copy constructor -> creating a new array and copying the old array into it (refer gfg)
- Copy assignment operator - '='
- Destructor - deallocating the memory -> '~'. Automatically called
    dynamically created objects ke liye destructor manually call karna padega
- static keyword - creates a data member belonging to class. No need to create an object to access this data member.
```Syntax: datatype ClassName::fieldName = Value;```
- static functions - don't have this keyword (because no current object). These functions can only access static members.


HOMEWORK
-
* Padding
* Greedy Alignment
* const - using in object creation, function creation, data members
* initialization list
