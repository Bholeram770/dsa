#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int top;
    int size;
    int*arr;
};
int operator(char ch){
    if(ch=='*'||ch=='/'||ch=='+'||ch=='-'){
      return 1;
    }
    else{
        return 0;
    }
}
int operatorprece(char ch){
    if(ch=='/'||ch=='*'){
        return 3;
    }
    else if(ch=='+'||ch=='-'){
        return 2;
    }
    else{
        return 1;
    }
}
int isempty(struct stack*s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack*s,char val){
    if(s->top==s->size-1){
        printf("can not be inserted");
    }
    else{
        s->top++;
        s->arr[s->top] = val;  
    }

}
char pop(struct stack*s){
    if(s->top==-1){
        return 0;
    }
    else{
        char val=s->arr[s->top];
        s->top--;
        return val;
    }
}
int stacktop(struct stack*s){
    return s->arr[s->top];
}
char *infixtopostfix(char*infix){
    struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 100;
    sp->arr=(char*)malloc(sp->size*sizeof(char));
    char *pos=(char *)malloc(strlen(infix)*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!operator(infix[i])){
            pos[j]=infix[i];
            i++;
            j++;
        }
        else{
            if(operatorprece(infix[i])>operatorprece(stacktop(sp))){
                push(sp,infix[i]);
                i++;
            }
            else{
                pos[j]=pop(sp);
                j++;
            }
        }
    }
while(!isempty(sp)){
    pos[j]=pop(sp);
    j++;
}
pos[j]='\0';
return pos;
    
   
}
int main(){
 char *infix="a+b";
 printf("%s",infixtopostfix(infix));
}