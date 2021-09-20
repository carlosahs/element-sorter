# Chemical element sorter
The program sorts the chemical elements in a list by their atomic mass in
ascendant order. The sorting is performed using *merge sort* since it mantains
a time complexity of `O(n log(n))` for most cases so the sorting can be
performed fast. 

Since there are no constrains in the memory usage and the program is not
intended to run on any low-memory device, its space complexity of `O(n)` does
not affect the functionality of the program for what it is intended to run on.

# How to compile
The program is compiled using `g++` running
```sh
g++ src/main.cpp src/ChemicalElement.cpp
```
