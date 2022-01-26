class MinStack {
    vector<pair<int,int>>m;


public:
    MinStack() {

    }

    void push(int val) {
        if(m.empty()){
        m.push_back({val,val});
        }
       else{
        m.push_back({val,min(m.back().second,val)});
       }
    }


    void pop() {
        m.pop_back();

    }

    int top() {
        return m.back().first;
    }

    int getMin() {
        return m.back().second;
    }
};
