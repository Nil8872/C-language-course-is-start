# include<stdio.h>
# include<string.h>
void strcpys(char * target, char * sourse){
    char st[] =" ";
    sourse = strcat(st,sourse);
    strcat(target, sourse);
}
int main(){
    char st1[] = "Nilesh";
    char st2[] = "Sariya";
    char st3[] = "Vinubhai";
    strcpys(st1, st2);
    strcpys(st3, st2);
    // printf(st1);
    printf(st3);

    
    return 0;
}