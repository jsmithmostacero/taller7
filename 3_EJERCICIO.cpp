#include<iostream>

using namespace std;
void cuenta(int vec[],int t, int n);
void Elimina(int vec[],int t, int n);
int main(){
    int n,p;
    cout<<"\n\n          ===================********************************************************===================";
    cout<<"\n\n                  BIENVENIDO A UN PROGRAMA QUE CALCULA LA CANTIDAD DE REPETICIONES DE UN ELEMENTO ";
    cout<<"\n\n          ===================********************************************************===================";
    cout<<"\n\n\n\t\t\t    DIGITE UN VALOR PARA EL TAMANIO DEL ARREGLO O VECTOR";
    cout<<"\n\n\n\t\t\t                         DIGITAR:";
    cin>>p;
    int vec[p];
    cout<<"\n\tIngrese los valores\n\n\t";
    for(int i=0;i<p;i++){
    	cout<<"DIGITE EL ELEMENTO DE POSICION N* "<<i+1<<" :";
        cin>>vec[i];
        cout<<"\t";
    }
    system("cls");
    cout<<"\n         LOS ELEMENTOS EGRESADOS SON: " ; 
    for(int i=0;i<p;i++){
        cout<<" "<<vec[i]<<" ";
    }
    cout<<"\n\n";
    for(int i=0;i<p;i++){
    n=vec[i];
    if(n!=0){
       cuenta(vec,p,n);
       Elimina(vec,p,n);
   }
   }
   return 0;
}
void cuenta(int vec[],int t, int n){
    int x=0;
    int l;
    for(int i=0; i<t;i++){
    if(n==vec[i]){
        x++;
        l=vec[i];
    }
    }   
    cout<<"         *El numero "<<l<<" Se repite "<<x<<" vece/s* \n\n";
}

void Elimina(int vec[],int t, int n){
    for(int i=0;i<t;i++){
    if(n==vec[i]){
        vec[i]=0;
    }
    }
}

