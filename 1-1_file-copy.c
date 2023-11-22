#include <stdio.h>

int main(){
        FILE *infp = fopen("1-1_txt.txt", "r+");
        FILE *outfp = fopen("1-2_txt.txt", "a+");
        char inc = getc(infp);
        while(inc!=EOF){
                putc(inc,outfp);
                inc = getc(infp);
        }
        fputs(" - The copy ;)",outfp);
        return 0;
}
