# Inheritance & Polymorphism Problem Structure

This repository contains problems related to Inheritance and Polymorphism in C++. The problems are categorized by key concepts and designed to help you understand these important topics in OOP.

## Topics Covered

### 1. Basic Inheritance (3 Problems)
- Single inheritance
- Multilevel inheritance
- Hierarchical inheritance
<details>
  <summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section covers the **Basic Inheritance** concepts through various problems designed to strengthen your understanding of single, multilevel, and hierarchical inheritance.

## Problems

### Problem 1: Single Inheritance - Employee and Manager
**Objective**: Implement a basic single inheritance structure.
- Create a base class `Employee` with attributes: `name`, `age`, and `salary`.
- Create a derived class `Manager` that adds a `department` attribute.
- Write a method in both classes to display their details.

**Goal**: Understand how single inheritance works and how to access base class members in the derived class.

For solutions [click here](/solutions/1/p1.cpp).

---

### Problem 2: Multilevel Inheritance - Vehicle, Car, and ElectricCar
**Objective**: Implement multilevel inheritance.
- Create a base class `Vehicle` with attributes: `brand` and `speed`.
- Derive a class `Car` from `Vehicle` with an additional attribute: `fuel type`.
- Further derive a class `ElectricCar` from `Car` that adds a `battery life` attribute.
- Implement methods in each class to display their attributes.

**Goal**: Learn how multilevel inheritance works and how each derived class can access members from all the parent classes.

For solutions [click here](/solutions/1/p2.cpp).


---

### Problem 3: Hierarchical Inheritance - Shape, Circle, and Rectangle
**Objective**: Implement hierarchical inheritance.
- Create a base class `Shape` with an attribute: `color`.
- Derive two classes `Circle` and `Rectangle` from `Shape`.
- Add `radius` for `Circle` and `length`, `width` for `Rectangle`.
- Implement methods to calculate and display the area for both `Circle` and `Rectangle`.

**Goal**: Understand hierarchical inheritance where multiple classes are derived from the same base class.

For solutions [click here](/solutions/1/p3.cpp).

---

### Next Set of Problems: [Access Modifiers in Inheritance →](#)

---
---

</details> 

### 2. Access Modifiers in Inheritance (4 Problems)
- Public inheritance
- Protected inheritance
- Private inheritance

<details>
  <summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section continues with **Access Modifiers in Inheritance** and **Constructor/Destructor in Inheritance**. These problems are designed to help you understand how access modifiers and constructors/destructors behave in an inheritance hierarchy.

## Problems

### Problem 4: Public, Protected, and Private Inheritance - Person, Student, and Professor
**Objective**: Explore how different access modifiers affect inheritance.
- Create a base class `Person` with attributes: `name` and `age`.
- Derive `Student` using public inheritance, `Professor` using protected inheritance, and `Visitor` using private inheritance.
- Implement methods in each derived class to display their details.

**Goal**: Understand how public, protected, and private inheritance affect access to base class members in derived classes.

For solutions [click here](/solutions/2/p4.cpp).

---

### Problem 5: Constructor and Destructor Invocation - Animal, Dog, and Cat
**Objective**: Observe how constructors and destructors are invoked in an inheritance hierarchy.
- Create a base class `Animal` with a constructor that prints a message.
- Derive two classes `Dog` and `Cat` from `Animal`, each with their own constructors and destructors.
- Observe the order of constructor and destructor calls when creating and deleting objects of `Dog` and `Cat`.

**Goal**: Learn the order in which constructors and destructors are called in an inheritance hierarchy.

For solutions [click here](/solutions/2/p5.cpp).

---

### Problem 6: Protected Inheritance - BankAccount and SavingsAccount
**Objective**: Implement inheritance using the protected access modifier.
- Create a base class `BankAccount` with attributes: `balance` and `accountNumber`.
- Derive a class `SavingsAccount` using protected inheritance, and add an interest rate attribute.
- Implement methods to calculate and display the interest earned.

**Goal**: Understand the implications of protected inheritance on accessing members in derived classes.

For solutions [click here](/solutions/2/p6.cpp).

---

### Problem 7: Destructor in Base and Derived Classes - Device, Smartphone, and Tablet
**Objective**: Understand the role of destructors in base and derived classes.
- Create a base class `Device` with a virtual destructor that prints a message.
- Derive `Smartphone` and `Tablet` from `Device`, each with their own destructors.
- Observe the order in which destructors are called when deleting objects of `Smartphone` and `Tablet`.

**Goal**: Learn how destructors are invoked in an inheritance chain, particularly with virtual destructors.

For solutions [click here](/solutions/2/p7.cpp).

---

### Total Problems in this Set: 4

Each problem is designed to build on the concepts of access control and lifecycle management in C++ inheritance.

---
---

</details>

### 3. Virtual Functions & Polymorphism (4 Problems)
- Virtual functions and function overriding
- Dynamic binding using virtual functions
- Pure virtual functions (abstract classes)

<details>
  <summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section covers **Virtual Functions, Pure Virtual Functions, and Abstract Classes**. The problems are designed to solidify your understanding of dynamic polymorphism in C++.

## Problems

### Problem 8: Virtual Function - Shape, Circle, and Rectangle
**Objective**: Implement a virtual function to demonstrate runtime polymorphism.
- Create a base class `Shape` with a virtual function `area()`.
- Derive two classes `Circle` and `Rectangle` from `Shape`.
- Implement the `area()` function in both derived classes to calculate the area based on the respective shape's attributes.

**Goal**: Understand how virtual functions enable dynamic method binding at runtime.

For solutions [click here](/solutions/3/p8.cpp).

---

### Problem 9: Abstract Class - Animal, Dog, and Cat
**Objective**: Use an abstract class and pure virtual functions.
- Create an abstract class `Animal` with a pure virtual function `sound()`.
- Derive two classes `Dog` and `Cat` that implement the `sound()` function.
- Write a program that creates objects of `Dog` and `Cat` and calls their `sound()` methods.

**Goal**: Learn how abstract classes and pure virtual functions are used to enforce derived class behavior.

For solutions [click here](/solutions/3/p9.cpp).

---

### Problem 10: Virtual Destructor - Base and Derived Classes
**Objective**: Ensure proper destructor behavior using a virtual destructor.
- Create a base class `Base` with a virtual destructor.
- Derive a class `Derived` that overrides the destructor.
- Create a program that demonstrates the correct order of destructor calls when using base class pointers to derived class objects.

**Goal**: Understand the importance of virtual destructors in polymorphism.

For solutions [click here](/solutions/3/p10.cpp).

---

### Problem 11: Interface Using Abstract Class - PaymentSystem
**Objective**: Simulate an interface-like structure using an abstract class.
- Create an abstract class `PaymentSystem` with a pure virtual function `processPayment()`.
- Derive two classes `CreditCard` and `PayPal` that implement the `processPayment()` method.
- Demonstrate how polymorphism allows different payment methods to be processed using the same interface.

**Goal**: Learn how abstract classes can simulate interfaces in C++.

For solutions [click here](/solutions/3/p11.cpp).

---

### Total Problems in this Set: 4

These problems will deepen your understanding of polymorphism, virtual functions, and abstract classes.

---
---

</details>

### 4. Constructor and Destructor in Inheritance (4 Problems)
- Constructor invocation in base and derived classes
- Destructor invocation order

<details>
<summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section covers **Constructor and Destructor in Inheritance**, focusing on the invocation order of constructors and destructors in base and derived classes.

## Problems

### Problem 12: Constructor Invocation in Base and Derived Classes - Vehicle, Car, and Bike
**Objective**: Understand the order in which constructors are called in base and derived classes.
- Create a base class `Vehicle` with a constructor that prints a message.
- Derive two classes `Car` and `Bike` from `Vehicle`, each with their own constructors.
- Observe the order of constructor calls when creating objects of `Car` and `Bike`.

**Goal**: Learn how constructors in the base and derived classes are invoked.

For solutions [click here](/solutions/4/p12.cpp).

---

### Problem 13: Destructor Invocation in Base and Derived Classes - Appliance, Refrigerator, and Microwave
**Objective**: Understand the order in which destructors are called in base and derived classes.
- Create a base class `Appliance` with a destructor that prints a message.
- Derive two classes `Refrigerator` and `Microwave` from `Appliance`, each with their own destructors.
- Observe the order of destructor calls when deleting objects of `Refrigerator` and `Microwave`.

**Goal**: Learn how destructors in the base and derived classes are invoked.

For solutions [click here](/solutions/4/p13.cpp).

---

### Problem 14: Multiple Inheritance and Constructor Invocation - Animal, Bird, and Fish
**Objective**: Explore the behavior of constructor invocation in multiple inheritance.
- Create two base classes `Bird` and `Fish`, each with a constructor that prints a message.
- Derive a class `Penguin` from both `Bird` and `Fish`, and implement its constructor.
- Create an object of `Penguin` and observe the order of constructor calls.

**Goal**: Understand how constructors are invoked in multiple inheritance scenarios.

For solutions [click here](/solutions/4/p14.cpp).

---

### Problem 15: Destructor Invocation in Virtual Inheritance - Gadget, Phone, and SmartPhone
**Objective**: Study destructor invocation in virtual inheritance.
- Create a base class `Gadget` with a virtual destructor that prints a message.
- Derive two classes `Phone` and `Tablet` from `Gadget`, and derive `SmartPhone` from both `Phone` and `Tablet`.
- Observe the order of destructor calls when deleting objects of `SmartPhone`.

**Goal**: Understand the behavior of destructors in a virtual inheritance hierarchy.

For solutions [click here](/solutions/4/p15.cpp).

---


### Problem 16: Constructor and Destructor Order in Single Inheritance - Shape and Circle
**Objective**: Investigate the constructor and destructor invocation order in a single inheritance scenario.
- Create a base class `Shape` with a constructor and destructor that print messages.
- Derive a class `Circle` from `Shape`, implementing its own constructor and destructor.
- Observe the order of constructor and destructor calls when creating and destroying a `Circle` object.

*Understanding the sequence helps ensure proper resource management in your programs.*

For solutions [click here](/solutions/4/p16.cpp).

---

### Problem 17: Constructor and Destructor in Multiple Inheritance - Parent1, Parent2, and Child
**Objective**: Explore constructor and destructor invocation in multiple inheritance.
- Create two base classes `Parent1` and `Parent2`, each with their own constructors and destructors.
- Derive a class `Child` from both `Parent1` and `Parent2`.
- Create an object of `Child` and observe the order of constructor and destructor calls.

*This will illustrate how constructors and destructors are invoked in complex inheritance hierarchies.*

For solutions [click here](/solutions/4/p17.cpp).

---

### Problem 18: Virtual Destructors in Inheritance - Base and Derived Classes
**Objective**: Understand the importance of virtual destructors in inheritance.
- Create a base class `Base` with a virtual destructor that prints a message.
- Derive a class `Derived` that overrides the destructor.
- Create an object of `Derived` using a `Base` pointer and observe the destructor invocation order.

*Learning this concept is crucial for preventing resource leaks in polymorphic classes.*

For solutions [click here](/solutions/4/p18.cpp).

---

### Problem 19: Dynamic Memory and Destructor Invocation - Class A and B
**Objective**: Investigate the effect of dynamic memory allocation on destructor calls.
- Create a base class `A` with a constructor and destructor that print messages.
- Derive a class `B` from `A`, allocating dynamic memory in `B`’s constructor and releasing it in `B`’s destructor.
- Create an object of `B` and observe the destructor calls, ensuring proper memory management.

*This scenario emphasizes the need for careful resource handling in dynamically allocated objects.*

For solutions [click here](/solutions/4/p19.cpp).

---

### Total Problems in this Set: 8

These problems will enhance your understanding of how constructors and destructors behave in various inheritance hierarchies.

---
---

</details>

### 5. Operator Overloading in Inheritance (4 Problems)

If you are new to operator overloading then pleace checkout [this](../porject10).

<details>
<summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section covers **Operator Overloading in Inheritance**, focusing on how operators can be overloaded in base and derived classes.

## Problems

### Problem 20: Overloading the `+` Operator - Base and Derived Classes
**Objective**: Implement operator overloading in a base class and derived class.
- Create a base class `Point` that represents a point in 2D space.
- Overload the `+` operator to add two `Point` objects.
- Derive a class `ColoredPoint` from `Point` that adds an additional color attribute.
- Overload the `+` operator in `ColoredPoint` to add two `ColoredPoint` objects, combining both position and color.

*Understanding operator overloading can simplify operations on custom objects.*

For solutions [click here](/solutions/5/p20.cpp).

---

### Problem 21: Overloading the `<<` Operator for Output - Base and Derived Classes
**Objective**: Overload the `<<` operator for custom output.
- Create a base class `Shape` with a method to return shape information.
- Derive classes `Circle` and `Rectangle` from `Shape`, each implementing their own methods.
- Overload the `<<` operator to allow outputting `Shape`, `Circle`, and `Rectangle` objects directly using `cout`.

*This technique enhances the usability of your classes for output purposes.*

For solutions [click here](/solutions/5/p21.cpp).

---

### Problem 22: Overloading the `[]` Operator - Base and Derived Classes
**Objective**: Use operator overloading to access elements in a custom collection.
- Create a base class `Collection` that manages a dynamic array of integers.
- Overload the `[]` operator to access elements in `Collection`.
- Derive a class `AdvancedCollection` from `Collection` and add functionality to manipulate the collection.
- Ensure the `[]` operator in `AdvancedCollection` uses the base class functionality.

*This approach provides intuitive access to elements in custom data structures.*

For solutions [click here](/solutions/5/p22.cpp).

---

### Problem 23: Overloading the `=` Operator - Copy Assignment in Inheritance
**Objective**: Implement the copy assignment operator for base and derived classes.
- Create a base class `Employee` with attributes for name and ID.
- Derive a class `Manager` from `Employee` with additional attributes.
- Overload the `=` operator in `Manager` to ensure proper copying of both base and derived class attributes.

*Mastering the copy assignment operator is crucial for managing resources in inherited classes.*

For solutions [click here](/solutions/5/p23.cpp).

---

### Total Problems in this Set: 4

These problems will enhance your understanding of operator overloading in the context of inheritance, improving the usability and functionality of your classes.

---
---

</details>

### 6. Polymorphism & Object Slicing (4 Problems)
- Base pointer to derived object
- Object slicing issue in polymorphism

<details>
<summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section covers **Polymorphism & Object Slicing**, focusing on base pointers to derived objects and the object slicing issue.

## Problems

### Problem 24: Base Pointer to Derived Object - Animal and Dog
**Objective**: Understand how base class pointers can point to derived class objects.
- Create a base class `Animal` with a virtual method `speak()`.
- Derive a class `Dog` from `Animal` that overrides the `speak()` method.
- Create a base pointer to a `Dog` object and call the `speak()` method.

*This illustrates how polymorphism allows dynamic method binding based on object types.*

For solutions [click here](/solutions/6/p24.cpp).

---

### Problem 25: Object Slicing Issue in Polymorphism - Shape and Circle
**Objective**: Explore the concept of object slicing in polymorphism.
- Create a base class `Shape` with a method to calculate the area.
- Derive a class `Circle` from `Shape` and override the area calculation.
- Create a `Shape` object and assign it a `Circle` object to observe object slicing.

*Understanding object slicing is crucial for effective use of polymorphism in C++.*

For solutions [click here](/solutions/6/p25.cpp).

---

### Problem 26: Polymorphism with Virtual Functions - Base and Derived Classes
**Objective**: Reinforce understanding of polymorphism with virtual functions.
- Create a base class `Shape` with a virtual method `draw()`.
- Derive classes `Circle` and `Rectangle` from `Shape`, each implementing their own `draw()` method.
- Use a base class pointer to call the `draw()` method for various shapes.

*This highlights the flexibility and power of polymorphic behavior in object-oriented programming.*

For solutions [click here](/solutions/6/p26.cpp).

---

### Problem 27: Preventing Object Slicing - Using References or Pointers
**Objective**: Prevent object slicing by using references or pointers.
- Modify the previous problem to use a reference to `Shape` instead of a `Shape` object.
- Create a function that accepts a reference to `Shape` and calls the `draw()` method.
- Demonstrate that using references prevents object slicing.

*This showcases best practices for avoiding issues related to object slicing.*

For solutions [click here](/solutions/6/p27.cpp).

---

### Total Problems in this Set: 4

These problems will deepen your understanding of polymorphism and the object slicing issue, essential concepts in object-oriented programming.

---
---

</details>

### 7. Type Casting in Inheritance (4 Problems)
- Static casting in inheritance
- Dynamic casting for polymorphic behavior

<details>
<summary>Click to expand</summary>

# Inheritance & Polymorphism Problem Structure

This section covers **Type Casting in Inheritance**, focusing on static and dynamic casting.

## Problems

### Problem 28: Static Casting in Inheritance - Base and Derived Classes
**Objective**: Understand how static casting works in inheritance.
- Create a base class `Base` and a derived class `Derived`.
- Create an object of `Derived` and use static casting to convert it to a `Base` pointer.
- Demonstrate that the derived class’s methods can still be accessed if cast back to `Derived`.

*This illustrates how static casting operates within inheritance hierarchies.*

For solutions [click here](/solutions/7/p28.cpp).

---

### Problem 29: Dynamic Casting for Polymorphic Behavior - Base and Derived Classes
**Objective**: Explore dynamic casting to safely downcast.
- Create a base class `Animal` with a virtual method `sound()`.
- Derive classes `Cat` and `Dog` from `Animal`, each implementing their own `sound()` method.
- Use dynamic casting to safely convert a base pointer to a derived pointer and call the specific `sound()` method.

*This demonstrates the importance of dynamic casting in ensuring safe downcasting in polymorphic scenarios.*

For solutions [click here](/solutions/7/p29.cpp).

---

### Problem 30: Invalid Dynamic Cast - Handling Failed Casts
**Objective**: Handle scenarios where dynamic casting fails.
- Modify the previous problem to include a scenario where a base pointer cannot be cast to a derived type.
- Use `dynamic_cast` and check for `nullptr` to handle failed casts gracefully.

*Understanding how to manage failed dynamic casts is critical for robust code.*

For solutions [click here](/solutions/7/p30.cpp).

---

### Problem 31: Upcasting and Downcasting - Safe and Unsafe Casts
**Objective**: Compare safe and unsafe casts in inheritance.
- Create a base class `Shape` and a derived class `Rectangle`.
- Demonstrate both upcasting (base to derived) and downcasting (derived to base) with appropriate casting methods.
- Show how to correctly use static and dynamic casts in both scenarios.

*This reinforces the differences between upcasting and downcasting, emphasizing safety in type conversions.*

For solutions [click here](/solutions/7/p31.cpp).

---

### Total Problems in this Set: 4

These problems will enhance your understanding of type casting in inheritance, an essential aspect of object-oriented programming in C++.

---
---

</details>

---

### Total Problems: 31

Each section is designed to provide a deeper understanding of how inheritance and polymorphism work in C++.
