#include <stdio.h>

int main()
{
    int h1,h2,h3,m1,m2,m3;

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    if(h1==h2){
        if(m1>=m2){
            h2+=24;
        }
    }

    else if(h1>h2){
        h2+=24;
    }

    if(m2<m1){
        m2+=60;
        h2--;
    }

    h3 = h2 - h1;
    m3 = m2 - m1;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h3,m3);

    return 0;
}
