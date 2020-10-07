#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	cout<<"Ejercicio 2"<<endl;
    int n1,n2,i,j,k,z,l,resta;
    cout<<"Digite la cantidad de elementos del arreglo A ";
    cin>>n1;
    int A[n1];
    for(i=0;i<n1;i++){
    	cout<<"Digite el elemento "<<i+1<<endl;
    	cin>>A[i];
	}
    cout<<"Digite el lnumeros de elementos del arreglo B ";
    cin>>n2;
    int B[n2];
    for(j=0;j<n2;j++){
    	cout<<"Digite el elemento "<<j+1<<endl;
    	cin>>B[j];
	}
	l=0;
	for(k=0;k<n2;k++){
		resta=A[k]-B[k];
		if(resta==0){
			l++;
			cout<<"Los numeros son iguales"<<endl;
			for(z=0;z<(n2);z++){
				A[k]=A[k+1];
			}
		}
	}
	cout<<"el valor de l "<<l;
	n2=n2-(l+1);
	for(i=0;i<n2;i++){
		cout<<"El nuevo arreglo es: "<<endl;
		cout<<"["<<A[i]<<"]"<<endl;	
	}
    getch();
    return 0;

}
