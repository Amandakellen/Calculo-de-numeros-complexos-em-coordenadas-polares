

#include <cmath>
#include <iostream>
#include <sstream>
#include <stdlib.h>

#include "Polares.cpp"

using namespace std;


int main() {
    int operacao;
	char op='s';
	float A,B,C;
	double real,imag,real2,imag2,r,i;
	Complexo resultado,*r1,*r2;
 	cout<<"        CALCULADORA DE NUMEROS COMPLEXOS             "<<endl;
 
    
	while(op=='s' || op=='S')
	{
       cout<<"Digite a opcao desejada: "<<endl;
       cout<<"(1)Soma\n(2)subtracao\n(3)Multiplicacao\n(4)Divisao\n(5)Modulo\n(6)Conjugado\n(7)inverso\n(8)Raizes de uma funcao do segundo grau"<<endl;
	   cin>>operacao;
	   while(operacao!=1 && operacao!=2 && operacao!=3 && operacao!=4 && operacao!=5 && operacao!=6 && operacao!=7 && operacao!=8)
	   {
		cout<<"Erro!!!OPCAO DIGITADA NAO E' POSSIVEL!!"<<endl;
		cout<<"Digite  novamente a opcao desejada: "<<endl;operacao!=2 && operacao!=3 && operacao!=4 && operacao!=5 && operacao!=6 && operacao!=7 &&
     	cout<<"(1)Soma\n(2)subtracao\n(3)Multiplicacao\n(4)Divisao\n(5)Modulo\n(6)Conjugado\n(7)inverso\n(8)Raizes de uma funcao do segundo grau"<<endl;
	    cin>>operacao;
	    system("clear||cls");
	   }
	   
	   if(operacao<5 )
	   {
	   	  cout<<"\nDigite o primeiro numero:"<<endl;
	   	  cin >>real;
	   	  cout<<"Digite o segundo numero :"<<endl;
	   	  cin >>imag;
	   	  
 	  
	   	  Complexo v1(real,imag);
	   	  real=v1.real();
	   	  imag=v1.imag();
	   	  cout<<"\nDigite o primeiro numero:"<<endl;
	   	  cin >>real2;
	   	  cout<<"Digite o segundo numero :"<<endl;
	   	  cin >>imag2;
	   	  system("clear||cls");
	   	  
	   	  
	   	 Complexo v2(real2,imag2);
	   	  real2=v2.real();
	   	  imag2=v2.imag();
	   	 	   	  
	   	  if(operacao==1)
		  {
			 resultado=v1+v2;
			 r=resultado.real();
			 i=resultado.imag();
			 cout<<"("<<real<<","<<imag<<") + "<<"("<<real2<<","<<imag2<<")="<<"("<<r<<","<<i<<")"<<endl;
			 
			   
		  }
			if(operacao==2)
		  {
			 resultado=v1-v2;
			 r=resultado.real();
			 i=resultado.imag();
			 cout<<"("<<real<<","<<imag<<") - "<<"("<<real2<<","<<imag2<<")="<<"("<<r<<","<<i<<")"<<endl;
		  }
			if(operacao==3)
		  {
			 resultado=v1*v2;
			 r=resultado.real();
			 i=resultado.imag();
			 cout<<"("<<real<<","<<imag<<") * "<<"("<<real2<<","<<imag2<<")="<<"("<<r<<","<<i<<")"<<endl;
		  }
			if(operacao==4)
		  {
			 resultado=v1/v2;
			 r=resultado.real();
			 i=resultado.imag();
			 cout<<"("<<real<<","<<imag<<") / "<<"("<<real2<<","<<imag2<<")="<<"("<<r<<","<<i<<")"<<endl;
		  }
	   }
		if(operacao<8 && operacao>4)
		{
			cout<<"\nDigite o primeiro numero:"<<endl;
			cin>>real;
			cout<<"Digite o segundo numero :"<<endl;
			cin>>imag;
			system("clear||cls");
			
			Complexo v3(real,imag);
			real=v3.real();
			imag=v3.imag();
			if(operacao==5)
	     	{
			   r=v3.modulo();
			   cout<<" Modulo de ("<<real<<","<<imag<<") = "<<r<<endl; ;
			   
			   
			   
		    }
			if(operacao==6)
		   {
		 	   resultado=v3.conjugado();
	           r=resultado.real();
			   i=resultado.imag();
			   cout<<" O conjugado  de ("<<real<<","<<imag<<") ="<<"("<<r<<","<<i<<")"<<endl;;
			 
			   
		   }
		   if(operacao==7)
		   {
		   	  resultado=v3.inverso();
		   	  r=resultado.real();
              i=resultado.imag();
              cout<<" O inverso  de ("<<real<<","<<imag<<") ="<<"("<<r<<","<<i<<")"<<endl;;
		   }
		}
				if(operacao==8)
		  {
			 cout<<"Digite os coeficientes como exemplificado abaixo:\n ax^2+bx+c=0 "<<endl;
			 cout<<"Coeficiente a: "<<endl;
			 cin>>A;
			 while(A==0)
			 {
			 	cout<<"ERRO!!COEFICIENTE A DEVE SER DIFERENTE DE ZERO!!"<<endl;
			 	cout<<"Digite os coeficientes como exemplificado abaixo:\n ax^2+bx+c=0 "<<endl;
			    cout<<"Coeficiente a: "<<endl;
			    cin>>A;
			     system("clear||cls");
			 }
			 cout<<"Coeficiente b: "<<endl;
			 cin>>B;
			 cout<<"Coeficiente c: "<<endl;
			 cin>>C;
			 system("clear||cls");
			 cout<<"As raizes da funcao:"<<A<<"x^2 + ("<<B<<")x +("<<C<<") sao"<<endl;
			 CalcularRaizes(A,B,C,r1,r2);
			 
		  }
				
		 cout<<"\n Deseja Realizar uma nova operacao?(s/n)"<<endl;
		 cin>>op;
		 system("clear||cls");
		 
		 
	
	}

    return 0;
}
