# Pillars of OOPS
## Encapsulation (Hiding Information)
Wrapping up data members and member functions. (Class)
Fully Encapsulated class - All Data members are private (can be accessed in the same class).
> **Advantages:**   
Hide the Data. High Security.
If we want we can Make our class read only.
Code Reusability.
Unit testing. 

## Inheritance (Property Sharing)
Writing single class containing common properties that can be used byy other classes directly. Parent - Child

```
class childClassName : AccessSpecifier parentClassName
```

* protected - can only be accessed from within the class or child class
* private - can only be accessed from within the class 

**Inheritance Ambiguity** - make use of scpe resolution operator to specify whose function to use.
```
obj.A::func();
obj.B::func();
```
## Polymorphism (One Name Many Forms)
- Compile Time Polymorphism (Static Poly):
    * Function Overloading - Type or number of parameters 
    * Operator overloading - Cannot overload (::, .*, ., ?:)
    ```
    returnType operator+();
    ```
- Run Time Overloading (Dynamic Poly):
    * Method Overriding - Methods having same name, parameters existing in inherited classes


## Abstraction (Implementation Hiding)
* Making use of access modifiers 
(stack overflow se padho)




