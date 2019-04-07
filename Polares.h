// Copyright 2018 Universidade Federal de Minas Gerais (UFMG)

#ifndef TRUNK_COMPLEXO_EUCLIDIANO_SRC_COMPLEXO_H_
#define TRUNK_COMPLEXO_EUCLIDIANO_SRC_COMPLEXO_H_

// Representa um número complexo.
class Complexo {
 public:
  // Cria o número complexo na forma polar(0,0)
  Complexo();

  // Cria o número complexo na forma polar(a,0).
  Complexo(double a);

  //Cria o número complexo na forma polar(a,b)
  Complexo(double a,double b);

  // Retorna a parte real do número complexo corrente.
  double real();

  // Retorna a parte imaginária do número complexo corrente.
  double imag();

  // Testa se o número complexo corrente é igual a 'x'.
  bool operator==(Complexo x);

  // Atribui 'x' ao número complexo corrente.
  void operator=(Complexo x);

  // Retorna o módulo do número complexo corrente.
  double modulo();

  // Retorna o conjugado do número complexo corrente.
  Complexo conjugado();

  // Retorna o simétrico do número complexo corrente.
  Complexo operator-();

  // Retorna o inverso multiplicativo do número complexo corrente.
  Complexo inverso();

  // Soma o número complexo corrente com 'y' e retorna o resultado.
  Complexo operator+(Complexo y);

  // Subtrai o número complexo corrente por 'y' e retorna o resultado.
  Complexo operator-(Complexo y);

  // Multiplica o número complexo corrente com 'y' e retorna o resultado.
  Complexo operator*(Complexo y);

  // Divide o número complexo corrente por 'y' e retorna o resultado.
  Complexo operator/(Complexo y);
  

  
   private:
  // Parte real;
  double modulo_;

  // Parte imaginária.
  double angulo_;
};

#endif  // TRUNK_COMPLEXO_EUCLIDIANO_SRC_COMPLEXO_H_
