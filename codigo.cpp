#include <bits/stdc++.h>
using namespace std;

int main () {

    int N, Qualb, IrparaB, contador=0, teste;
    char c;
    int resp[1000];
    string conv;

    cout<<"Qual numero voce quer converter?"<<endl;
    cin>>N;

    int sep=N;

    cout<<"Qual sua base?"<<endl;
    cin>>Qualb;

    cout<<"Deseja ir para qual base?"<<endl;
    cin>>IrparaB;
    int cont=0;

    if(Qualb==10){
        while(N!=0){

            cout<<N<<" / "<<IrparaB<<" = "<<N/IrparaB<<", resto "<< N%IrparaB<<endl;
            resp[cont]=N%IrparaB;
            N=N/IrparaB;
            cont++;
        }

        for(int i=cont-1; i>=0; i--){

            contador = 0;
            if(IrparaB>10){

                if(resp[i]>9){

                    if(resp[i]<IrparaB)
                    resp[i]+=55;
                    teste=resp[i];
                    c=teste;
                    cout<<c;
                    contador=1;
                    }
                }

            if(contador==0) cout<<resp[i];

        }

    }

    else if(IrparaB==10){

        while(sep!=0){
            resp[cont]=sep%10;
            sep=sep/10;
            cont++;

        }

        for(int i=cont-1; i>=0; i--){
            contador+=resp[i]*pow(Qualb, i);
            cout<<resp[i]<<"*"<<Qualb<<"^"<<i;

            if(i!=0)
            cout<<" + ";

        }
        cout<<" = "<<contador;
    }



}
