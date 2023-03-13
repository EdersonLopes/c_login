#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>


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

int main ()
{
    setlocale(LC_ALL,"Portuguese");
  int opcao, opcao2;
  char continuar;
  cadastro usuario1;
  float imc;
  
  printf("\n\t\t\tDigite 1 para usuario JA cadastrado no sistema.\t\t\n");
  printf("\n\t\t\tDigite 2 para cadastrar um NOVO usuário\t\t\n");
  scanf("\t\t\t%d",&opcao2);
  
  switch(opcao2){
  
  case 1:
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
	   printf("**********\tDADOS CADASTRAIS\t**********\n");
     printf("Nome completo: %s %s \nEmail: %s \nIdade: %d\nPeso: %2.2f Kg \nAltura: \%2.2fM\n", usuario1.nome, usuario1.sobrenome, usuario1.email, usuario1.idade, usuario1.peso, usuario1.altura); 
	
		 if(usuario1.sexo = 1){
	   			printf("Sexo: Masculino\n");
			   }  else{
			   	printf("Sexo: Feminino\n");
			   }
			   
			break;
			system("pause");
	
	case 2:
		{ printf("Usuario Cadastrado:");
		}
	}
	printf ("\n\n\t\t\tDigite o serviço desejado: \t\t\t\n");
  
  printf("\n\t\t\t1-Para cadastro: \t\t\t\n");
  printf("\n\t\t\t2-Para IMC: \t\t\t\n");
  printf("\n\t\t\t3-Média Aluno: \t\t\t\n");
  printf("\n\t\t\t4-Calculadora: \t\t\t\n");
  scanf ("%d", &opcao);
  switch (opcao)
    {
    case 1:
    printf("");
    break;
    case 2:
      printf ("\n\t\t\tCalculo de IMC:\n\t\t\t");
      usuario1.imc = usuario1.peso / (usuario1.altura * usuario1.altura);
      printf("IMC de %s é %2.2f",usuario1.nome,usuario1.imc);
      
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
	} 
    if (opcao != 0) {
            printf("\n\nDeseja retornar ao menu? S || N.\n");
            scanf(" %c", &continuar);
            system("cls");
    }
	
	 if (continuar == 's') {
            printf("\n\tDigite o serviço desejado: ");
            printf("\n1- Para cadastro:\n\t\t2- Para IMC:\n\t\t3- Média Aluno:\n\t\t4- Calculadora:\n\t");
            scanf("%d", &opcao);
    system("pause");

  
}
return 0;
}
