#include"Calunoprog.h"

CAlunoProg::CAlunoProg(){
	
}

CAlunoProg::CAlunoProg(int numero, string nome){
	
}

CAlunoProg::CAlunoProg(int numero,string nome,double trabInt,double trabFin,double miniteste1,double miniteste2,double exame){
	
}

CAlunoProg::~CAlunoProg(){}

void CAlunoProg::setNomeAluno(string nome)
{
	nomeAluno=nome;
}

void CAlunoProg::setNumAluno(int numero)
{
	numAluno=numero;
}

void CAlunoProg::setTrabInt(double notaTrabInt)
{
	trabInt=notaTrabInt;
}

void CAlunoProg::setTrabFin(double notaTrabFin)
{
	trabFin=notaTrabFin;
}

void CAlunoProg::setExame(double notaexame)
{
	exame=notaexame;
}

void CAlunoProg::setNotaMiniTeste(int numMiniTeste, double nota)
{
	notasMiniTestes[numMiniTeste-1]=nota;
}

int CAlunoProg::getNumAluno()
{
	return numAluno;
}
string CAlunoProg::getNomeAluno()
{
	return nomeAluno;
}

double CAlunoProg::getTrabInt()
{
	return trabInt;
}

double CAlunoProg::getTrabFin()
{
	return trabFin;
}

double CAlunoProg::getExame()
{
	return exame;
}

double CAlunoProg::getNotaMiniTeste(int numMiniTeste)
{
	return notasMiniTestes[numMiniTeste-1];
}

double CAlunoProg::getNotaFinal()
{
	return calculaNotaFinal();
}

double CAlunoProg::calculaNotaFinal()
{  
	double notafinal=0;
	double notaminitestes=0;
	notaminitestes=0.3*((notasMiniTestes[0]+notasMiniTestes[1])/2);
	notafinal=(0.15*trabInt)+(0.25*trabFin)+(0.3*exame)+notaminitestes;
	
	if(notafinal<9.5){
		cout<<"Reprovado ---"<<endl;
	}
	else{
		cout<<"Aprovado---"<<endl;
	}
	return notafinal;
	
}

void CAlunoProg::printFichaAluno()
{
	cout<<"-----"<<endl;
	cout<<"Ficha do Aluno\n"<<endl;
	cout<<"Numero:"<<numAluno<<endl;
	cout<<"Nome:"<<nomeAluno<<endl;
	cout<<"Resultado:"<<calculaNotaFinal()<<endl;	
}


