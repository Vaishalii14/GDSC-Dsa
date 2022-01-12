class Solution {
  public:
  long long int Paths(int m,int n){
      if(m==0 and n==0){
            return 1;
        }
        if(m==0){
           return Paths(m,n-1);
        }
        if(n==0){
           return Paths(m-1,n);
        }
        long long int x=Paths(m,n-1);
        long long int y=Paths(m-1,n);
        return x+y;
    }

    long long int numberOfPaths(int m, int n){
        // code here
        if(m==0 or n==0){
            return 0;
        }
        long long int path=Paths(m-1,n-1);
        return path;
    }
};
