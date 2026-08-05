/*
STL = Containers  +    Algo     +        Iterators
           ^       procedures to         Objects which points to
           |       process data          an element of container
           |
object which stores data


Containers
|--> Sequence Containers    -->
                 Linear Fashion O->O->O->O->O, Vector, list, Deqeue
|--> Associative Containers -->
                 Direct Access - Set/Multiset, Map/MultiMap
|--> Derived Containres     -->
                 Real world Modeling -> Stack, Queue.

When to use which
Sequence Container
    \_. Vector -> Random Access                = Fast
                  Insertion/Del at the middle  = slow
                  Insertion at the end         = Fast
    \_. List   -> Random Access = slow
                  Insertion -> fast
                  Del/ Ins at the end -> fast
Associative containers
    \_. All operations fast except random access
Derived Containers
    \_. Depends -> Data structure
*/