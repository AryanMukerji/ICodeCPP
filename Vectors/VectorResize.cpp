#include <iostream> 
#include <vector> 
using namespace std;

// resizing of the vector (Size of the vector container is lowered.)

void SizeLower() 
{ 
    vector<int> vec;
	
	// 5 elements are inserted 
    // in the vector
	vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 
  
    cout << "\n\n Contents of vector before resizing : " 
         << endl;
	
	// displaying the contents of the 
    // vector before resizing
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " "; 
  
    cout << endl;
	
	// vector is resized 
	vec.resize(4); 
  
    cout << " Contents of vector after resizing : " 
         << endl;
	
	// displaying the contents of the 
    // vector after resizing
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " ";	 
}

// resizing of the vector (Size of the vector container is increased.)

void SizeIncreased() 
{ 
    vector<int> vec;
	
	// 5 elements are inserted  
    // in the vector
	vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 
  
    cout << "\n\n Contents of vector before resizing : " 
         << endl;
	
	// displaying the contents of the 
    // vector before resizing
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " "; 
  
    cout << endl;
	
	// vector is resized
	vec.resize(8);

	cout << " Contents of vector after resizing : " 
         << endl;
	
	// displaying the contents of  
    // the vector after resizing
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " ";
}

/* 

resizing of the vector 
(Size of the vector container is increased and 
new elements are initialized with specified value.)

*/

void SpecifiedIncreace() 
{ 
    vector<int> vec;
	
	// 5 elements are inserted 
    // in the vector
	vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 
  
    cout << "\n\n Contents of vector before resizing : "
         << endl;
	
	// displaying the contents of  
    // the vector before resizing
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " "; 
  
    cout << endl;
	
	vec.resize(12, 9);
	
	// vector is resized
	cout << " Contents of vector after resizing : " 
         << endl;
	
	// displaying the contents  
    // of the vector after resizing
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " ";
}

int main()
{
    SizeLower();
    SizeIncreased();
    SpecifiedIncreace();
    
    return 0;
}

/*

vector::resize() - The function alters the container’s content in actual by inserting 
                   or deleting the elements from it. 
				   
>> It happens so,

=> If the given value of n is less than the size at present then extra elements are 
   demolished. 
=> If n is more than current size of container then upcoming elements are 
   appended at the end of the vector.
   
Syntax: vectorname.resize(int n, int val)

Parameters:-

 n – it is new container size, expressed in number of elements.
val – if this parameter is specified then new elements are initialized with this value.

Return value: This function do not returns anything.

Source: GeeksforGeeks (https://www.geeksforgeeks.org/vector-resize-c-stl/)

*/		 