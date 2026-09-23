#include <bits/stdc++.h>
using namespace std;

void stockSpan(vector<int> stock, vector<int>& span) {
    stack<int> st;

    st.push(0);
    span[0] = 1;

    for (int i = 1; i < stock.size(); i++) {
        int curr = stock[i];

        while (!st.empty() && curr >= stock[st.top()]) {
            st.pop();
        }

        // Either stack is empty or top has a greater price
        if (st.empty()) {
            span[i] = i + 1;
        } else {
            int prevHigh = st.top();
            span[i] = i - prevHigh;
        }

        st.push(i);
    }

    for (int i = 0; i < span.size(); i++) {
        cout << span[i] << " ";
    }
}

int main() {
    vector<int> stock = {100, 80, 60, 70, 60, 85, 100};
    vector<int> span(stock.size(), 0);
    stockSpan(stock, span);
    return 0;
}