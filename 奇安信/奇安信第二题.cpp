#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define max 10000

//// Ã»¿¼ÂÇ´óÊý
//int main() {
//	int N, i;
//	cin >> N;
//	long long sum = 1;
//	//if (1 <= N && N <= 200) {
//	//	for (i = 1; i <= N; i++) {
//	//		sum = i*sum;
//	//	}
//	//}
//	for (i = 1; i <= N; i++) {
//		sum = i*sum;
//	}
//
//	if (N>200) {
//		cout << "Error" << endl;
//	}
//	cout << sum << endl;
//
//	return 0;
//}




int main() {
	int n, i, j;
	while (cin >> n) {
		int a[20001];
		int flag = 0;
		int count = 1;
		int sum = 0;
		a[0] = 1;
		for (i = 2; i <= n; i++) {
			for (j = 1; j <= count; j++) {
				sum = a[j - 1] * i + flag;
				a[j - 1] = sum % 10;
				flag = sum / 10;
			}
			while (flag)
			{
				count++;
				a[count - 1] = flag % 10;
				flag /= 10;
			}
		}
		for (int i = count - 1; i >= 0; i--) {
			cout << a[i];
		}
		cout << endl;
	}
	return 0;
	/*
	int N,i;
	cin>>N;
	long long sum=1;
	if(1<=N<=200){
	for(i=1;i<=N;i++){
	sum=i*sum;
	}
	}
	else{
	cout<<"Error"<<endl;
	}
	cout<<sum<<endl;

	return 0;

	int a[max]={1};
	int n,m=1,k=0;
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++){
	for(j=0;j<m;j++){
	a[j]=a[j]*i+k;
	k=a[j]/10000;
	a[j]=a[j]%10000;
	}
	if(k){
	a[j++]=k;
	m++;
	k=0;
	}
	}

	for(i=m-2;i>=0;i--){
	cout<<a[i]<<endl;
	}
	return 0;
	*/
}
