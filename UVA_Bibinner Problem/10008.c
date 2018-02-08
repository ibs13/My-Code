#include <stdio.h>


int main()
{
    int s[30],n,p=0,m,g=0,temp,i,j,p1=0,p2=0,p3=0,p4=0,p5=0,p6=0,p7=0,p8=0,p9=0,p10=0,p11=0,p12=0,p13=0,p14=0,p15=0,p16=0,p17=0,p18=0,p19=0,p20=0,p21=0,p22=0,p23=0,p24=0,p25=0,p26=0;
    char a[1000000],b[1000];

    for(i=0;i<26;i++)
    {
        s[i] = 0;
    }

    scanf("%d\n",&n);

    while(n--)
    {
        gets(a);

        m = strlen(a);

        p = p + m;

        for(i=p-m,j=0;i<p,j<m;i++,j++)
        {
            a[i] = b[j];
        }
    }

    for(i=0;i<m;i++)
        {
            if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            {
                if(a[i]=='a' || a[i]=='A')
                {
                    if(p1==0){
                        g++;
                    }
                    p1++;
                    s[0]=p1;
                }
                else if(a[i]=='b' || a[i]=='B')
                {
                    if(p2==0){
                        g++;
                    }
                    p2++;
                    s[1]= p2;
                }
                else if(a[i]=='c' || a[i]=='C')
                {
                    if(p3==0){
                        g++;
                    }
                    p3++;
                    s[2]= p3;
                }
                else if(a[i]=='d' || a[i]=='D')
                {
                    if(p4==0){
                        g++;
                    }
                    p4++;
                    s[3]= p4;
                }
                else if(a[i]=='e' || a[i]=='E')
                {
                    if(p5==0){
                        g++;
                    }
                    s[4]=p5++;
                }
                else if(a[i]=='f' || a[i]=='F')
                {
                    if(p6==0){
                        g++;
                    }
                    s[5]=p6++;
                }
                else if(a[i]=='g' || a[i]=='G')
                {
                    if(p7==0){
                        g++;
                    }
                    s[6]=p7++;
                }
                else if(a[i]=='h' || a[i]=='H')
                {
                    if(p8==0){
                        g++;
                    }
                    s[7]=p8++;
                }
                else if(a[i]=='i' || a[i]=='I')
                {
                    if(p9==0){
                        g++;
                    }
                    s[8]=p9++;
                }
                else if(a[i]=='j' || a[i]=='J')
                {
                    if(p10==0){
                        g++;
                    }
                    s[9]=p10++;
                }
                else if(a[i]=='k' || a[i]=='K')
                {
                    if(p11==0){
                        g++;
                    }
                    s[10]=p11++;
                }
                else if(a[i]=='l' || a[i]=='L')
                {
                    if(p12==0){
                        g++;
                    }
                    s[11]=p12++;
                }
                else if(a[i]=='m' || a[i]=='M')
                {
                    if(p13==0){
                        g++;
                    }
                    s[12]=p13++;
                }
                else if(a[i]=='n' || a[i]=='N')
                {
                    if(p14==0){
                        g++;
                    }
                    s[13]=p14++;
                }
                else if(a[i]=='o' || a[i]=='O')
                {
                    if(p15==0){
                        g++;
                    }
                    s[14]=p15++;
                }
                else if(a[i]=='p' || a[i]=='P')
                {
                    if(p16==0){
                        g++;
                    }
                    s[15]=p16++;
                }
                else if(a[i]=='q' || a[i]=='Q')
                {
                    if(p17==0){
                        g++;
                    }
                    s[16]=p17++;
                }
                else if(a[i]=='r' || a[i]=='R')
                {
                    if(p18==0){
                        g++;
                    }
                    s[17]=p18++;
                }
                else if(a[i]=='s' || a[i]=='S')
                {
                    if(p19==0){
                        g++;
                    }
                    s[18]=p19++;
                }
                else if(a[i]=='t' || a[i]=='T')
                {
                    if(p20==0){
                        g++;
                    }
                    s[19]=p20++;
                }
                else if(a[i]=='u' || a[i]=='U')
                {
                    if(p21==0){
                        g++;
                    }
                    s[20]=p21++;
                }
                else if(a[i]=='v' || a[i]=='V')
                {
                    if(22==0){
                        g++;
                    }
                    s[21]=p22++;
                }
                else if(a[i]=='w' || a[i]=='W')
                {
                    if(p23==0){
                        g++;
                    }
                    s[22]=p23++;
                }
                else if(a[i]=='x' || a[i]=='X')
                {
                    if(p24==0){
                        g++;
                    }
                    s[23]=p24++;
                }
                else if(a[i]=='y' || a[i]=='Y')
                {
                    if(p25==0){
                        g++;
                    }
                    s[24]=p25++;
                }
                else if(a[i]=='z' || a[i]=='Z')
                {
                    if(p26==0){
                        g++;
                    }
                    s[25]=p26++;
                }
            }
        }

    for(i=0;i<25;i++)
    {
        for(j=i+1;j<26;j++)
        {
            if(s[i]>s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

        for(i=0;i<g;i++)
        {
            if(i>0){
                if(s[i]==p1)
                {
                    printf("A %d\n",p1);
                }
                else if(s[i]==p2)
                {
                    printf("B %d\n",p2);
                }
                else if(s[i]==p3)
                {
                    printf("C %d\n",p3);
                }
                else if(s[i]==p4)
                {
                    printf("D %d\n",p4);
                }
                else if(s[i]==p5)
                {
                    printf("E %d\n",p5);
                }
                else if(s[i]==p6)
                {
                    printf("F %d\n",p6);
                }
                else if(s[i]==p7)
                {
                    printf("G %d\n",p1);
                }
                else if(s[i]==p8)
                {
                    printf("H %d\n",p8);
                }
                else if(s[i]==p9)
                {
                    printf("I %d\n",p9);
                }
                else if(s[i]==p10)
                {
                    printf("J %d\n",p10);
                }
                else if(s[i]==p11)
                {
                    printf("K %d\n",p11);
                }
                else if(s[i]==p12)
                {
                    printf("L %d\n",p12);
                }
                else if(s[i]==p13)
                {
                    printf("M %d\n",p13);
                }
                else if(s[i]==p14)
                {
                    printf("N %d\n",p14);
                }
                else if(s[i]==p15)
                {
                    printf("O %d\n",p15);
                }
                else if(s[i]==p16)
                {
                    printf("P %d\n",p16);
                }
                else if(s[i]==p17)
                {
                    printf("Q %d\n",p17);
                }
                else if(s[i]==p18)
                {
                    printf("R %d\n",p18);
                }
                else if(s[i]==p19)
                {
                    printf("S %d\n",p19);
                }
                else if(s[i]==p20)
                {
                    printf("T %d\n",p20);
                }
                else if(s[i]==p21)
                {
                    printf("U %d\n",p21);
                }
                else if(s[i]==p22)
                {
                    printf("V %d\n",p22);
                }
                else if(s[i]==p23)
                {
                    printf("W %d\n",p23);
                }
                else if(s[i]==p24)
                {
                    printf("X %d\n",p24);
                }
                else if(s[i]==p25)
                {
                    printf("Y %d\n",p25);
                }
                else if(s[i]==p26)
                {
                    printf("Z %d\n",p26);
                }
            }
        }

        return 0;

}
