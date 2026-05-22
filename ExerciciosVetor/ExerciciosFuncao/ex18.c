#include <stdio.h>

int somat(int);

int main(){

}

int somat(int n){
    int total = 0;
    for(int i = 1; i < n; i++){
        total += i;
    }
    return total;
}