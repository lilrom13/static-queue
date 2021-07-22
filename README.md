- [TODO](#todo)
- [C static queue implementation](#c-static-queue-implementation)
  - [requirements](#requirements)
    - [features](#features)
    - [perfomances](#perfomances)
  - [unit-tests](#unit-tests)
  - [functions](#functions)

# TODO

🔥 while in progress, ❌ not done wet ✅ done

- ✅ have a coffee
- ✅ enjoy life
- ✅  setup the project
- 🔥 write the tests
- 🔥 write the CMake files for the queue and the tests
- ❌ CI\CD
- ❌ implement the queue
- ❌ performance tests
- ❌ platform tests

# C static queue implementation

This project project implements a static queue in C.

## requirements

### features
1. the queue must be initialize in order to be use
2. an object *can* be **aded** to the queue
3. an object *can* be **consume**
4. when an object is consume, it *must* be **removed** of the queue
5. an object *can* be **peek**
6. when en **object** is peek, it *must* stay in the queue and the object is not dequeue
7.  it is *possible* to know the **number** of object in the queue 
8.  the queue has a **limited** number of object
9.  the queue capacity *must* be **configured** at compile time
10. the queue capacity *can't* **change** during execution
11. the queue must be destroy after use
### perfomances
11. the queue *must* be memory efficient
12. the queue *must not* use dynamic allocation

## unit-tests
| Req. # | Test description | condition(s) |
|:-------|:-----------------|:-------------|
| 1 a. | after the initialization the queue size is 0 |
| 1 b. | after the initialization the queue is empty |
| 2 a. | adding an object to the queue size increases size by 1 |
| 2 b. | the object is added to the queue | the queue is not full
| 2 c. | the queue returns true | the object has been enqueued correctly
| 2 d. | the queue returns false | the queue is full
| 4 a. | consuming an object returns the oldest object of the queue | the queue is not empty |
| 4 b. | if the queue is empty consuming an object returns null | the queue is empty |
| 4 c. | after consuming an object the queue size decreases by 1 | the queue is not empty |
| 5 a. | peeking the queue return the oldest queue's object | the queue is not empty |
| 5 b. | peeking an empty queue return null | the queue is empty |
| 6 a. | peeking an object doesn't change the queue's size |
| 6 b. | peeking an object doesn't remove the it from the queue |
| 7    | size return the number of object currently in the queue |



- object are added at the rear of the queue
- add an element to the queue increase its size of 1
- object are removed from the front of the queue
- remove an element from the queue decrease its size of 1
- add an object when the queue is full has no effect
- remove an object when the queue is empty has no effect
- peek doesn't remove the object from the queue

## functions

| Name | Description | Return |
|:-----|:------------|:-------|
| init | Initializes the queue | 0 if the queue has successfully be initialized. 1 if the queue cannot be initialize|
| add | Adds element to the queue at the end (tail) without violating the restriction of capacity. | 0 if the object has successfully be added. 1 if it is impossible to insert the object
| peek | Returns the head (front) of the queue without removing it | the object's pointer or NULL if the queue is empty |
| remove | Removes the head (front) of the queue and returns it.| the object's pointer. If the queue is empty returns NULL |
