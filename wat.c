#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){
srand(time(NULL));
int r=rand()%5;
int t,i,j,k,ct;
char a;
char tab[10]={""};
char tab0[10]={"ekspozycja"};
char tab1[10]={"hackerstwo"};
char tab2[10]={"jazgotliwy"};
char tab3[10]={"kuchmistrz"};
char tab4[10]={"pijaczysko"};
switch (r){
	case 0: for (i=0;i<10;i++)	tab[i]=tab0[i];break;
	case 1: for (i=0;i<10;i++)	tab[i]=tab1[i];break;
	case 2: for (i=0;i<10;i++)	tab[i]=tab2[i];break;
	case 3: for (i=0;i<10;i++)	tab[i]=tab3[i];break;
	case 4: for (i=0;i<10;i++)	tab[i]=tab4[i];break;
}
char has[10]={"**********"};
char l[]={"qwertyuiopasdfghjklzxcvbnm"};
char L[]={"QWERTYUIOPASDFGHJKLZXCVBNM"};
t=0;
while (t<7){

    ct=0;
    printf ("litera: ");
    //wczytuje litere
    scanf(" %c",&a);
    //czy duza litera
    for (i=0;i<26;i++){
        if (a==L[i]){
            a=l[i];
            break;}
        }
    //czy mala litera
    for (i=0;i<26;i++){
        if (a==l[i]){
            ct++;
            break;}
        }
    if (ct==0){
        printf("zly znak \n");
        continue;
    }
    //czy bylo
    for (i=0;i<10;i++){
        if (a==has[i]){
            printf("bylo!\n");
            ct++;
            break;}
    }
    if (ct>1)continue;
    //czy jest w hasle
    for (i=0;i<10;i++){
        if (a==tab[i]){
            has[i]=a;
            ct++;}
    }
    //czy nie ma w hasle
    if (ct==1)
        t++;

    //wyswietla haslo
    printf ("haslo: ");
    for (i=0;i<10;i++)
        printf ("%c",has[i]);

    //czy jest haslo
    j=10;
    for (i=0;i<10;i++){
        if ('*'==has[i])
            j--;}
    printf (" (%d/10) hp: (%d/7)\n",j,7-t);
    if (j==10){
        system("PAUSE");break;}
    if (ct>1)continue;

switch (t){
case 7:
printf("===========     \n\
||/      |        \n\
||      _|_     \n\
||     (x.x)    \n\
||      >_<        \n\
||     /|.|\\    \n\
||     '|_|'    \n\
||     /   \\    \n\
||            *     \n\
||,,,,,,,,,,,    \n\
    GAME OVER    \n");
system("PAUSE");
break;
case 6:
printf("===========        \n\
||/      |        \n\
||      _|_        \n\
||     (p.q)    \n\
||      >_<        \n\
||     /|.|\\    \n\
||     '|_|'    \n\
||     /        \n\
||     *         \n\
||,,,,,,,,,,,    \n");
break;
case 5:
printf("===========        \n\
||/      |        \n\
||      _|_        \n\
||     (O.o)    \n\
||      >_<        \n\
||     /|.|\\    \n\
||     *|_|'    \n\
||                 \n\
||                \n\
||,,,,,,,,,,,    \n");
break;
case 4:
printf("===========        \n\
||/      |      \n\
||      _|_     \n\
||     (o.O)    \n\
||      >_<        \n\
||      |.|\\    \n\
||      |_|*    \n\
||                 \n\
||                \n\
||,,,,,,,,,,,    \n");
break;
case 3:
printf("===========        \n\
||/      |        \n\
||      _|_        \n\
||     (o.o)    \n\
||      >_<        \n\
||      |*|        \n\
||      |_|        \n\
||                 \n\
||                \n\
||,,,,,,,,,,,   \n");
break;
case 2:
printf("===========        \n\
||/      |        \n\
||      _|_        \n\
||     (o.o)    \n\
||       *        \n\
||              \n\
||              \n\
||                 \n\
||                \n\
||,,,,,,,,,,,   \n");
break;
case 1:
printf("===========        \n\
||/      |        \n\
||       |        \n\
||                \n\
||              \n\
||              \n\
||              \n\
||              \n\
||                 \n\
||,,,,,,,,,,,    \n");
break;
}
}
if (j==10)
printf("77IIIII7M+I????????????????????O????????\n\
77III8MMMM+??+?++++++++++++++MMMM???????\n\
7IIIIMMM8?+++++++++++++++++++8MMMM??????\n\
7IIIMM7??++++==============+++++MM$+????\n\
IIIMMM??++====~~~~~~~~~~~=====++=MMM+???\n\
IIMMMM+++==~~~~:NMMMMZ::~~~~====+MMMM+??\n\
I?MMMO++=~~:::,DMMMMMM$::::~~~~==MMMM+++\n\
?$MMMM+=~~::,,,NMMMMMM8,,,:::~~~=ZMMMN++\n\
IMMMMM~=~::,,..+MMMMMMM..,,,::~~~MMMMM=+\n\
IIMMMMMD::,,....8MMMMM. ..,,,:::MMMMMM=+\n\
??+MMMMMMM,.. ...MMMM7 ....,,,MMMMMM$=++\n\
??++MMMMMMMMMM~.MMMMMMM, MMMMMMMMMM~==++\n\
??++=?MMMMMMMMMMMMMMMMMMMMMMMMMMMM====++\n\
?+++==~MMMMMMMMMMMMMMMMMMMMMMMMM.~===+++\n\
??++==~~MMMMMMMMMMMMMMMMMMMMMMM:~~===+++\n\
??+++==~:,MMMMMMMMMMMMMMMMMMMM::~~===+++\n\
I??++==~::MMMMMMMMMMMMMMMMMMM.::~===++++\n\
I???++==~:,MMMMMMMMMMMMMMMMMM:~~~===+++?\n\
II???++==~:MMMMMMMMMMMMMMMMMM~~~===++++?\n\
III???++===MMMMMMMMMMMMMMMMMM~===+++++??\n\
7III???++==MMMMMMMMMMMMMMMMMN===+++++???\n\
77III???+++MMMMMMMMMMMMMMMMMM++++++?????\n\
7777III????MMMMMMMMMMMMMMMMMM+++?????III\n\
$$7777IIII?MMMMMMMMMMMMMMMMMM???????III7\n");
else{     printf ("\
       MMMMMMMMMMMMMMMMMMMMMMMMMMMM     \n\
       MMM         MMMM       M         \n\
       MMM       NMMM         M         \n\
       MMM      MMMN          M         \n\
       MMM    MMMM            M         \n\
       MMM  7MMM              M         \n\
       MMM MMMM               M IMM     \n\
       MMMMMM                 MMMMMM    \n\
       MMMM7                  MMMMMMM   \n\
       MMM                 7MMMMMMMM    \n\
       MMM                MMMMMMMM      \n\
       MMM               IMMMMMMMMM     \n\
       MMM               MMMMMMMMMMM    \n\
       MMM               MM,MMMMM MM8   \n\
       MMM               MM MMMMM MMM   \n\
       MMM              ZMM MMMMM MMM   \n\
       MMM                  MMMMM ,M    \n\
       MMM                  MMMMM       \n\
      MMMMM                 MMMMM       \n\
     MMMMMMI                MMMMM       \n\
     MMMMMMM                MMMMMM      \n\
    MMMMMMMMM               MMIMMM      \n\
   MMM MMM MMM              MM  D       \n\
      haslo:\t\t ");
    for (i=0;i<10;i++)
        printf ("%c",tab[i]);
}
system("PAUSE");
}
