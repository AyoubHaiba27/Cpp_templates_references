//create a struct
struct struct_name{
    //create members of struct each with a name an a data type 
    member_type1 member_name1;
    member_type2 member_name2;
    member_type3 member_name3;
};

int main(){
    
    struct_name var_name ; //declare a struct var
    var_name.member_name1 = x ; //assign a value for a specific member of a struct
    
    cin>> var_name.member_name1 >> var_name.member_name2 >> var_name.member_name3 ; //enter a value for a specific member of a struct
    cout<< var_name.member_name1 << var_name.member_name2 << var_name.member_name3 ; //print a value for a specific member of a struct

    vector<struct_name>var_name(n); //create a vector of sruct with size n

    sort(var_name.begin(), var_name.end(), [](const struct_name &a, const struct_name &b){ //sort a vector of structs 
        if(a.member_name1!=b.member_name1){return a.sum > b.sum;} //check if two members in the same struct have the same value
        else return a.member_name2 < b.member_name2; //sort according to member_name2 if two members have the same value of member_name1
    });
}
