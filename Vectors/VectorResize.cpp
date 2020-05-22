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
}		 	 