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
            printf("jinruquqiangongneng,qingshuruyaoquchudejine:\n");
            int qu;
            scanf("%d",&qu);
            if(qian>=qu){
                qian-=qu;
                printf("quqianchenggong,dianjihuichujixu\n");
                 char x;
            scanf("%c",&x);
            scanf("%c",&x);

            }
            else{
                printf("yuebuzu,dianjihuichejixu\n");
                  char x;
            scanf("%c",&x);
            scanf("%c",&x);

            }

        }
        if(code==3){
            printf("dangqianyuewei:%d\n",qian);
            printf("dianjihuichejixu\n");
               char x;
            scanf("%c",&x);
            scanf("%c",&x);
           

        }
        if(code==4){
            printf("chengxujieshu\n");
            break;

        }

    }

    return 0;

}