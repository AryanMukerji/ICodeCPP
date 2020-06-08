#include <iostream>
using namespace std;

void Heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
 
    if(l < n && arr[l] > arr[largest]) // if left child is larger than root
    {
        largest = l;
    }
 
    if(r < n && arr[r] > arr[largest]) // if right child is larger than largest so far
    {
        largest = r;
    }
 
    if(largest != i) // if largest is not root
    {
        swap(arr[i], arr[largest]);
 
        Heapify(arr, n, largest); // recursively heapify the affected sub-tree
    }
}

