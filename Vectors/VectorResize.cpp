#include <iostream> 
#include <vector> 
using namespace std;

void SizeLower() 
{ 
    vector<int> vec;
	
	vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 
  
    cout << "\n\n Contents of vector before resizing : " 
         << endl;
	
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " "; 
  
    cout << endl;
	
	vec.resize(4); 
  
    cout << " Contents of vector after resizing : " 
         << endl;
		 
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " ";	 
}

void SizeIncreased() 
{ 
    vector<int> vec;

	vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 
  
    cout << "\n\n Contents of vector before resizing : " 
         << endl;
		 
	 for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " "; 
  
    cout << endl;
	
	vec.resize(8);

	cout << " Contents of vector after resizing : " 
         << endl;
	
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " ";
}

void SpecifiedIncreace() 
{ 
    vector<int> vec;
	
	vec.push_back(1); 
    vec.push_back(2); 
    vec.push_back(3); 
    vec.push_back(4); 
    vec.push_back(5); 
  
    cout << "\n\n Contents of vector before resizing : "
         << endl;
		 
	for (int i = 0; i < vec.size(); i++) 
        cout << " " << vec[i] << " "; 
  
    cout << endl;

	vec.resize(12, 9);
	
	cout << " Contents of vector after resizing : " 
         << endl;
	
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

*/		 