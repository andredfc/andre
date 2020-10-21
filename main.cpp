#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {
/*
Declaração do tipo de empregado - Nome, Salário por hora, Horas trabalhadas
*/
  Engenheiro eng1("Joao Snow",35,9.5);
  eng1.setProjetos(3);
  eng1.imprimeDados();

  Engenheiro eng2("Daniela Targaryen",30,8);
  eng2.setProjetos(1);
  eng2.imprimeDados();

  Engenheiro eng3("Bruno Stark",30,8);
  eng3.setProjetos(2);
  eng3.imprimeDados();


  Vendedor vend1("Tonho Lannister",20,6);
  vend1.setQuotaMensalVendas(5000);
  vend1.imprimeDados();

  Vendedor vend2("Jose Mormont",25,8);
  vend2.setQuotaMensalVendas(3000);
  vend2.imprimeDados();
	
  Vendedor vend3("Sonia Stark",30,8);
  vend3.setQuotaMensalVendas(4000);
  vend3.imprimeDados();

  return 0;	
}