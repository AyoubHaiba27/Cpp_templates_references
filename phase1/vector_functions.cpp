#include<vector>

vector<data_type> vector_name (vetor_size) //declear a vector of a specific size
vector<data_type> vector_name //declear a vector without a specific size

vector_name[i] = value //assign a value to an element in a vector

cin>> vector_name[i] ; //read a value and assign it to an elemant in the vector
cout<< v[i] ; //print the value of an element in a vector

vector_name.size() //returns size of vector
vector_name.resize(x); //Changes the size of the vector to n
vector_name.empty() //checks if the vector is empty (returns Boolean)
vector_name.clear() //erases everything in the vector
vector_name.erase(vector_name.begin() + n); //erases elements at position n
vector_name.erase(vector_name.begin() + l,vector_name.begin() + r); //erases elements from l to r
vector_name.push_back() //adds an element to the end of vector
vector_name.pop_back() //removes the last element of the vector
vector_name.front() //returns the first element in the vector
vector_name.back() //returns the last elemnt in the vector
sort(vector_name.begin(),vector_name.end()); //sorts the complete vector
reverse(vector_name.begin(),vector_name.end()); //reverses the complete vector
sort(vector_name.begin()+l,vector_name.begin()+r); //sorts the vector from l to r (0_based)
reverse(vector_name.begin()+l,vector_name.begin()+r); //reverses the vector from l to r (0_based)
vector_name.insert(vector_name.begin() + n, value); //Inserts elements at a specific position and slides everything after it forward
vector_name.assign(n , value_x); //Assign vector of size n with value x
find(vector_name.begin(), vector_name.end(), value); //returns an iterator pointing to the first occurrence of the value you’re searching for
lower_bound(vector_name.begin(), vector_name.end(), value); //returns an iterator pointing to the first element that is not less than (≥) the given value
upper_bound(vector_name.begin(), vector_name.end(), value); //Returns an iterator pointing to the first element that is greater than (>) the given value.
