#include <stdio.h>

int main(){
    int socot;
    int sodong;
    printf("nhapsocot:\n");
    scanf("%d",&socot);
    printf("nhapsodong:\n");
    scanf("%d",&sodong);
    // nhap so

    int i;
    int j;
    int k;
    int g=sodong-2;
    int h=socot-2;
    for(i=0;i<sodong;i++){
        if(i<1||i>g){
            for(j=0;j<socot;j++){
            printf("%c",'*');
            }
            printf("\n");
        }
        else{
            for(k=0;k<socot;k++){
                if(k<1||k>h){
                    printf("%c",'*');
                }
                else{
                    printf("%c",' ');
                }
            }
            printf("\n");
        }
    }
}