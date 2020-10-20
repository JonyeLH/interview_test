#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0, j, k; i<s.size(); ++i) {
		if (s[i] == ' ') {
			cout << ' ';
			for (j = i; j<s.size() && s[j] == ' '; ++j) {
				i = j - 1;
			}
		}
		else {
			string temp;
			for (k = i; k<s.size() && s[k] != ' '; ++k) {
				temp += s[k];
			}
			i = k - 1;
			reverse(temp.begin(), temp.end());
			cout << temp;
			temp.clear();
		}
	}
	return 0;
}

/*
#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
/*
char ch[100];
while(gets(ch)){
if(strlen(ch)==0)    break;
for(int i=strlen(ch)-1;i>=0;i--){
printf("%c",ch[i]);
}
printf("\n");
}
return 0;
*/
/*
string s;
getline(cin,s);

for(int i=s.size()-1;i>=0;--i){
if(s[i]==' '){
while(i>=0 && s[i--]==' '){
cout<<' ';
}
if(s[i]==' '){
break;
cout<< s[i];
}
}
}


string s;
getline(cin, s);
int j, k;
for (int i = 0; i<s.size(); ++i) {
	if (s[i] == ' ') {
		cout << ' ';
		for (j = i; j<s.size() && s[j] == ' '; ++j) {
			i = j - 1;
		}
	}

	else {
		string temp;
		for (k = i; k<s.size() && s[k] != ' '; ++k) {
			temp += s[k];
		}
		i = k - 1;
		reverse(temp.begin(), temp.end());
		cout << temp;
		temp.clear();
	}
}

//cout<<"cba fed gfe";
return 0;

}
*/