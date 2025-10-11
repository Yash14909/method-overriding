
---

# Polymorphism Example in C++

This project demonstrates **runtime polymorphism** using base and derived classes in C++.  
It shows how **virtual functions** behave differently from regular member functions when accessed through a base class pointer.

---

## 🧠 Concepts Covered

- **Inheritance**
- **Virtual Functions**
- **Function Overriding**
- **Base Class Pointers**
- **Runtime Polymorphism**

---

## 🧩 Example Overview

In this project:
- A **base class** defines a virtual function and a regular function.
- A **derived class** overrides the virtual function.
- Using a **base class pointer**, you’ll see how calling virtual vs. non-virtual functions behaves differently.

---

## 🛠️ Compilation & Execution

To compile the code, use:

```bash
g++ polymorphism.cpp -o polymorphism

To run the compiled program:

./polymorphism


---

📄 Sample Output

Base class regular function
Derived class virtual function

This output shows that:

The regular function of the base class is called (since it's not virtual).

The virtual function of the derived class is called (demonstrating runtime polymorphism).



---

🧱 Project Structure

polymorphism/
│
├── polymorphism.cpp   # Main source code demonstrating polymorphism
└── README.md           # Project documentation


---

🧠 Learning Outcome

By studying this example, you’ll understand:

How virtual functions enable runtime (dynamic) polymorphism.

The difference between compile-time and runtime binding in C++.

Why declaring destructors as virtual in base classes is important.



---

👨‍💻 Author

Yashvreddy41 
BCA (Commerce)
Savitribai Phule Pune University
---




