#include <stdio.h>
#include <string.h>

void romano(int);

int main(){
    romano(144);
}

void romano(int n){
    char trad[100];
    int pos = 0;
    while(n >= 0){
        if(n-1000 > 0){
            trad[pos] = 'M';
            pos++;
            n -= 1000;    
        }
        if(n-900 > 0){
            trad[pos] = 'C';
            pos++;
            trad[pos] = 'M';
            pos++;
            n -= 900;    
        }
        if(n-500 > 0){
            trad[pos] = 'D';
            pos++;
            n -= 500;    
        }
        if(n-400 > 0){
            trad[pos] = 'C';
            pos++;
            trad[pos] = 'D';
            pos++;
            n -= 400;    
        }               
        if(n-100 > 0){
            trad[pos] = 'C';
            pos++;
            n -= 100;    
        }
        if(n-90 > 0){
            trad[pos] = 'X';
            pos++;
            trad[pos] = 'C';
            pos++;
            n -= 90;    
        }
        if(n-50 > 0){
            trad[pos] = 'L';
            pos++;
            n -= 50;    
        }
        if(n-40 > 0){
            trad[pos] = 'X';
            pos++;
            trad[pos] = 'L';
            pos++;
            n -= 40;    
        }
        if(n-10 > 0){
            trad[pos] = 'X';
            pos++;
            n -= 10;    
        }
        if(n-9 > 0){
            trad[pos] = 'I';
            pos++;
            trad[pos] = 'X';
            pos++;
            n -= 9;    
        }
        if(n-5 > 0){
            trad[pos] = 'V';
            pos++;
            n -= 5;    
        }
        if(n-4 > 0){
            trad[pos] = 'I';
            pos++;
            trad[pos] = 'V';
            pos++;
            n -= 4;    
        }
        if(n-1 > 0){
            trad[pos] = 'I';
            pos++;
            n -= 1;    
        }                           
    }
    trad[pos] = '\0';
    printf("%s", trad);
}



