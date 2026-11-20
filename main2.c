// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
void printNums(int n){
if(n == 0){
    return;
}
    printf("%d\n", n);   
    printNums(n - 1);
        
    
}
int main() {
int a;

    scanf("%d", &a);

    printNums(a);
    
    return 0;
}