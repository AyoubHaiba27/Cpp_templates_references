void R_n_to_1(int n){
    if(n!=1){
        cout<< n << " ";
    }
    else{
        cout<< 1 ;
    }
 
    if(n==1)return;
 
    R_n_to_1(n-1);
}
