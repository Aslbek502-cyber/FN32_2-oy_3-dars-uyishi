// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int myNums(int n){
if(n == 0){
    return 0;
}
      
return 1 + myNums(n / 10);
    
}
int main() {
int a;

    scanf("%d", &a);
    if(a == 0){
        printf("1");
    } else {
   printf("%d",myNums(a));
    }
    return 0;
}