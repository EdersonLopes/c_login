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
	float imc;
	
	
}cadastro;
int continuar;
int opcao, opcao2;
cadastro usuario1;

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
	 if (continuar == '1'){
	 	printf("Voltando ao menu");
	 	sleep(1);
        void menu();
	
}}
void menu(){
	system("cls");
	
	printf ("\n\n\t\t\t\t\t\tDigite o serviço desejado: \t\t\t\t\t\n");
  
 	printf("\n\t\t\t\t\t1-Exibir dadOs cadastrais: \t\t\t\t\t\n");
  	printf("\n\t\t\t\t\t2-Para IMC: \t\t\t\t\t\n");
  	printf("\n\t\t\t\t\t3-Média Aluno: \t\t\t\t\n");
  	printf("\n\t\t\t\t\t4-Calculadora: \t\t\t\t\n");
  	scanf("%d",&opcao);
  

}


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
		{ printf("Usuario Cadastrado:");
			printf("\n\nUsuario não encontrado.");
			sleep(1);
			system("cls");}
			break;}
			
	retornar();
    menu();
	sleep(1);
switch (opcao)
{ 
case 1:
    printf("Dados cadastrais do usuário:");
    exibir();
 
    system("pause");
    system("cls");
    retornar();
	menu();
 
     
break;
    
case 2:
      printf ("\n\t\t\tCalculo de IMC:\n\t\t\t");
      
      imc();
      
	  sleep(1);
	  system("pause");
	  retornar();
	  menu();
	  
	   
break;
      
    
    case 3:
      printf ("");
      break;
    case 4:
      printf ("");
      break;
    case 0:
    	continuar ='n';
    	break;
   
    default:
      printf ("Digite um numero entre 1 e 4!");
      break;
      retornar();
      menu(); 
	}
}
int main (){
    setlocale(LC_ALL,"Portuguese");
  
  
  printf("\n\t\t\tDigite 1 Para cadastrar um NOVO usuario.\t\t\n");
  printf("\n\t\t\tDigite 2 para usuario JÀ cadastrado\t\t\n");
  scanf("\t\t\t%d",&opcao2);
  
  refaz();
  
 
}


