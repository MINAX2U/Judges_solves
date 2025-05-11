#include <bits/stdc++.h>
using namespace std;
int main() {
	string s, c;
	while(getline(cin, s)) {
		stack <string> st;
		vector <string> ans;
		stringstream ss; ss << s; 
		while(ss >> c) {
			if(c == ")") {
				while(st.top() != "(") {
					ans.push_back(st.top());
					st.pop();
				}
				st.pop();
			} else if(c == "(") {
				st.push("(");
			} else if(c == "*" || c == "/") {
				while(!st.empty() && (st.top() == "*" || st.top() == "/")) {
					ans.push_back(st.top());
					st.pop();
				} 
				st.push(c);
			} else if(c == "+" || c == "-") {
				while(!st.empty() && (st.top() == "*" || st.top() == "/" || st.top() == "+" || st.top() == "-")) {
					ans.push_back(st.top());
					st.pop();
				} 
				st.push(c);
			} else {
				ans.push_back(c);
			}
		}
		
		while(!st.empty()) {
			ans.push_back(st.top());
			st.pop();
		}
		for(int i = 0;i < ans.size();i++) {
			cout << ans[i] << " \n"[i == ans.size()-1];
		}
	}
}