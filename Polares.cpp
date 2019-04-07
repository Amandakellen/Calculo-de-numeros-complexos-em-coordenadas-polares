// Copyright 2010 Universidade Federal de Minas Gerais (UFMG)

#include "Polares.h"
#include <cmath>
#include <iostream>//

using std::cout;
using std::cin;

Complexo::Complexo()
{
	modulo_=0.0;
	angulo_=0.0;
}

Complexo::Complexo(double a)
{
	
	modulo_=a;
	angulo_=atan(0);
	
}

Complexo::Complexo(double a,double b)
{     
	modulo_=sqrt(pow(a,2)+pow(b,2));
	angulo_=(atan(b/a));
}

double Complexo::real() 
{
	double real_;
	real_=modulo_*cos(angulo_);
    return real_;
}

double Complexo::imag() 
{
	double imag_;
	imag_=modulo_*sin(angulo_);
  return imag_;
}

bool Complexo::operator==(Complexo x) 
{
   if(modulo_== x.modulo_ && angulo_==x.angulo_)
  {
  	return true;
  }
  else{
	  return false;
  }
  
}

void Complexo::operator=(Complexo x) 
{
	modulo_=x.modulo_;
	angulo_=x.angulo_;
}

double Complexo::modulo()
{
	return modulo_;
}

Complexo Complexo::conjugado()
{
    Complexo conjugado; 
	conjugado.angulo_=-angulo_;
	conjugado.modulo_=modulo_;
		
	return conjugado;
}

Complexo Complexo::operator-() 
{
	Complexo simetrico;
    double r,i;
    r=-modulo_*cos(angulo_);
    i=-modulo_*sin(angulo_);
    
    simetrico=Complexo((sqrt(pow(r,2)+pow(i,2))),(atan(i/r)));
	
	return simetrico;
}

Complexo Complexo::inverso()
{
  Complexo i;
  
  if(modulo_ !=0.0 && angulo_!=0.0)
  {
  	i.modulo_=1/modulo_;
	i.angulo_=-angulo_;	
  }
  return i;
}

Complexo Complexo::operator+(Complexo y) 
{
  Complexo s;
  
  double r,i,r1,i1;
  r1=modulo_*cos(angulo_);
  i1=modulo_*sin(angulo_);
  
  r=r1 + y.real();
  i=i1 +y.imag();
 
  s=Complexo(r,i);
  return s;
}

Complexo Complexo::operator-(Complexo y) {
  Complexo c;
  double r,i,r1,i1;
  r1=modulo_*cos(angulo_);
  i1=modulo_*sin(angulo_);
  r=r1 - y.real();
  i=i1 -y.imag();
 
  c=Complexo(r,i);
  return c;
}

Complexo Complexo::operator*(Complexo y) {
  Complexo p;
  double r,i;
  r=(y.modulo()*modulo_)*cos(angulo_+y.angulo_);
  i=(y.modulo()*modulo_)*sin(angulo_+y.angulo_);
  
  p=Complexo(r,i);
  
  return p;
}

Complexo Complexo::operator/(Complexo y) {
  Complexo c;
   double r,i;
  r=(modulo_/y.modulo())*cos(angulo_-y.angulo_);
  i=(modulo_/y.modulo())*sin(angulo_-y.angulo_);
  
  c=Complexo(r,i);
  return c;
}


void CalcularRaizes(float a, float b, float c,Complexo * r1, Complexo* r2)
{
    float delta,x1,x2,raiz;
	delta=pow(b,2)-(4*a*c);
	double real,imag;
	
	if(delta>0.0)
	{
		x1=((-b)+(sqrt(delta)))/(2*a);
		x2=((-b)-(sqrt(delta)))/(2*a);
		cout<<" x1= "<<x1<<" \n x2="<<x2<<"\n";
		
	}
	if(delta==0)
	{
		x1=(-b)/(2*a);
		x2=-x1;
		cout<<" x1= "<<x1<<"\n x2="<<x2<<"\n";
	}
	if(delta<0)
	{
		raiz=sqrt(delta*(-1));
		
		real=(-b)/(2*a);
		imag=(raiz/(2*a));
		r1= new Complexo(real,imag);
	    
		r2= new Complexo(real,imag);
		
		real=r1->real();
		imag=r1->imag();
		cout<<"x1 = ("<<real<<","<<imag<<")\n";
		real=r2->real();
		imag=r2->imag();
		
		cout<<"x2 = ("<<real<<","<<imag<<")\n";
		
	}
}