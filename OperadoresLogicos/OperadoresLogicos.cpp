#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	double Numero;
	bool ResultadoLogico;
	bool ResultadoLogico2;
	std::cout << "Digite um Numero : ";
	std::cin >> Numero;
	std::cout << "True = 1 e False = 0" << "\n";
	ResultadoLogico = (Numero > 100);
	/*A vari�vel booleana MaiorQue100 ir� receber
	o valor l�gico da compara��o (Numero > 100)
	Numero � maior que cem?*/
	ResultadoLogico = ((Numero > 100) && (Numero != 0));
	std::cout << "O resultado l�gico da express�o ((Numero > 100) && (Numero != 0)) �: "
		<< ResultadoLogico
		<< std::endl;
	ResultadoLogico = ((Numero == 100) || (Numero > 200)) && (Numero < 1000);
	std::cout << "O resultado l�gico da express�o ((Numero > 100) && (Numero != 0)) �: "
		<< ResultadoLogico2
		<< std::endl;
	system("PAUSE");
}