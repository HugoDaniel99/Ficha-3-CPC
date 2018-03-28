#ifndef CALUNOPROG_H
#define CALUNOPROG_H
#include<iostream>
#include<string>
using namespace std;

class CAlunoProg{
	
	public:
		CAlunoProg();
		CAlunoProg(int, string);
		CAlunoProg(int,string,double,double,double,double,double);
		~CAlunoProg();
		void setNumAluno(int);
		void setNomeAluno(string);
		void setTrabInt(double);
		void setTrabFin(double);
		void setExame(double);
		void setNotaMiniTeste(int, double);
		void printFichaAluno();
		int getNumAluno();
		string getNomeAluno();
		double getTrabInt();
		double getTrabFin();
		double getExame();
		double getNotaMiniTeste(int);
		double getNotaFinal();
		double calculaNotaFinal();

	private:
		int numAluno;
		string nomeAluno;
		double trabInt, trabFin, notasMiniTestes[2], exame;
};

#endif
