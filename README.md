# 📚 Data Structures & Algorithms

Welcome to my **Data Structures and Algorithms (DSA)** repository.
This repository contains my implementations, practice problems, and coding solutions using **C and Python**.

The goal is to build a strong foundation in DSA, improve problem-solving skills, and practice writing efficient and optimized code.

---

## 🚀 Languages Used

* 🔵 **C**
* 🐍 **Python**

---

## 📂 Topics Covered

### 🔹 Data Structures

* Arrays
* Strings
* Linked Lists

  * Singly Linked List
  * Doubly Linked List
  * Circular Linked List
* Stack
* Queue
* Circular Queue
* Trees
* Binary Search Tree
* Heap
* Hashing
* Graphs

### 🔹 Algorithms

* Searching

  * Linear Search
  * Binary Search
* Sorting

  * Bubble Sort
  * Selection Sort
  * Insertion Sort
  * Merge Sort
  * Quick Sort
  * Heap Sort
* Recursion
* Backtracking
* Greedy Algorithms
* Dynamic Programming
* Graph Algorithms

### 🔹 Problem Solving

* Pattern Problems
* Mathematical Problems
* String Problems
* Array Problems
* Linked List Problems
* Stack & Queue Problems
* Tree & Graph Problems
* LeetCode Problems

---

## 📁 Repository Structure

```text
DSA/
│
├── C/
│   ├── Arrays/
│   ├── Linked_List/
│   ├── Stack/
│   ├── Queue/
│   ├── Trees/
│   ├── Graphs/
│   └── Sorting_Searching/
│
├── Python/
│   ├── Arrays/
│   ├── Linked_List/
│   ├── Stack/
│   ├── Queue/
│   ├── Trees/
│   ├── Graphs/
│   └── Sorting_Searching/
│
└── LeetCode/
    ├── Easy/
    ├── Medium/
    └── Hard/
```

---

## 💻 Example

### Singly Linked List in C

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = NULL;

    printf("Data: %d\n", head->data);

    free(head);

    return 0;
}
```

---

## 🎯 Goals

* Understand fundamental DSA concepts
* Improve logical thinking and problem-solving
* Learn time and space complexity
* Practice coding regularly
* Solve problems from platforms like **LeetCode**
* Prepare for coding interviews and technical assessments

---

## ⏱️ Complexity

For each important algorithm, the repository aims to include:

* **Time Complexity**
* **Space Complexity**
* **Best Case**
* **Average Case**
* **Worst Case**

Example:

| Algorithm     |       Best |    Average |      Worst |
| ------------- | ---------: | ---------: | ---------: |
| Linear Search |       O(1) |       O(n) |       O(n) |
| Binary Search |       O(1) |   O(log n) |   O(log n) |
| Bubble Sort   |       O(n) |      O(n²) |      O(n²) |
| Merge Sort    | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort    | O(n log n) | O(n log n) |      O(n²) |

---

## 🧩 Practice Platforms

* LeetCode
* HackerRank
* GeeksforGeeks
* CodeChef
* Codeforces

---

## 📈 Progress

This repository is continuously updated as I learn new concepts and solve more problems.

* [x] Basic C programming
* [x] Arrays
* [x] Linked Lists
* [x] Stack & Queue
* [ ] Trees
* [ ] Graphs
* [ ] Dynamic Programming
* [ ] Advanced Algorithms

---

## 🤝 Contributions

This repository is primarily for my learning and practice.
Suggestions, improvements, and useful approaches are always welcome.

---

## ⭐ Support

If you find this repository useful, consider giving it a **⭐ Star**.

---

## 👨‍💻 Author

**Vaibhav Tyagi**

B.Tech CSE Student | Learning DSA & Problem Solving

---

### 📌 Note

This repository is created for **educational and practice purposes**. The code may be improved and optimized as I learn more advanced concepts.
