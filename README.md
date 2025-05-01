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

