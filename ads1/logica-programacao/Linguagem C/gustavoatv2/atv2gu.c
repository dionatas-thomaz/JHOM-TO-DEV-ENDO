#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Q_FUNC 10


int main(){
    float comis[Q_FUNC]={0}, v_total[Q_FUNC]={0}, v_rec[Q_FUNC], result, ma_valor, me_valor;
    char func[Q_FUNC][100], func_ma_valor[100],func_me_valor[100];

    for(size_t i=0; i<Q_FUNC; i++){
        printf("Informe o nome do funcionario %d, o valor total de vendas e o percentual de comissao do sobre os valores de venda.\n(De enter para confirmar cada uma das informacoes)\n", i);
        scanf("%99s" "%f" "%f", func[i], &v_total[i], &comis[i]);

        comis[i]= comis[i]/100;
        v_rec[i]= v_total[i] * comis[i];
        result+= v_total[i];
            if(v_rec[i] > ma_valor){
                ma_valor = v_rec[i];
                me_valor = ma_valor;
                strcpy(func_ma_valor, func[i]);
           }
           if(v_rec[i] < me_valor){
                me_valor = v_rec[i];
                strcpy(func_me_valor, func[i]);
           }
    }
    for(size_t i=0; i<Q_FUNC; i++){
        printf("\tFuncionario %s recebera R$%.2f de comissao referente a suas vendas\n",func[i], v_rec[i]);
    }
    printf("\nTotal de vendas do mes foi de: R$%.2f\n",result);
    printf("\nO funcionario %s recebeu o maior valor de comissao que foi de: R$%.2f\n",func_ma_valor, ma_valor);
    printf("\nO funcionario %s recebeu o menor valor de comissao que foi de: R$%.2f\n",func_me_valor, me_valor);

    return 0;
}