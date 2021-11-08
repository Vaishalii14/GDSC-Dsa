class Solution{
    public:
        void modifyAndRearrangeArr(int arr[], int n)
  {
        for(int i=0;i<n;i++){
            if(arr[i+1]!=0 && arr[i+1]==arr[i]){
                arr[i]=2*arr[i];
                arr[i+1]=0;

            }
        }
            int k=0;
           for(int i=0;i<n;i++){
               if(arr[i]!=0){
                   arr[k]=arr[i];
                   k++;

               }
           }
               for(int i=k;i<n;i++){
                   arr[i]=0;
               }



           }
    	// Complete the function

};


// { Driver Code Starts.
// Driver program to test above
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        ob.modifyAndRearrangeArr(arr, n);
        for(int i=0;i<n;i++)
            cout << arr[i] << " ";
        cout << endl;

    }

	return 0;
}
  // } Driver Code Ends
