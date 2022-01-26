void spanStock(int prices[],int n,int span[]){
    stack<int>s;
    s.push(0);
    span[0]=1;
    for(int i=1;i<n;i++){
            while(!s.empty() and prices[i]>prices[s.top()]){
                s.pop();
            }
            if(!s.empty()){

            span[i]=i-s.top();

            }
            else{
                span[i]=i+1;
            }
            s.push(i);

    }

}
