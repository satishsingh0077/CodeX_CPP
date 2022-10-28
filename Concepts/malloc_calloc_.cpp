/*
*************************************** Dynamic memeory allocation happens in heap memory. *********************************************************
Malloc - statnds for memory allocation. the return value is a void pointer to the allocated space. To get a particular type, typecasting is required
If space is not allocated, the process fails and returns a null pointer
value at allocated memory is initialized with garbage value
syntax:   ptr = (*ptr_type)malloc(size_in_bytes)  size_in_bytes = n*sizeofdatatype.


Calloc - stands for contiguous allocation.
all things are same as malloc except the values at allocated memory is initilized with zero.
syntax:   ptr = (*ptr_type)calloc(n, size_of_each_block)  n = number of blocks, size_in_bytes = size of each block

Realloc - stands for reallocation.
if the dynamically allocated memory is insufficient, we can change the size of previously allocated memory using realloc.
syntax:   ptr = (*ptr_type)realloc(ptr, new_size_in_bytes)  ptr = old pointer, new_size_in_bytes = n*sizeofdatatype.

Free - used to free the allocated memory.
syntax: free(ptr)

*********************** ALWAYS CHECK IF (PTR == NULL) AFTER USING MALLOC, CALLOC OR REALLOC TO VERIFY IF MEMORY ALLOCATION SUCCEDDED ********************
*/

#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int n = 3; // size of dynamic allocated memory
    // use of malloc
    int *intptr = static_cast<int *>(malloc(n * sizeof(int))); // dynamically allocating memory for an integer array of size 3
    // checking the value assigned in the allocated memory. Malloc assignes garbage value
    cout<<"values assigned by malloc"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << intptr[i] << endl;
    }

    // use of calloc
    int *intptr1 = static_cast<int *>(calloc(n, sizeof(int))); // dynamically allocating memory for an integer array of size 3
     // checking the value assigned in the allocated memory. Calloc assigns 0
    cout<<"values assigned by calloc"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << intptr1[i] << endl;
    }
    // lets read the value fro user;
    cout<<"please enter values:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>intptr1[i];
    }
    // lets read the value fro user;
    cout<<"values entered by user"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << intptr1[i] << endl;
    }

    // use of realloc
    // lets say we want to change the size of dunamically allocated array. Both upgrade and downgrade is possible

    n = 7;
    intptr1 = static_cast<int*>(realloc(intptr1, n*sizeof(int)));
    cout<<"values assigned by realloc"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << intptr1[i] << endl;
    }
    // Remeber that reallocate retains the previous values assigned but only upto the size of the old block. new blocks if added will have garbage values 

    //************************************ ALWAYS FREE THE POINTER AFTER ITS USE IS DONE TO FREE UP MEMORY **********************************************

    free(intptr);
    free(intptr1);

}