// virtual base class
/*let say Talha, there is class named A it has a vairalble member 'a' now there you made 2 derived classes B and C which will get the variable 'a' as there members.
Now the twist comes here if you made another class D which is inheriting members (varaibales and mehtods) from class B and C, but there rose an ambiguity that the D class now will inherite 2 'a'. to solve this issue we have the our very Best " Virtual Base class making method "
this mean that while making the B and C we will inherit them as a virtual derived class and these will be virtual base class for the class D, in this way dear Talha only one 'a' will be inherited to the D class */
//  // the syntax for it is 
//  class B: virtual public A{
//     //body of B
//  } ;
//  class C: virtual public A{
//     //body of c
//  } ;