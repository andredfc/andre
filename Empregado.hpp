#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  protected:

  double salarioHora;
  double horasTrabalhadas;
  std::string nome;

  double pagamentoMes(double horasTrab) {

    double t = horasTrab;
      if (horasTrab > 8) {
        double x = horasTrab - 8;
        t += x / 2;
      }
	    return t * salarioHora;
    // Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    }

};
#endif