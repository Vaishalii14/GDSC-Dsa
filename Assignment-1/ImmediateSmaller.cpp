class Solution{
    public:
    // User function to complete
    // arr[]: input array
    // n: size of array
    // k: find element smaller and closest to it.
    int immediateSmaller(int arr[], int n, int x)
    {
        // your code here
        int min=10000;
        int k=-1;
        for(int i=0;i<n;i++){
            if(arr[i]<x){
                if((x-arr[i])<min){
                    min=x-arr[i];
                    k=arr[i];

                }

            }


            }
        return k;

    }
};
