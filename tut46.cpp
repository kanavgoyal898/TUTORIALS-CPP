// Constructors in Derived Class
// If base class constructor does not have any arguments, there is no need of any constructor in derived class but, if there are one or more arguments in the base class constructor, the derived class needs to pass the arguments to the base class constructor.
// When a class object is created using constructors, the execution order of constructors is:
// 1. Constructors of Virtual base classes are executed, in the order that they appear in the base list.
// 2. Constructors of non-virtual base classes are executed, in the declaration order.
// 3. Constructors of class members are executed in the declaration order (regardless of their order in the initialization list).
// 4. The body of the constructor is executed.