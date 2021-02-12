#include <bits/stdc++.h>

using namespace std;

int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	// 10 ^ n = total number of possible combinations of n digits
  	// 10 ^ (n / 2) = total number palindrome numbers in 10 ^ n combinations
  	// probability = desired outcomes / total possible outcomes
  	// probability = total number of palindrome numbers in 10 ^ n combinations / total number of possible combinations of n digits
  	// probability = (10 (n ^ 2)) / (10 ^ n)
  	// probability = 1 / (10 ^ (n / 2)) -> this is the answer
  	cout << "1 1";
  	for (int i = 0; i < n / 2; i++) {
  		cout << "0";
  	}
  	cout << '\n';
  }
 	return 0;
}      
