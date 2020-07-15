//
//  main.c
//
//  Created by  Gleb on 26/09/2019.
//  Copyright © 2019  Gleb. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>


void input_array(int a[], int n){
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
}


int array_max(int a[], int n){
    int max = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    return max;
}


void output(int field[8][8]){
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < 8; j++){
            printf("%d ", field[i][j]);
        }
        printf("\n");
    }
}


int min(int a, int b){
    if (a < b) return a;
    else return b;
}


int max(int a, int b){
    if (a > b) return a;
    else return b;
}


int main(void){
    const unsigned int n = 8;
    int a[n], b[n];
    input_array(a, n);
    input_array(b, n);
    int ans;
    if (array_max(a, n) != array_max(b, n)){
        ans = -1;
    } else {
        ans = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                ans += min(a[i], b[j]);
            }
        }
    }
    printf("%d", ans);
    return 0;
}
