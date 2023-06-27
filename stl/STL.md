

# STL C++
* Provide common programming data structures and functions such as lists, stacks, arrays, etc.
* It is a library of container classes, algorithms, and iterators.
* It is  a generalized library.


## Key components of the STL include:
1. Containers:  vector, list, map, set, stack. etc..
2. Algorithms:  sort, find, binary search etc..
3. Iterators:   want to traverse the element of a container. eg: forward_iterator, bidirectional_iterator, random_access_iterator, 
4. Function Objects:    Also known as FUNCTORS, objects that can be used as function arguments to algorithms. (way to pass a function to an algorithm)
5. Adapters:    Adapters are components that modify the behavior of other components in the STL



### 1.Container
    * Most computing involves creating collections of values and then manipulating such collections
    * A class with main Purpose of holding objects is commanly called a container.

#### Sequence Container:
    * Access DS in sequential manner
    1. vector
    2. list
    3. deque
    4. arrays
    5. forward_list

#### Associate Container:
    * Implement sorted data structures that can be quickly searched (O(log n) complexity).
    1. set
    2. multiset
    3. map
    4. multimap

#### Unordered Associative Container (Interduced c++11)
    * Implement unordered data structures that can be quickly searched
    1. unordered_set
    2. unordered_multiset
    3. unordered_map
    4. unordered_multimap

#### Container Adaptors
    * Provide a different interface for sequential containers.
    1. queue
    2. priority_queue
    3. stack

### 2.Algorithms
### 3.Iterators
### 4.Functors

### Vector in C++ STL
* it is same as dynamic arrays.
* resize itself automatically when an element is inserted or deleted.
* Vector elements are placed in contiguous memory location. 
* They can be accessed and traversed using iterators. 
* Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. 
* Inserting and erasing at the beginning or in the middle is linear in time.

* #include<vector>  //vector define (Header file)
* std::vector<data_type> name_of_lists;  (eg: std::vector<int> v1)
* in C++ is the class template that contains the vector container and its member functions. It is defined inside the <vector> header file.

* Time Complexity 
    - Random access - constant o(1)
    - Insertion or removal of elements at the end – constant O(1)
    - Knowing the size – constant O(1)
    - Resizing the vector- Linear O(N)


### list in C++ STL
* list is DLLL - Double Linear Linked Lists
* Lists are sequence containers that allow non-contiguous memory allocation.
* As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time).
* Allow sequential access, Random access to any middle element is not possible.
* #include<list>    //list define (Header file)
* std::list<data_type> name_of_lists;

* Time Complexity
    - Insertion or removal of elements at the Begining/END – constant O(1)
    - sort (std::sort) - O(nlogn)
    - Random access by indexing (list[n] - O(n))




### Array in C++ STL

### map in C++ STL
* Maps are Associate container that store elements in a mapped fashion.
* Each element has a key value and a mapped value.
* No two mapped values can have the same key values.

