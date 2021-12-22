long long int factorial(int N){
    if(N==0|| N==1){
        return 1;
    }
    else{
       long long int ans=N*factorial(N-1);
       return ans;
    }
       //code here
}
