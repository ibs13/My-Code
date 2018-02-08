#include <stdio.h>

int main()
{
    float a,b,c,d,e,p,s;

    scanf("%f %f %f %f",&a,&b,&c,&d);

    s = ((a*2)+(b*3)+(c*4)+d)/10;

    if(s>=7.0){
        printf("Media: %.1f\nAluno aprovado.\n",s);
    }
    else if(s<5.0){
        printf("Media: %.1f\nAluno reprovado.\n",s);
    }
    else if(s>=5.0 && s<=6.9){

        scanf("%f",&e);

        printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\n",s,e);

        p = (s + e) / 2;

        printf("Aluno aprovado.\nMedia final: %.1f\n",p);
    }

    return 0;
}
