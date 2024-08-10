#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	char fila1[50], fila2[50], fila3[50], x1[50], x2[50][50] = {0};
	int y, a = 0, x, r = 0;
	
	scanf("%s", fila1);
	scanf("%s", fila2);
	scanf("%s", fila3);
	scanf("%d", &y);
	
	if(strlen(fila1) <4  || strlen(fila1) > 15 || strlen(fila2) < 4 || strlen(fila2) > 15 || strlen(fila3) < 4 || strlen(fila3) > 15 || y < 2 || y > 15){
		return 0;}
		
		if(strstr(fila1, " ") || strstr(fila2, " ") || strstr(fila3, " ")){
		return 0;} 
	
	x = strlen(fila1);
	
	for (int i = 0; i <= x - y; i++) {
        strncpy(x1, fila1 + i, y);
        x1[y] = '\0';
        
        if (strstr(fila2, x1) && strstr(fila3, x1)) {
            for (int i = 0; i < a; i++) {
                if (strcmp(x2[i], x1) == 0) {
                    r = 1;
                    break; }} 
					
		if (!r) {
        	strcpy(x2[a], x1);
            a++;}}}
    
	printf("%d\n", a);
	
	return 0;	
}
