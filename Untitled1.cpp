#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct {
	
	char nome[50];
	char sobrenome[50];
	char email[50];
	int sexo;
	int idade;
	float peso;
	float altura;
	float imc, nota1, nota2, media;

	
	
}cadastro;
int continuar;
int opcao, opcao2;
cadastro usuario1;

void cadastrar();
void retornar();
void menu();
void exibir();
void imc ();
void media();
void refaz();


int main (){
    setlocale(LC_ALL,"Portuguese");
  
  
  printf("\n\t\t\tDigite 1 Para cadastrar um NOVO usuario.\t\t\n");
  printf("\n\t\t\tDigite 2 para usuario JÀ cadastrado\t\t\n");
  scanf("\t\t\t%d",&opcao2);
  
  refaz();
  return 0;
  
 
}
void cadastrar(){
		printf("\t************* Cadastro de novo usuario \t*************\n");
 	 	printf("Primeiro Nome: ");
      	scanf("%s",&usuario1.nome);
      	fflush(stdin);
      
	  printf("Sobrenome: ");
      scanf("%s",&usuario1.sobrenome);
      fflush(stdin);
      
	  printf("Email: ");
      scanf("%s",&usuario1.email);
      fflush(stdin);
      
	  printf("Idade: ");
      scanf("%d",&usuario1.idade);
      fflush(stdin);
      
      printf("Altura: ");
      scanf("%f",&usuario1.altura);
      fflush(stdin);
      
      printf("Peso: ");
      scanf("%f",&usuario1.peso);
      fflush(stdin);
      
      printf("Sexo ");
      printf("Digite:\n1 para Masculino\n2 para Feminino \n");
      scanf("%d",&usuario1.sexo);
      fflush(stdin);
      
	  if(usuario1.idade < 18){
       		printf("\n\tUsuario menor de 18 ANOS\n");
	   		
	   } 
	   system("cls");
	   void exibir();
		 if(usuario1.sexo = 1){
	   			printf("Sexo: Masculino\n");
			   }  else{
			   	printf("Sexo: Feminino\n");
			   }
}

void retornar(){
	 if (opcao != 0) {
            printf("\n\n Deseja retornar ao menu ?\n\n Digite 1 para confirmar");
            scanf(" %d", &continuar);
            system("cls");
            void menu();
		}
	 while (continuar == '1'){
	 	printf("Voltando ao menu");
	 	sleep(1);
          void menu();	
}
}
void menu(){

	system("cls");
	do{
	
	printf ("\n\n\t\t\t\t\t\tDigite o serviço desejado: \t\t\t\t\t\n");
  
 	printf("\n\t\t\t\t\t1-Exibir dadOs cadastrais: \t\t\t\t\t\n");
  	printf("\n\t\t\t\t\t2-Para IMC: \t\t\t\t\t\n");
  	printf("\n\t\t\t\t\t3-Média Aluno: \t\t\t\t\n");
  	printf("\n\t\t\t\t\t4-Calculadora: \t\t\t\t\n");
  	printf("\n\t\t\t\t\t5-Sair: \t\t\t\t\t\n");
  	scanf("%d",&opcao);
  	switch (opcao)
{ 
case 1:
		system("cls");
    printf("Dados cadastrais do usuário:");
    exibir();
    system("pause");
    system("cls");
	menu();
  break;

case 2:
		system("cls");
      printf ("\n\t\t\tCalculo de IMC:\n\t\t\t");
      imc();    
	  sleep(1);
	  system("pause");
	  menu();
break;  
    case 3:
	    system("cls");
	    media();
		system("pause");
		menu();
      break;
      
    case 4:
      printf ("");
      
      
      break;
    case 5:
    	printf("Saindo...");
    	sleep(1);
    	break;
   	
    default:
      printf ("Digite um numero entre 1 e 5!");
      break; 
	}} while(opcao!= 5);

  	
  

};
void exibir(){
	
 printf("\n\n**********\tDADOS CADASTRAIS\t**********\n");
     printf("Nome completo: %s %s \nEmail: %s \nIdade: %d\nPeso: %2.2f Kg \nAltura: \%2.2fM\n", usuario1.nome, usuario1.sobrenome, usuario1.email, usuario1.idade, usuario1.peso, usuario1.altura); 
	
}
void imc (){
	 usuario1.imc = usuario1.peso / (usuario1.altura * usuario1.altura);      
      printf("\n\t\t\tIMC de %s é %2.2f\n\t\t\t\n",usuario1.nome,usuario1.imc);
}
void refaz(){
	
    switch(opcao2){
  
    case 1:
  	cadastrar();
  	system("cls");
  	printf("************ USUARIO CADASTRADO COM SUCESSO ****************");
  	sleep(1);
	

break;
		case 2:		
		 printf("Usuario Cadastrado:");
		 printf("\n\nUsuario não encontrado.");
		 sleep(1);
		 system("cls");
break;}
	menu();
	sleep(1);
}
void media(){
		system("cls");
      printf ("\t\tCalculo de média: \n");
      if(usuario1.sexo ==1){
      	printf("Olá Sr %s\n",usuario1.nome);
	  }else{
	  	printf("Olá Sra %s\n",usuario1.nome);
	  }
	  printf("\nPara calcular a sua média, precisamos de alguns dados: \n");
	  printf("\nDigite sua nota na Avaliação A1: \n");
	  scanf("%f",&usuario1.nota1);
	  printf("\nDigite sua nota na Avaliação A2: \n");
	  scanf("%f",&usuario1.nota2);
	  printf("\nNota A1 é : %2.1f\n",usuario1.nota1);
	  printf("\nNota A2 é : %2.1f\n",usuario1.nota2);
	
		usuario1.media = (usuario1.nota1 + usuario1.nota2)/2;
		
	  printf("Sua média foi de %2.1f\n",usuario1.media);
	  if(usuario1.media < 6){
	  	printf("\nREPROVADO SEU MERDA\n");
	  }else{
	  	printf("\nAPROVADO, VOCE É DEMAIS\n");
	  }
}
