#include <stdio.h>
int main () {
float trab, ap1, exam, p1, p2, p3, media;

    printf ("digite a primeira nota\n");
    scanf ("%f*c", &trab);
    printf ("digite a segunda nota\n");
    scanf ("%f%*c", &ap1);
    printf ("digite a terceira nota\n");
    scanf ("%f%*c", &exam);

    media=(trab*2 + ap1*3 + exam*5)/10;

    if(media>=8 && media<=10){
    printf ("Obteve conceito A");
    }
    else if(media>=7 && media<8){
    printf ("Obteve conceito B");
    }
    else if(media>=6 && media<7){
    printf ("Obteve conceito C");
    }
    else if(media>=5 && media<6){
    printf ("Obteve conceito D");
    }
    else if(media>=0 && media<=5){
    printf ("Obteve conceito E");
    }



    }
