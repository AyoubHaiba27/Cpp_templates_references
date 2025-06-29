//getting the area of a triangle with 3 sides only a,b,c
int s=(a+b+c)/2;
int area=sqrt(s*(s-a)*(s-b)*(s-c));

////////////////////

//sum from 1 to n
int sum=(n*(n+1))/2;

//sum of evens from 1 to n
int temp=n/2;
int sum_evens=(temp*(temp+1));

//sum of odds from 1 to n
int k=(n+1)/2;
int sum_odds=k*k;

///////////////////
//distance between 2 points knowing the cartesian points
int x1,y1,x2,y2;
d=sqrt(pow(x2-x1 , 2) + pow(y2-y1 , 2));

//////////////////
//diagonal of a square knowing one side
int d=s*sqrt(2);

/////////////////
//mod operation properities
(a+b)%c =  ((a%c)+(b%c))%c
(a*b)%c =  ((a%c)*(b%c))%c

////////////////
//finding if n is a power of 2 or not 
bool is_power_of_two(int n){
    return(n>0) && (n&(n-1))==0;
}


///////////////
//finding GCD
int gcd(int a,int b) {
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

// finding LCM
lcm=(a*b)/gcd(a,b);

///////////////
//number of digits in factorial of n :

int number_of_digits_in_factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    
    double log_sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        log_sum += log10(i);
    }
    
    return static_cast<int>(floor(log_sum)) + 1;
}

////////////////
