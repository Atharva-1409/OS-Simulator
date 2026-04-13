# 🖥️ Mini OS Simulator (C/C++)

A command-line based Operating System Simulator built in C/C++. This project demonstrates core OS concepts like process scheduling, memory management, and file systems through an interactive shell.

---

## 🚀 Features

### 🔹 Process Scheduling

* Shortest Job First (SJF)
* (Extendable to FCFS, Round Robin, Priority Scheduling)

### 🔹 Memory Management

* Paging simulation
* Page fault calculation
* (Extendable to LRU, FIFO, Optimal)

### 🔹 File System Simulation

* Create files
* Read files
* Write content
* Delete files

### 🔹 Custom Shell

* Interactive CLI interface
* Commands:

  * `schedule` → Run CPU scheduling
  * `memory` → Run memory simulation
  * `fs` → File system operations
  * `exit` → Quit simulator

---

## 🧠 Concepts Covered

* CPU Scheduling Algorithms
* Memory Allocation & Paging
* File System Basics
* Command Line Interface Design

---

## 🏗️ Project Structure

```
os-simulator/
│
├── main.cpp          # Shell interface
├── scheduler.cpp     # CPU scheduling logic
├── scheduler.h
├── memory.cpp        # Memory management (paging)
├── memory.h
├── filesystem.cpp    # File system simulation
├── filesystem.h
└── README.md
```

---

## ⚙️ How to Run

### 🔧 Compile

```bash
g++ main.cpp scheduler.cpp memory.cpp filesystem.cpp -o os
```

### ▶️ Run

```bash
./os
```

---

## 🖼️ Sample Usage

```
Mini OS Simulator Started...

OS> schedule
Enter number of processes: 3
Burst time for P1: 5
Burst time for P2: 2
Burst time for P3: 8

SJF Order:
P2 P1 P3
```

```
OS> memory
Enter number of pages: 5
Enter number of frames: 3
Enter page: 1
Enter page: 2
Enter page: 3
Enter page: 1
Enter page: 4

Page Faults: 4
```

```
OS> fs
Commands: create read write delete exit
FS> create file1
FS> write file1
Enter content: Hello World
FS> read file1
Hello World
```

---

## 🔥 Future Improvements

* Round Robin Scheduling (with time quantum)
* LRU Page Replacement Algorithm
* Multi-threaded process simulation
* User authentication system
* Colored terminal UI
* Logging system

---

## 💡 Why This Project?

This project is designed to strengthen understanding of fundamental operating system concepts while building a practical, interactive tool. It is suitable for:

* Academic learning
* Demonstrating OS knowledge in interviews
* Enhancing GitHub portfolio

---

## 📌 Author

**Atharva Sable**

---

## ⭐ Contribute

Feel free to fork this repository, improve it, and submit a pull request.

---

## 📄 License

This project is open-source and available under the MIT License.

