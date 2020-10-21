#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  private:

	double quotaMensalVendas;
	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}

  public:	  
	Vendedor (std::string _nome, double _salarioHora, double _horasTrabalhadas){
      nome = _nome;
      salarioHora = _salarioHora;
      horasTrabalhadas = _horasTrabalhadas;
      // Construtor: Recebe os valores de nome, salário por hora, e horas trabalhadas diárias
    }

	void setQuotaMensalVendas(double _quotaMensal){
	  quotaMensalVendas = _quotaMensal;
	}

	void imprimeDados(){
      std::cout << "Nome: " << this->nome << std::endl;
      std::cout << "Salario Mes: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
  	  std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;  
      std::cout << std::endl;
    }
	
};
