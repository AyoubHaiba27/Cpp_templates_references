void prime(int x){
    bool pass=true;
    if(x==1 || x%2==0)pass=false;
    if(x==2)pass=true;
    for(int i=3;i<=sqrt(x);i++){
        if(x%i==0){
            pass=false;
        }
    }

    if(pass)return true;
    else return false;
}
