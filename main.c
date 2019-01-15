#include <stdio.h>

int main(){
    int qian=0;

    printf("jinruqianbaoguanlixitong\n");
    while(1){
        printf("1---cunqian\n ");
        printf("2---quqian\n");
        printf("3---yue\n");
        printf("4---tuichu\n");
        printf("qingshuruxiangyingdegongnengbianhao:\n");
        int code;
        scanf("%d",&code);
        if(code==1){
            printf("jinrucunqiangongneng,qingshuruyaocunrudejine:\n");
            int cun;
            scanf("%d",&cun);
            qian += cun;
            printf("cunruchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==2){

        }
        if(code==3){

        }
        if(code==4){

        }

    }

    return 0;

}