pair< data_type1 , data_type2 > pair_name; //declear a pair of data_type1 & data_type2
pair< data_type1 , data_type2 > pair_name (value1 , value2); //declear a pair of data_type1 & data_type2 giving each one a value

cin>> pair_name.first >> pair_name.second //reading first and second value for a pair
cout<< pair_name.first << " " << pair_name.second //printing first and second value of a pair

pair< data_type1 , data_type2 > array_pair_name [array_size]; //delear an array of pairs
sort(array_pair_name, array_pair_name + n); //sorting array of pairs according to first element by default
sort(array_pair_name, array_pair_name + n, [](const pair<data_type1, data_type2>& a, const pair<data_type1, data_type2>& b) { //sorting array of pairs according to second element
    return a.second < b.second;
});


vetor<pair< data_type1 , data_type2 >> vector_pair_name (vector_size); // declare a vector of pairs
sort(vector_pair_name.begin(), vector_pair_name.end()); //sorting vector of pairs according to first element by default
sort(vector_pair_name.begin(), vector_pair_name.end(), [](const pair<data_type1, data_type2>& a, const pair<data_type1, data_type2>& b) { //sorting vector of pairs according to second element
    return a.second < b.second;
});
