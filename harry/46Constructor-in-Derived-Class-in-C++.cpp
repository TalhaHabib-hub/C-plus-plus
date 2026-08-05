/*

->We can use constructors in derived classes in C++.

->If base class constructor does not have any arguments, there is no need of any constructor in derived class.

->But if there are one or more arguments in the base class constructor, derived class need to pass arguments to the base class constructor

->If both base and derived classes have constructors, base class constructor is executed first.

-> In multiple inheritance9(when from two classes a classe is forms), base classes are constructed in the order in which they appear in the class declaration. the one we declare first will have constructor that will be executed first

-> In multilevel inheritance(A -> B -> C->), the constructors are executed in the order of inheritance. first A's constructor will be executed then B then C.

=> Special Syntax:


1. C++ supports an special syntax for passing arguments to multiple base classes

2. The constructor of the derived class receives all the arguments at once and then will pass the calls to the respective base classes.

3. The body is called after all the constructors are finished executing.

=> Special case of virtual base class


. the constructors for virtual base classes are invoked before an nonvirtual base class.

. If there are multiple virtual base classes, they are invoked in the order declared.

. Any non-virtual base class are then constructed before the derived class constructor is executed.

*/