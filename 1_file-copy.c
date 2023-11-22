#include <stdio.h>

void main() {
        const char *txt_filename = "1_txt.txt";
        const char *json_filename = "1_json.json";
        FILE *txt = fopen(txt_filename, "r+");
        FILE *json = fopen(json_filename, "r+");
        char txt_c = getc(txt);
        char json_c = getc(json);
        while (txt_c!=EOF){
                putchar(txt_c);
                txt_c=getc(txt);
        }
        while (json_c!=EOF){
                putchar(json_c);
                json_c=getc(json);
        }
}
