#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    FILE *fp;
    char string[51];
    int i;
    bool check = true;
    fp = fopen("data.txt", "a"); // ถ้าไม่มีเดี๋ยวมันสร้างให้เอง เพราะโหมด a
    printf("Input data string : \n");
    while (true){
        scanf("%s", &string);
        for(i = 0; i < strlen(string); i++){
            if (strcmp(string, ".") == 0){
                check = false;
                break;
            }
        }
        fprintf(fp, "%s\n", string);
        if(!check) { break; }
    }
    fclose(fp);
    return 0;
}
