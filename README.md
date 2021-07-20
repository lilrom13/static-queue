- [TODO](#todo)
- [C static queue implementation](#c-static-queue-implementation)
  - [requirements](#requirements)
    - [features](#features)
    - [perfomances](#perfomances)
  - [unit-tests](#unit-tests)
  - [functions](#functions)

# TODO

🔥 while in project, ❌ not done wet ✅ done

- ✅ have a coffee
- ✅ enjoy life
- 🔥 setup the project
- ❌ write the CMake files for the queue and the tests
- ❌ write the tests
- ❌ implement the queue
- ❌ CI\CD support
- ❌ performance tests
- ❌ platform tests

# C static queue implementation

This project project implements a static queue in C.

## requirements

### features
1. the queue must be initialize in order to be use
2. an object *can* be **aded** to the queue
3. object *can* be **remove** of the queue
4. the queue *must* behaves like a **FIFO** buffer
5. an object *can* be **consume**
6. when an object is consume, it *must* be **removed** of the queue
7. an object *can* be **peek**
8. when en **object** is peek, it *must* stay in the queue and its place *doesn't change*
9. the queue has a **limited** number of object
10. the queue capacity *must* be **configured** at compile time
11. the queue capacity *can't* **change** during execution
12. the queue must be destroy after use
### perfomances
11. the queue *must* be memory efficient
12. the queue *must not* use dynamic allocation

## unit-tests
| Requirements # | Test description |
|:---------------|:-----------------|
| 1 | after the initialization the queue size must be equal to to the maximal size of the queue |

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
