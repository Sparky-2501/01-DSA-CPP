#include <bits/stdc++.h>
using namespace std;

void print(vector<int> vec){
    for(int i=0 ; i <vec.size() ; i++){
        cout << vec[i] << " ";
    }cout<<"\n";
}

int maxAreaHistogram(vector<int> height){
    vector<int> nsl(height.size());
    vector<int> nsr(height.size());
    stack<int> st;

    //nsl
    nsl[0] = -1;
    st.push(0);
    for(int i=1 ; i<height.size() ; i++){  
        //we will push index not the value in a stack cause we are finding diff and storing it in the vector
        int curr = height[i];
        while(!st.empty() && curr <= height[st.top()]){
            st.pop();
        }
        if(st.empty()){
            nsl[i] = -1;
        }else{
            nsl[i] = st.top();
        }
        st.push(i);
    }
    print(nsl);

    //nsr
    int n = height.size();
    st.push(n-1);
    nsr[n-1]= n;
    for(int i= n-2;i>=0; i-- ){
        int curr = height[i];
        while(!st.empty() && curr <= height[st.top()]){
            st.pop();
        }
        if(st.empty()){
            nsr[i] =n;
        }else{
            nsr[i] = st.top();
        }
        st.push(i);
    }
    print(nsr);
    
    int maxArea = 0;
    for(int i=0 ; i< height.size(); i++){
        int area = height[i] * (nsr[i] - nsl[i] -1);
        maxArea = max( maxArea, area);  
    }
    
    return maxArea;
}

int main() {
    vector<int> height ={2,1,5,6,2,3};
    cout << maxAreaHistogram(height);
    
    return 0;
}