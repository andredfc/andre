#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  private:

	  int projetos;

  public: 

    Engenheiro (std::string _nome, double _salarioHora, double _horasTrabalhadas){
      nome = _nome;
      salarioHora = _salarioHora;
      horasTrabalhadas = _horasTrabalhadas;
      // Construtor: Recebe os valores de nome, salário por hora, e horas trabalhadas diárias
    }
    void setProjetos(int _projetos){
      projetos = _projetos;
    }

    void imprimeDados(){
      std::cout << "Nome: " << this->nome << std::endl;
      std::cout << "Salario Mes: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
      std::cout << "Projetos: " << this->projetos << std::endl;
      std::cout << std::endl;
    }

	
};