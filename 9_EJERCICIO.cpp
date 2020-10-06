#include<iostream>

using namespace std;

int validar();
void promedio(int n);
void promedio1(int n);
int main (){
	int n,op;
	float res;
	cout<<"BIENVENIDO A UN PROGRAMA QUE CALCULA UN PROMEDIO Y EL ORDEN DE MERITO DE ESTUDIANTES"<<endl;
	op=validar();
	switch(op){
		case 1 :
		cout<<"\nDigite un valor para la cantidad de alumnos a ingresar"<<endl;
	    cin>>n;
	    system("cls");
	    promedio(n);
		break;
		case 2 :
		cout<<"\nDigite un valor para la cantidad de alumnos a ingresar"<<endl;
	    cin>>n;
	    system("cls");
	    promedio1(n);
		break;	
		default:
			cout<<"***Error, esta opcion no pertenece...";
	}
	
	return 0;
}
int validar(){
	int op1;
	cout<<"\nDIGITE UNA OPCION PARA EL RANGO DE LAS NOTAS: "<<endl;
	cout<<"1:-----RANGO DE LA NOTA 0-20 "<<endl;
	cout<<"2:-----RANGO DE LA NOTA 0-10 "<<endl;
	cin>>op1;
	system("cls");
	return op1;
}
void promedio(int n){
	int numeros[1000],i,pos;
	float suma=0,promedio;
	int k,j,q,aux;
	for(q=0;q<n;q++){
		cout<<"Digite la nota del alumno "<<q+1<<endl;
		cin>>numeros[q];
		while(numeros[q]>20 || numeros[q]<0){
			cout<<"****Error, la nota no corresponde al rango"<<endl;
				cout<<"****Digite una nota de rango 0-20"<<endl;
				cin>>numeros[q];
		}
		system("cls");
	suma=suma+numeros[q];	
	}
	promedio=suma/n;
	system("cls");
	cout<<"El promedio de los "<<n<<" alumnos es : "<<promedio<<endl<<endl;
	for(i=0;i<n;i++){
		pos = i;
		aux = numeros[i];
		while( (pos>0) && (numeros[pos-1] > aux) ){
			numeros[pos]=numeros[pos-1];
			pos--;
		}
	numeros[pos] = aux;	
	}
	cout<<"ORDEN DE MERITO"<<endl<<endl;
	for(i=n-1;i>=0;i--){
		cout<<"Puesto ["<<n-i<<"] nota---"<<numeros[i]<<endl;
	}
	
}
void promedio1(int n){
	int numeros[1000],i,pos;
	float suma=0,promedio;
	int k,j,q,aux;
	for(q=0;q<n;q++){
		cout<<"Digite la nota del alumno "<<q+1<<endl;
		cin>>numeros[q];
		while(numeros[q]>10 || numeros[q]<0){
			cout<<"****Error, la nota no corresponde al rango"<<endl;
				cout<<"****Digite una nota de rango 0-10"<<endl;
				cin>>numeros[q];
		}
		system("cls");
	suma=suma+numeros[q];	
	}
	promedio=suma/n;
	system("cls");
	cout<<"El promedio de los "<<n<<" alumnos es : "<<promedio<<endl<<endl;
	for(i=0;i<n;i++){
		pos = i;
		aux = numeros[i];
		while( (pos>0) && (numeros[pos-1] > aux) ){
			numeros[pos]=numeros[pos-1];
			pos--;
		}
	numeros[pos] = aux;	
	}
	cout<<"ORDEN DE MERITO"<<endl<<endl;
	for(i=n-1;i>=0;i--){
		cout<<"Puesto ["<<n-i<<"] nota---"<<numeros[i]<<endl;
	}
	
}
