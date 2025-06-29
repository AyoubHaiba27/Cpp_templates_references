sort(arr,arr+n);
int left=0 , right=n-1 , mid , target=x;
bool found=false;
while(left<=right){
    mid=(left+right)/2;
    if(arr[mid]==target){
        found=true;
        break;
    }
    else if(arr[mid]>target){
        right=mid-1;
    }
    else if(arr[mid]<target){
        left=mid+1;
    }
}
