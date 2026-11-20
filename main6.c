// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int yigindi(int n){
if(n == 0){
    return 0;
}
      
return n % 10 + yigindi(n / 10);
    
}
int main() {
int a;

    scanf("%d", &a);

   printf("%d",yigindi(a));
    
    return 0;
}