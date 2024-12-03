#include <stdio.h>

int main() {
    int num[8]={30,32,1,28,23,7,10,12};

    for(int i =0;i<8;i++){
        for(int j=0;j<8-1;j++){
            int temp;
            if(num[j]>num[j+1]){
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }

    for(int i=0;i<8;i++){
        printf("%d\n",num[i]);
    }
    return 0;
}
