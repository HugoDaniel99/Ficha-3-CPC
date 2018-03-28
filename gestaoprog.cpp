
#include "Calunoprog.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	CAlunoProg aluno2;
	int numero_aluno, numeroMT;
	string nome;
	double trabalhoInt, trabalhoFin, notaMT, EXAME;
	
		cout<<"Introduza o nome: "<<endl;
		cin>>nome;
		aluno2.setNomeAluno(nome);
	
	do{
		cout<<"Introduza o numero de aluno:"<<endl;
		cin>>numero_aluno;
		
		if(numero_aluno<0 || numero_aluno>1000 )
		cout<<"Invalido"<<endl;
		else
		aluno2.setNumAluno(numero_aluno);
	}while (numero_aluno<0 || numero_aluno>1000);
	
	do{
		cout<<"Introduza a nota do trabalho intercalar:"<<endl;
		cin>>trabalhoInt;
		
		if(trabalhoInt<0.0 || trabalhoInt>20.0)
		cout<<"Invalido"<<endl;
		else
		aluno2.setTrabInt(trabalhoInt);
	}while (trabalhoInt<0.0 || trabalhoInt>20.0);
	
	do{
		cout<<"Introduza a nota do trabalho final:"<<endl;
		cin>>trabalhoFin;
		
		if(trabalhoFin<0.0 || trabalhoFin>20.0)
		cout<<"Invalido"<<endl;
		else
		aluno2.setTrabFin(trabalhoFin);
	}while (trabalhoFin<0.0 || trabalhoFin>20.0);
	
	do{
		cout<<"Introduza a nota do exame:"<<endl;
		cin>>EXAME;
		
		if(EXAME<0.0 || EXAME>20.0)
		cout<<"Invalido"<<endl;
		else
		aluno2.setExame(EXAME);
	}while (EXAME<0.0 || EXAME>20.0);
	
	for(int k=0;k<2;k++){
		do{
		cout<<"Introduza o numero de um miniteste (1 ou 2) e a respetiva nota:"<<endl;
		cin>>numeroMT>>notaMT;
		
		if(numeroMT<=0 || numeroMT>=3)
		cout<<"Numero invalido"<<endl;
		if(notaMT<0.0 || notaMT>20.0)
		cout<<"Nota invalida"<<endl;
		else
		aluno2.setNotaMiniTeste(numeroMT,notaMT);
		}while((numeroMT<=0 || numeroMT>=3)||(notaMT<0.0 || notaMT>20.0));
	}
	
	
	
	aluno2.calculaNotaFinal();
	aluno2.printFichaAluno();
	
	return 0;
}
