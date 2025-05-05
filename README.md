# 💻 C++ Concepts – Basics with Examples

## 📌 USER-DEFINED DATA TYPES

Suppose you want to store the **name** (`string`), **roll number** (`int`), and **CGPA** (`float`) of **50 students**.  
You **can’t store all of this mixed data in a single array** because:

- Arrays store **only one type** of data (like all `int` or all `string`).
- You need to store **different types of data together** for each student.

👉 **To store all this related information together**, you create your **own custom data type** – this is called a **user-defined data type**.

---

## 🔄 PASSING OBJECTS TO FUNCTION

You can create a **function that automatically prints the details** of a class object when it's called.  
This helps to:
- **Save time**
- **Reduce complexity** of the code/program

---

## 📥 PASS BY VALUE

- A **copy** of the original variable or object is passed to the function.
- Any changes made **inside the function do NOT affect** the original variable.

---

## 🔗 PASS BY REFERENCE

- The **actual variable** is passed to the function using a reference (`&`).
- Any change made inside the function **directly affects** the original variable.

---

## 🏗️ What is a Constructor in C++?

A **constructor** is a special function inside a class that **automatically runs when you create an object** of that class.

It is used to:
- **Give initial values** to the object’s data members.
- **Set things up** when the object is created.

### ✅ Basic Rules of Constructors:
- A constructor has the **same name as the class**.
- It **does not have any return type** (not even `void`).
- It **runs automatically** when an object is made.

---

# 🚀 Types of Constructors in C++

In C++, **constructors** are special functions that are **automatically called** when an object of a class is created. They are mainly used to **initialize object properties**.

---

## 🔹 1. Default Constructor

A **default constructor** takes **no arguments**. It sets **default values** to the object's data members.

### ✅ Example:
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Default Constructor
    Student() {
        name = "Unknown";
        roll = 0;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.display();
    return 0;
}
```

### 🧾 Output:
```
Name: Unknown, Roll: 0
```

---

## 🔹 2. Parameterized Constructor

A **parameterized constructor** takes arguments so you can assign **custom values** to the object at the time of creation.

### ✅ Example:
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Parameterized Constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1("Shashwat", 101);
    s1.display();
    return 0;
}
```

### 🧾 Output:
```
Name: Shashwat, Roll: 101
```

---

## 🔹 3. Copy Constructor

A **copy constructor** creates a **new object** by **copying values** from an existing object of the same class.

### ✅ Example:
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    // Parameterized Constructor
    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Copy Constructor
    Student(const Student &s) {
        name = s.name;
        roll = s.roll;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1("Shashwat", 101);
    Student s2 = s1; // Copy constructor is called
    s2.display();
    return 0;
}
```

### 🧾 Output:
```
Name: Shashwat, Roll: 101
```

---

## 📌 Summary Table

| Constructor Type         | Arguments      | Purpose                                     |
|--------------------------|----------------|---------------------------------------------|
| Default Constructor      | ❌ No          | Sets default values                         |
| Parameterized Constructor| ✅ Yes         | Sets custom values during object creation   |
| Copy Constructor         | ✅ Yes (object)| Creates a new object by copying another     |

---

> 💡 Constructors make object creation easier and more flexible by initializing data automatically.


# 🔑 `this` Keyword in C++ (Constructor Context)

In C++, the `this` keyword is a **special pointer** available inside all **non-static member functions**, including **constructors**.  
It points to the **current object** that is being created or used.

---

## 📌 In the Context of Constructors:

When a constructor initializes an object’s data members, the `this` pointer helps **distinguish between local variables and class members** if they have the **same name**.

---

## 🧠 Why Use `this`?

- When the **parameter name is the same** as the **data member name**, `this->` makes it clear that you're referring to the **data member**.
- It **improves code clarity** and **prevents confusion**.

---

> 🔍 `this` is especially useful in constructors to write clean, readable, and unambiguous code.

# 📌 Object Pointer in C++

In C++, an **object pointer** is a pointer that is used to **store the address of an object**.  
Just like you can create a pointer to an `int`, `float`, or other data type, you can also create a pointer to a **class object**.

---

## 🧠 Why Use Object Pointers?

- To **access members** of an object dynamically.
- To **pass large objects efficiently**.
- To work with **arrays of objects**, **dynamic memory**, and **polymorphism** (advanced use).

---

## ✅ Syntax:
```cpp
ClassName *ptr;
```

---

## ✅ Example:
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Shashwat";
    s1.roll = 101;

    // Object pointer
    Student *ptr = &s1;

    // Accessing members using pointer
    ptr->display();  // Same as s1.display()

    return 0;
}
```

---

## 🔹 Important Operators:

| Operator | Use                                      |
|----------|------------------------------------------|
| `->`     | To access members using object pointer   |
| `*`      | To dereference the pointer               |

---

## 📌 Summary

- Object pointers store the **address of class objects**.
- Use `->` to access class members through the pointer.
- Useful for dynamic memory allocation, passing by reference, and OOP concepts like polymorphism.

---

> 🚀 Object pointers give you more control and flexibility in object-oriented programming in C++.

# 💡 Dynamic Memory Allocation in C++

**Dynamic memory allocation** means allocating memory **at runtime** (while the program is running), instead of at compile time.

In C++, we use the `new` and `delete` operators to manage dynamic memory.

---

## 📌 Why Use Dynamic Allocation?

- When you **don’t know the size** of data in advance.
- To **create objects or arrays at runtime**.
- To **efficiently manage memory usage**.

---

## ✅ Syntax

### 🔸 Allocate memory:
```cpp
int *ptr = new int;        // Single int
int *arr = new int[5];     // Array of 5 integers
```

### 🔸 Free memory:
```cpp
delete ptr;       // Free single variable
delete[] arr;     // Free array
```

---

## ✅ Example: Dynamic Allocation for Single Variable
```cpp
#include <iostream>
using namespace std;

int main() {
    int *p = new int;   // allocate memory
    *p = 10;            // assign value
    cout << *p << endl;

    delete p;           // free memory
    return 0;
}
```

---

## ✅ Example: Dynamic Allocation for Object
```cpp
class Student {
public:
    int roll;
    void display() {
        cout << "Roll: " << roll << endl;
    }
};

int main() {
    Student *s = new Student;
    s->roll = 101;
    s->display();

    delete s;  // free memory
    return 0;
}
```

---

## ⚠️ Important Points

- Always use `delete` or `delete[]` to **free memory** created with `new`.
- Not freeing memory can cause **memory leaks**.
- `new` returns a pointer to the allocated memory.

---

> 🧠 Dynamic memory allocation gives your programs flexibility and efficient memory usage — especially useful in larger applications.

# 📚 Vector in C++

In C++, a **vector** is a part of the Standard Template Library (STL).  
It is a **dynamic array** that can **grow or shrink in size automatically** as elements are added or removed. 
When the size and capacity of the vector is same , then it will create a new array/vector of double size.

---

## ✅ Why Use Vectors?

- You don't need to know the size in advance.
- Automatically manages memory.
- Comes with useful built-in functions (like `.push_back()`, `.size()`, `.pop_back()`, etc.).

# 🔐 Access Modifiers in C++

In C++, **access modifiers** are used to set the level of access (or visibility) for **class members** (variables and functions).

They help protect the internal data of a class and define how that data can be accessed from outside the class.

---

## ✅ Types of Access Modifiers:

### 1. `public`

- Members declared as `public` **can be accessed from anywhere** (inside or outside the class).
- No restriction on access.

```cpp
class Student {
public:
    int roll;
    void display() {
        cout << "Roll: " << roll;
    }
};
2. private
Members declared as private can only be accessed within the class.

Cannot be accessed directly from outside the class.

cpp
Copy
Edit
class Student {
private:
    int roll;

public:
    void setRoll(int r) {
        roll = r;
    }

    void display() {
        cout << "Roll: " << roll;
    }
};
3. protected
Works like private, but it can also be accessed by derived (child) classes.

Not accessible from outside the class directly.

cpp
Copy
Edit
class Base {
protected:
    int value;
};

class Derived : public Base {
public:
    void show() {
        value = 100; // allowed because it's protected
        cout << value;
    }
};
🧠 Summary Table
Access Modifier	Access in Class	Access Outside Class	Access in Derived Class
public	✅ Yes	✅ Yes	✅ Yes
private	✅ Yes	❌ No	❌ No
protected	✅ Yes	❌ No	✅ Yes

🚀 Access modifiers help in encapsulation — hiding internal details and exposing only necessary parts of your code.

yaml
Copy
Edit

---





