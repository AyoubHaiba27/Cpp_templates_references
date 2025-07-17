#include<set>

set<data_type> set_name;//declear a set

set_name.insert(val);//insert val to set
set_name.erase(val);//erases val from set  //function takes both iterator or value
set_name.find(val);//returns an iterator pointing on val if exisits, if not returns an iterator pointing on the end of the set (s.end())
set_name.size();//returns size of set
set_name.lower_bound(x);//returns an iterator pointing to the first element greater than or equal x
set_name.upper_bound(x);//returns an iterator pointing to the first element greater than x


//The set is a sorted array without repitition

//multi set
multiset<data_type> set_name;//declear a multi set
//multi set is the same as set except it has repetitions 
