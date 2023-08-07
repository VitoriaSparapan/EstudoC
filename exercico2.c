#include <stdio.h>
int main(){

    double nota=0.5;
    double notaDois=0;
    double notaTres=0;
    double notaQuatro=0.4;

    double nota_Dois=0.5;
    double notaDois_Dois=0;
    double notaTres_Dois=0;
    double notaQuatro_Dois=0.4;

    printf("Notas dos ultimos 4 bimestre, aluno 1\n");
    scanf("%lf", &nota);
    scanf("%lf", &notaDois);
    scanf("%lf", &notaTres);
    scanf("%lf", &notaQuatro);


    printf("Notas dos ultimos 4 bimestre, aluno 2\n");
    scanf("%lf", &nota_Dois);
    scanf("%lf", &notaDois_Dois);
    scanf("%lf", &notaTres_Dois);
    scanf("%lf", &notaQuatro_Dois);

    printf("Media dos ultimos 4 bimestre: %2.f\n",(nota+notaDois+notaTres+notaQuatro)/4);
    printf("Media dos ultimos 4 bimestre: %2.f\n", (nota_Dois+notaDois_Dois+notaTres_Dois+notaQuatro_Dois)/4);
    double media = ((nota_Dois+notaDois_Dois+notaTres_Dois+notaQuatro_Dois)/4);
    double mediaTres = ((nota+notaDois+notaTres+notaQuatro)/4);
    if(media >=7){
        printf("Passou \n");
    } else{
        printf("Não passou\n");
    }
    if(mediaTres >=7){
        printf("Passou");
    } else{
        printf("Não passou");

}}
