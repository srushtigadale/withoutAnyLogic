#include "q1.h"
int choose(){
    int ch,k3=0,m3=0,cnt;
    while(cnt != -1){
        printf(" Press - \n 1. Read the distances \n2. Display the distances\n3. Add the distances\n4. Subtract the distances \n5. EXIT");
        printf("Enter your choice:");
        scanf("%d" ,&ch);
        switch(ch){
            case 1: printf("Enter the first distance in kms and meters: ");
                    scanf("%d %d" , &k1.km , &k1.m);
                    printf("Enter the second distance in kms and meters: ");
                    scanf("%d %d" , &k2.km , &k2.m);
                    break;
            case 2: printf("the first distance in kms and meters = %d %d\nthe second distance in kms and meters = %d %d" , k1.km,k1.m,k2.km,k2.m);
                    break;
            case 3: if (k1.m + k2.m >= 1000){
                        printf("in");
                        k3 = (k1.m + k2.m)/1000 ;
                        m3 = (k1.m + k2.m)%1000;
            }
                    else
                        m3 = k1.m+k2.m;
                    sumk.km = k3 + k1.km + k2.km;
                    sumk.m = m3;
                    printf("The sum of two distances is %d %d" , sumk.km , sumk.m);
                    break;
            case 4: printf("The difference of two distances is %d %d" , k1.km-k2.km,k1.m-k2.m);
                    break;
            case 5: cnt=-1;
                    break;
            default: printf("Enter a valid input");
            }
        if(cnt == 1)
                break;
        }
return 0;}