#include <stdio.h>
#include <limits.h>

int main(void){
    int n,q, reverse = 0;
    scanf("%d", &n);
    int arr[n];

    int max_val= INT_MIN;
    int min_val = INT_MAX;
    int max_val_id=0, min_val_id=0;

    
    for(int i=0; i<n; i++){
        scanf("%d", &q);

        if (q > max_val) { max_val = q; max_val_id = i; }
        if (q < min_val) { min_val = q; min_val_id = i; }
        
        arr[i] = q;
    }

    if(min_val_id > max_val_id) reverse = 1;  // если максимальное чило левее минимального

    for(int i=0; i<n; i++){
        if(i == min_val_id || i == max_val_id){
            if(reverse){
                for(int k=min_val_id; k>=max_val_id; k--) printf("%d ", arr[k]);
                i = min_val_id;
            }
            else{
                for(int k=max_val_id; k>=min_val_id; k--) printf("%d ", arr[k]);
                i = max_val_id;
            }
        }
        else printf("%d ", arr[i]);
    }
}