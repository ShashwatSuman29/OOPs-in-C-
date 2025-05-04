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