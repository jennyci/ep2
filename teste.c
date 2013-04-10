#include <stdio.h>
int main(){
    int nota2, nota5, nota10, nota20, nota50, nota100, senha, s, saldo1, operacao, saque, deposito, saldo;

     printf("Inicializando caixa...\n\n");
     printf("Digite a quantidade de notas de 2:\n");
     scanf("%d", &nota2);
      while(nota2 < 0 )
     {
        printf("Quantidade inválida.\n");
        printf("Digite a quantidade de notas de 2:\n");
        scanf("%d", &nota2);    
     }
    
     printf("Digite a quantidade de notas de 5:\n");
     scanf("%d", &nota5); 
     while(nota5 < 0)
     {
        printf("QUantidade inválida.\n");
        printf("Digite a quantidade de notas de 5:\n");
        scanf("%d", &nota5);
     }

     printf("Digite a quantidade de notas de 10:\n");
     scanf("%d", &nota10);
     while(nota10 < 0)
     {
        printf("Quantidade inválida.\n");
        printf("Digite a quantidade de notas de 10:\n");
        scanf("%d", &nota10);
     }

     printf("Digite a quantidade de notas de 20:\n");
     scanf("%d", &nota20);
     while(nota20 < 0)
     {
        printf("Quantidade inválida.\n");
        printf("Digite a quantidade de notas de 20:\n");
        scanf("%d", &nota20);
     }

     printf("Digite a quantidade de notas de 50:\n");
     scanf("%d", &nota50);
     while(nota50 < 0)
     {
        printf("Quantidade inválida.\n");
        printf("Digite a quantidade de notas de 50:\n");
        scanf("%d", &nota50);
     }
     printf("Digite a quantidade de notas de 100:\n");
     scanf("%d", &nota100);
       while(nota100 < 0)
     {
        printf("Quantidade inválida.\n");
        printf("Digite a quantidade de notas de 100:\n");
        scanf("%d", &nota100);
     }

   
     printf("Digite sua senha:\n");//senha de até cinco digitos
     scanf("%d", &senha);
    do{

        printf("Confirme sua senha:\n");//senha de até cinco digitos
        scanf("%d", &s);
         if(senha != s)
           printf("Senhas Diferentes.\n");
       }while(s != senha);

     /*while( senha != senha);
    
        printf("Senhas Diferentes.\n");
        printf("Digite sua senha:\n");
        scanf("%d", &senha);
        printf("Confirme sua senha:\n");
        scanf("%d", &senha);*/   
     while(1)
     printf("Qual Operacao Deseja Fazer?\n\n");
     printf("\n<1>Efetuar Saque\n<2>Efetuar Deposito\n");
     scanf("%d", &operacao);
        if( operacao < 0 || operacao > 4)
        {
            while(operacao < 0 || operacao > 4)
            printf("Operação Inválida!\n");
       
        }
     while(operacao >= 1 || operacao <= 4)
     {
    switch(operacao){
        
        case 1:/*Saque*/
        
             do
            {
                printf("Efetuar Saque.\n");
                printf("Digite o valor do saque:\n");
                scanf("%d", &saque);
                if( saque < 0)
                {
                    printf("Valor inválido.\n");
                }
            }
            while( saque < 0);
       case 2:{/*Depósito*/
        printf("Efetuar Depósito.\n");
        printf("Digite o valor do depósito:\n");
        scanf("%d", &deposito);
        printf("Operação realizada com sucesso.\n");
        while(deposito < 0){
            printf("Quantidade Inválida.\n");
            printf("Digite o valor do depósito:\n");
            scanf("%d", &deposito);
            break;
        }    
        printf("Operação realizada com sucesso.\n");
        printf("Valor Depositado:R$ %d\n",deposito);
        saldo = nota2 * 2 + nota5 * 5 + nota10 * 10 + nota20 * 20 + nota50 * 50 + nota100 * 100;
        saldo1=(deposito)+saldo;
        printf("Seu saldo é de:R$ %d\n",saldo1);    
        break;
        }
        
        case 3:{/*Saldo*/
        printf("Digite sua senha:\n");
        scanf("%d",&s);//s= senha
      
        if( s != senha){
            printf("Senha incorreta\n");
            break;
        }

        else{

            printf("Quantia de notas de 2:%d\n",nota2);
            printf("Quantia de notas de 5:%d\n",nota5);
            printf("Quantia de notas de 10:%d\n",nota10);
            printf("Quantia de notas de 20:%d\n",nota20);
            printf("Quantia de notas de 50:%d\n",nota50);
            printf("Quantia de notas de 100:%d\n",nota100);

            /*saldo=saque+deposito;*/
            saldo = nota2 * 2 + nota5 * 5 + nota10 * 10 + nota20 * 20 + nota50 * 50 + nota100 * 100;
            printf("Total :%d\n", saldo);
           

            /*if(saque > saldo){
            printf("Operação Inválida.\n");
            saque = (0); 
            break;    
            }*/
        }
        break;
        }
        case 4:/*Sair*/{
        printf("Digite sua senha:\n");
        scanf("%d",&s);
        if( s != senha)
        {
            printf("Senha incorreta.\n");
        }
        else 
        {
            printf("Obrigado por utilizar o caixa.\n");
        return 0;
        }
        break;
        }
    }
    }
    return 0;
}
