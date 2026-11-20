// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int summa(int n){
if(n == 0){
    return 0;
}
      
return n + summa(n - 1);
    
}
int main() {
int a;

    scanf("%d", &a);

   printf("%d",summa(a));
    
    return 0;
}