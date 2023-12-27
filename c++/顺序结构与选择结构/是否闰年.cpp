#include <bits/stdc++.h>

using namespace std;
 
int main() {
	int year;
	cin >> year;
	if(year%4==0&&year%100!=0){
		cout << "yes";
		# cout << "普通闰年"; 
	}else if(year%400==0){
		cout << "yes(世纪闰年)";
		# cout << "世纪闰年"; 
	}else{
		cout << "no";
	}
	return 0;
} 
