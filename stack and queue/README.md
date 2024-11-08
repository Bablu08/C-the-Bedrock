# Stack, Queue, and Circular Queue - Data Structures Guide

This guide explains Stacks, Queues, and Circular Queues in an easy-to-understand way, covering their basic definitions, operations, properties, and use cases.

---

## Table of Contents
1. [Stack](#stack)
   - [What is a Stack?](#what-is-a-stack)
   - [Stack Operations](#stack-operations)
   - [Properties of Stacks](#properties-of-stacks)
   - [Applications of Stacks](#applications-of-stacks)
2. [Queue](#queue)
   - [What is a Queue?](#what-is-a-queue)
   - [Queue Operations](#queue-operations)
   - [Properties of Queues](#properties-of-queues)
   - [Applications of Queues](#applications-of-queues)
3. [Circular Queue](#circular-queue)
   - [What is a Circular Queue?](#what-is-a-circular-queue)
   - [Circular Queue Operations](#circular-queue-operations)
   - [Properties of Circular Queues](#properties-of-circular-queues)
   - [Applications of Circular Queues](#applications-of-circular-queues)

---

## Stack

### What is a Stack?

A **Stack** is a linear data structure that follows the **LIFO** (Last In, First Out) principle, meaning that the last element added is the first to be removed. Think of it as a stack of plates: the last plate placed on top is the first to be removed.

### Stack Operations

1. **Push**: Adds an element to the top of the stack.
2. **Pop**: Removes the top element from the stack.
3. **Peek/Top**: Views the top element without removing it.
4. **IsEmpty**: Checks if the stack is empty.
5. **IsFull**: Checks if the stack is full (mainly for fixed-size stacks).

### Properties of Stacks

- **LIFO Principle**: The last element pushed is the first to be popped.
- **Dynamic Size**: Stack size can grow and shrink dynamically, depending on the underlying implementation (e.g., linked list or dynamic array).
- **Fixed Size**: For arrays, stacks are of fixed size, and overflow can occur if the stack exceeds its capacity.

### Applications of Stacks

- **Expression Evaluation**: Used in evaluating and parsing expressions (postfix, prefix).
- **Function Call Stack**: Keeps track of function calls and local variables.
- **Undo Mechanism**: Tracks actions to allow undo operations in text editors or graphics software.
- **Backtracking**: Useful in solving puzzles like mazes, where you need to backtrack when a path is blocked.

---

## Queue

### What is a Queue?

A **Queue** is a linear data structure that follows the **FIFO** (First In, First Out) principle, meaning that the first element added is the first to be removed. Imagine a line at a bank: the first person in line is the first to be served.

### Queue Operations

1. **Enqueue**: Adds an element to the back of the queue.
2. **Dequeue**: Removes an element from the front of the queue.
3. **Front**: Views the front element without removing it.
4. **Rear**: Views the last element without removing it.
5. **IsEmpty**: Checks if the queue is empty.
6. **IsFull**: Checks if the queue is full (mainly for fixed-size queues).

### Properties of Queues

- **FIFO Principle**: The first element added is the first to be removed.
- **Fixed Size or Dynamic**: Queues can be implemented with a fixed size using arrays or with a dynamic size using linked lists.

### Applications of Queues

- **CPU Scheduling**: Queues manage tasks waiting to be processed by the CPU.
- **Printing Tasks**: Manages print jobs, where the first request is handled first.
- **Breadth-First Search (BFS)**: Queues are used in algorithms that explore nodes level by level.
- **Data Buffers**: Used in networking and real-time systems where data is processed in a FIFO manner.

---

## Circular Queue

### What is a Circular Queue?

A **Circular Queue** is a type of queue where the last position is connected back to the first position, forming a circle. It’s useful for optimizing memory usage when the queue is implemented in an array by reusing empty spaces created after `dequeue` operations.

### Circular Queue Operations

1. **Enqueue**: Adds an element to the back of the queue.
2. **Dequeue**: Removes an element from the front of the queue.
3. **Front**: Views the front element without removing it.
4. **Rear**: Views the last element without removing it.
5. **IsEmpty**: Checks if the queue is empty.
6. **IsFull**: Checks if the queue is full.

### Properties of Circular Queues

- **Efficient Memory Use**: Circular Queues prevent memory wastage by reusing spaces from dequeued elements.
- **Fixed Size**: Circular Queues typically have a fixed size when implemented with arrays, but they are more memory-efficient than linear queues.
- **Wrap-Around**: Uses modulo arithmetic to wrap around to the beginning when the end of the array is reached.

### Applications of Circular Queues

- **Memory Management**: Circular Queues are used in managing memory (e.g., in OS for managing fixed-size buffers).
- **Traffic Light System**: Circular Queues help cycle through traffic signals in a fixed order.
- **Round Robin Scheduling**: In time-sharing systems, tasks are managed in a circular queue to ensure each process receives CPU time.
- **Buffer in IO Systems**: Used in streaming data, where old data is overwritten by new data as it’s processed.

---

### Summary Table

| Operation      | Stack      | Queue     | Circular Queue |
|----------------|------------|-----------|----------------|
| Insertion      | Push       | Enqueue   | Enqueue       |
| Deletion       | Pop        | Dequeue   | Dequeue       |
| Access First   | Top/Peek   | Front     | Front         |
| Access Last    | N/A        | Rear      | Rear          |
| Order          | LIFO       | FIFO      | FIFO          |
| Fixed Size     | Optional   | Optional  | Yes (Array)   |
| Memory Usage   | Dynamic    | Dynamic   | Efficient     |

### Key Takeaways

- **Stack**: Best for LIFO-based operations. Think of function call stacks and undo functionality.
- **Queue**: Best for FIFO-based processes. Ideal for task scheduling, like in printers or BFS.
- **Circular Queue**: Memory-efficient version of the queue, optimal for cyclic or continuous processing tasks, like buffering.

This guide provides a comprehensive overview of Stacks, Queues, and Circular Queues. Understanding these fundamental data structures helps build a strong foundation in programming and system design.
