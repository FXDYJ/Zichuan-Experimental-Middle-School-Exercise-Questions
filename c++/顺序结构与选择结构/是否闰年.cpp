#include <bits/stdc++.h>

using namespace std;
 
int main() {
	int year;
	cin >> year;
	if(year%4==0&&year%100!=0){
		cout << "yes";
		# cout << "��ͨ����"; 
	}else if(year%400==0){
		cout << "yes(��������)";
		# cout << "��������"; 
	}else{
		cout << "no";
	}
	return 0;
} 
