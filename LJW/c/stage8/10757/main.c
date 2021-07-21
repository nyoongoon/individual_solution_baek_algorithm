#include <stdio.h>
#include <string.h>


char* reverse(char* string,int len){
    char temp[len];

    strcpy(temp,string);

  for (int i = 0; i < len; i++)
  {
     string[i] = temp[len - 1 -i]; 
  }
return string;  
}



char* add(char* string1,char* string2,int len){
   char sum[len+1]; 
    
    for (int i = 0; i < len; i++)
    {
       if(strlen(string1) == strlen(string2)){
           sum[i] = string1[i] + string2[i] - '0';
       } 
       
       else if(strlen(string1) > strlen(string2)){
           if(i < strlen(string2))
           sum[i] = string1[i] + string2[i] - '0';

            sum[i] = string1[i];     
       }

       else{
           if(i < strlen(string1))
           sum[i] = string1[i] + string2[i] - '0';
            sum[i] = string2[i];     
       }
    }  
        
    for (int i= 0; i < len; i++)
    {
        if(sum[i] >= '10'){
            sum[i+1] += 1;
            sum[i] -= '10'; 
         }
    }
   if(sum[len-1] == 1){
        sum[len -1] += '0'; 
        len ++;
   }
    return reverse(sum,len);
}


int main(){
    char string1[10001],string2[10002];
    int len,n1,n2;

    scanf("%s %s",string1,string2);

    n1 = strlen(string1);
    n2 = strlen(string2);


    if(n1 >= n2)
        len = strlen(string1);
    else 
        len = strlen(string2); 
    
    for (int i = 0; i < n1; i++)
    {
        string1[i] -= '0';
    }
    
for (int i = 0; i < n2; i++)
    {
        string2[i] -= '0';
    }

    printf("%s",add(reverse(string1,n1),reverse(string2,n2),len));

    return 0;
}