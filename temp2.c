
#include <stdio.h>
#include <unistd.h>
int main() {
    for( int i = 0; i < 5; i++){
        if(fork() == 0){
            printf("Hello\n");
            i += 2;
        }
    }
    return 0;
}