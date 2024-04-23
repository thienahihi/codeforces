#include<stdio.h>
int main(){
	long long l=0;
	long long d=0;
	long long n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
    if(n%a==0||n==a){
		l=n/a;
	}else{
		l=(n/a)+1;
	}
    if(m%a==0||m==a){
		d=m/a;
	}else{
		d=(m/a)+1;
	}
	printf("%lld",l*d);
	return 0;
}