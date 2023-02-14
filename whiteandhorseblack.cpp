#include <stdio.h>

bool hasil;
void movement1(int token[][8], int x, int y, int max){
    max--;
    if (x>=0 && y>=0 && x<8 && y<8 && max >= -1 && token[x][y]!=1){
           token[x][y] = 1;
           movement1(token,x + 2, y + 1, max);
           movement1(token,x + 2, y - 1, max);
           movement1(token,x - 2, y + 1, max);
           movement1(token,x - 2, y - 1, max);
           movement1(token,x + 1, y + 2, max);
           movement1(token,x + 1, y - 2, max);
           movement1(token,x - 1, y + 2, max);
           movement1(token,x - 1, y - 2, max);
    }
}

void movement2(int token[][8],int x, int y, int max){
    max--;
    if (x>=0 && y>=0 && x<8 && y<8 && max >= -1){
        if(token[x][y]==1){
            hasil=true;
            return;
        }
            movement2(token,x + 2, y + 1, max);
            movement2(token,x + 2, y - 1, max);
            movement2(token,x - 2, y + 1, max);
            movement2(token,x - 2, y - 1, max);
            movement2(token,x + 1, y + 2, max);
            movement2(token,x + 1, y - 2, max);
            movement2(token,x - 1, y + 2, max);
            movement2(token,x - 1, y - 2, max);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    getchar();
    char x1;
    char x2;
    int y1;
    int y2;
    
    for (int i = 0; i < T; i++){
        int limit;
        scanf("%d", &limit);
        getchar();
        scanf("%c", &x1);
        scanf("%d", &y1);
        scanf(" ");
        scanf("%c", &x2);
        scanf("%d", &y2);
        x1 -= 65;
        x2 -= 65;
        y1 -= 1;
        y2 -= 1;
        
           hasil=false;
           int token[8][8]={0};
        
        movement1(token,x1,y1,limit);
        movement2(token,x2,y2,limit);
        
        if (hasil){
            printf("Case #%d: YES\n", i + 1);
        }
        
        else{
            printf("Case #%d: NO\n", i + 1);
        }
    }
}
