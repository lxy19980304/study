#include <stdio.h>

int main(){
	double x;
	int n;
	scanf("%lf %d",&x,&n);
	double res=0;
	double t1=1;
	int t2=1;
	for(int i=1;i<=n;i++){
		t1=1;
		t2=1;
		for(int j=(2*i-1);j>=1;j--){
			t1*=x;
		}
		for(int j=(2*i-1);j>=1;j--){
			t2*=j;
		}
		if(i%2==1){
			res+=t1/t2;
		}else{
			res-=t1/t2;
		}
	}
	printf("%.4lf",res);
	return 0;
}
