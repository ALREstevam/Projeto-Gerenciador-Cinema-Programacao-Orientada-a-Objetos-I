#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 50
/*=============================================================================================================*/
struct dim_funcionario{
	long int cpf;
    int codigo;
    int dia, mes;
    char nome[TAM];
    float salario;
	struct dim_funcionario *prox;
};
typedef struct dim_funcionario dim_funcionario;


/*=============================================================================================================*/
void LimpaTela(){
    printf("\e[H\e[2J");
}

/*=============================================================================================================*/
void ArquivoFuncionario(int Cod, char nome[TAM], long int cpf, int dia, int mes, float salario ){
// criando a variável ponteiro para o arquivo
    FILE *pont_arq;

    long int CPF = cpf ;
    int Codigo = Cod;
    int Dia = dia, Mes = mes;
    char Nome[TAM];
    strcpy(Nome, nome);
    float Salario = salario;

  //abrindo o arquivo
    pont_arq = fopen("arquivoFuncionario.txt", "a");



    fprintf(pont_arq, "%s ", Nome);
    fprintf(pont_arq, "%d ", Codigo);
    fprintf(pont_arq, "%lu ", CPF);
    fprintf(pont_arq, "%d ", Dia);
    fprintf(pont_arq, "%d ", Mes);
    fprintf(pont_arq, "%.2f ", Salario);
  // fechando arquivo
    fclose(pont_arq);

}
/*=============================================================================================================*/

void LerArquivoFuncionario(dim_funcionario **inicio ){

    int Codigo = 0, Dia = 0, Mes = 0;
    long int Cpf = 0;
    char Nome[50];
    float Salario = 0;

    dim_funcionario *no_funcionario, *percorre;



    FILE *pont_arq;

    pont_arq = fopen("arquivoFuncionario.txt", "r");


    if(pont_arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else
		while((fscanf(pont_arq,"%s %d %lu %d %d %f",&Nome,  &Codigo, &Cpf, &Dia, &Mes, &Salario)) != EOF){

            no_funcionario = (dim_funcionario *) malloc(sizeof(dim_funcionario));

            no_funcionario->codigo=Codigo;
            strcpy(no_funcionario -> nome,Nome);
            no_funcionario->cpf=Cpf;
            no_funcionario->dia=Dia;
            no_funcionario->mes=Mes;
            no_funcionario->salario = Salario;



             if (*inicio==NULL)
            { /* lista vazia. */
                *inicio = no_funcionario;
            }
            else { /* lista nao vazia */
                 percorre = *inicio;
                 while (percorre->prox != NULL)
                 {
                     percorre = percorre -> prox;
                 }
                percorre->prox = no_funcionario;
            }
            no_funcionario -> prox = NULL;

            }

        fclose(pont_arq);

}


/*=============================================================================================================*/

int InicializaFuncionario(dim_funcionario **listaFuncionario)
    {
	   *listaFuncionario= NULL; // inicializa
	   	return 0;
    }

/*=============================================================================================================*/

int Remover_Funcionario(dim_funcionario **inicio, int cod){
    dim_funcionario *aux, *percorre, *verificaCod;

    if (*inicio==NULL)
	{
    return 1; // Lista vazia
	}else{
        percorre = *inicio;
        verificaCod = *inicio;
        if(verificaCod->prox == NULL){
            if(verificaCod->codigo==cod){
                aux = *inicio;
                *inicio = (*inicio)->prox;
                free(aux);
                printf("\n\tFuncionário removido com sucesso!");
            }
        }
        else{
            while (verificaCod->prox != NULL){
                aux=percorre;
                percorre = percorre -> prox;
                verificaCod =  verificaCod->prox;
                if(verificaCod->codigo==cod){
                    aux -> prox = percorre -> prox;
                    free(percorre);
                    printf("\n\tFuncionário removido com sucesso!");
                }
            }
        }
	}
}


/*=============================================================================================================*/

int ExibirFuncionario(dim_funcionario *inicio){

    int i;
    if(inicio == NULL){
        return 1;
    }

    while(inicio != NULL){
        printf("\n");
        printf("\tCódigo: %d\n", inicio->codigo);
        printf("\tNome: %s\n", inicio ->nome);
        printf("\tCpf: %lu\n", inicio->cpf);
        printf("\tData de Contrato: %d/%d\n", inicio->dia, inicio->mes);
        printf("\tSalário: %.2f", inicio->salario);
        printf("\n");
        inicio = inicio -> prox;
    }
    printf("\n\n");
    return 0;
}


/*=============================================================================================================*/

int Inserir_fim_LS_Funcionario(dim_funcionario **inicio){
    dim_funcionario *no_funcionario, *percorre;
    no_funcionario = (dim_funcionario *) malloc(sizeof(dim_funcionario));
    //int x = 30;
    long int cpfFun;
    int codigoFun;
    int diaFun, mesFun;
    char nomeFun[TAM];
    float salarioFun;

    printf("\tDigite o nome do funcionario:\n");
    scanf("%s", nomeFun);
    strcpy(no_funcionario -> nome,nomeFun);
    printf("\tCPF:\n");
    scanf("%lu", &cpfFun);
    no_funcionario->cpf = cpfFun;
    printf("\tSalario:\n");
    scanf("%f", &salarioFun);
    no_funcionario->salario = salarioFun;
    printf("\tCódigo do funcionario:\n");
    scanf("%d", &codigoFun);
    no_funcionario->codigo = codigoFun;
    printf("\tData do contrato:\n");
     scanf("%d/%d", &diaFun, &mesFun);
    no_funcionario->dia=diaFun;
    no_funcionario->mes=mesFun;

    ArquivoFuncionario(codigoFun, nomeFun, cpfFun, diaFun, mesFun, salarioFun);

    no_funcionario -> prox = NULL;

    if (*inicio==NULL)
	{ /* lista vazia. */
	    *inicio = no_funcionario;
	}
	else { /* lista nao vazia */
	     percorre = *inicio;
	     while (percorre->prox != NULL)
	     {
	         percorre = percorre -> prox;
	     }
	    percorre->prox = no_funcionario;
	}
	return 0;
}

/*=============================================================================================================*/
    dim_funcionario *listaFuncionario;


int main(){

 
    InicializaFuncionario(&listaFuncionario);

    int aux;
    int tempCod = 0;
    int codForn, codFunc, codProd, quantProd;
    int opcFun = 0;
    int opc = 0;
    int erro;
    int escolha = 0;

   
   while(opc != 4){
        printf("\n\n\n");

        printf("************* Menu Principal *************\n");
        printf("Escolha a opção desejada:\n\n");
        printf("\t0. Restaurar dados da ultima sessão.\n");
        printf("\t1. Funcionalidades Gerais.(Vendas, Produtos, Estoque)\n");
        printf("\t2. Funcionário.\n");
        printf("\t3. Fornecedor.\n\n");
        printf("\t4. Sair.\n\n");
        scanf("%d",&opc);
        switch(opc){
            
            case 2:
                LimpaTela();
                printf("************* Menu do Funcionário *************\n");
                printf("\t1. Cadastrar funcionário.\n");
                printf("\t2. Ver lista de funcionários.\n");
                printf("\t3. Remover funcionário.\n");
                scanf("%d",&opcFun);

                switch(opcFun){
                    case 1:
                        printf("************* Cadastro de Funcionários *************\n");
                        Inserir_fim_LS_Funcionario(&listaFuncionario);
                    break;

                    case 2:
                        printf("\nLista de Funcionários:\n");
                        aux = ExibirFuncionario(listaFuncionario);
                        if(aux == 1){
                            printf(" Lista vazia!\n");
                        }

                    break;

                    case 3:
                        printf("************* Remoção de Funcionários *************\n");
                        printf("\tDigite o codigo do funcionario:\n");
                        scanf("%d",&codFunc);
                        aux = Remover_Funcionario(&listaFuncionario,codFunc);
                        if(aux == 1){
                            printf("Não encontrado!\n");
                        }
                    break;
                }
           
            
            break;
        }
    }
    	return 0;
	}

	

