// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int daraja(int a, int n){
if(n == 0){
    return 1;
}
      
return a * daraja(a, n - 1);
    
}
int main() {
int a, n;

    scanf("%d %d", &a, &n);

   printf("%d",daraja(a, n));
    
    return 0;
}