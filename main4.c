// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int faktorial(int n){
if(n == 0){
    return 1;
}
      
return n * faktorial(n - 1);
    
}
int main() {
int a;

    scanf("%d", &a);

   printf("%d",faktorial(a));
    
    return 0;
}