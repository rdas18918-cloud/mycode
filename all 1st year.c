/* #include<stdio.h>
int main(){
    printf("Hello world..!!\n");
    return 0;
}
 */
/* #include<stdio.h>
int main(){
    int a,b,ADD;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);

    ADD=a+b;
    printf("The addition of the two numbers is:%d \n",ADD);

} */
/* #include<stdio.h>
int main(){
    int length,breadth,area;
    printf("Enter the length of the reactangle:");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%d",&breadth);

    area=length*breadth;
    printf("The area of the reactangle will be:%d \n",area);
} */
/* #include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;

    printf("After swapping: a=%d , b=%d\n", a,b);

    return 0;

} */
/* #include<stdio.h>
int main(){
    int n,i,fact=1;

    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;
    }

    printf("The factorial is=%d",fact);
    return 0;
/* } */
/* #include<stdio.h>
int main(){
    int i,n,count=0;

    printf("Enter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0)
            count++;
    }
    if(count==2)
        printf("Its a prime number");
    else
        printf("Its NOT a prime number");
    
    return 0;
} 
 */
/* #include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("Enter the of terms:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;

} */
/* #include<stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
    int main(){
        int n,i,sum=0;
        printf("Enter the number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            sum=sum+fact(i);
        printf("sum=%d",sum);
        
        }
    }
    return 0;
} */
/* #include<stdio.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num<0){
        printf("The factorial of zero is not defined..!!");
    }else{
        printf("The factorial of %d=%d\n",num,fact(num));
    }
    return 0;
    
    }
     */
/* #include<stdio.h>
int decrease(int n){
    if(n==0){
        return 0;
    
        printf("%d",n);
        return decrease(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    
    decrease(n);

    return 0;
} */
/* #include<stdio.h>
int main(){
    int r,c,mat1[10][10],mat2[10][10],sum[10][10];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);

printf("Enter the elements of the 1st matrix:");
for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
        scanf("%d",&mat1[i][j]);
    }
}
printf("Enter the elements of the 2nd matrix:");
for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
        scanf("%d",&mat2[i][j]);
    }
}
printf("The sum of the given matrices will be:\n");
for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
        sum[i][j]=mat1[i][j]+mat2[i][j];
        
        printf("%d",sum[i][j]);
    }
    printf("\n");
}
return 0;

}
 */
/* #include<stdio.h>
int main(){
    int r1,c1,r2,c2,mat1[10][10],mat2[10][10],product[10][10];
    printf("Enter the number of rows and columns for the 1st matrix:");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and columns for the 1st matrix:");
    scanf("%d %d",&r2,&c2);
    
    if(c1!=r2){
        printf("Not possible..!!");
        return 0;
    }

printf("Enter the elements of the 1st matrix:");
for(int i=0 ; i<r1 ; i++){
    for(int j=0 ; j<c1 ; j++){
        scanf("%d",&mat1[i][j]);
    }
}
printf("Enter the elements of the 2nd matrix:");
for(int i=0 ; i<r2 ; i++){
    for(int j=0 ; j<c2 ; j++){
        scanf("%d",&mat2[i][j]);
    }
}
printf("The products of the given matrices will be:\n");
for(int i=0 ; i<r1; i++){
    for(int j=0 ; j<c2 ; j++){
        product[i][j]=mat1[i][j]*mat2[i][j];
        
        printf("%d",product[i][j]);
    }
    printf("\n");
}
return 0;

} */
/* #include<stdio.h>
int main(){
    int r,c,mat[10][10],transpose[10][10];
    printf("Enter the number of rows and columns:");
    scanf("%d %d",&r,&c);

printf("Enter the elements of the 1st matrix:");
for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
        scanf("%d",&mat[i][j]);
    }
}


//transpose formule:--
for(int i=0 ; i<r ; i++){
    for(int j=0 ; i<c ; j++){
        transpose[j][i]=mat[j][i];
    }
}
printf("The transpose of the given matrices will be:\n");
for(int i=0 ; i<c ; i++){
    for(int j=0 ; j<r ; j++){
        
        
        printf("%d",transpose[i][j]);
    }
    printf("\n");
}

return 0;

} */
/* #include<stdio.h>

    int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int main(){
    int num;
    printf("Enter any number of your choice:");
    scanf("%d",&num);
    if(num<0){
        printf("fact of negative number is not possible..!!");
    }else{
        printf("The factorial of %d will be = %d",num,fact(num));

    }

    return 0;
    
} */
/* #include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("Enter the 1st number:");
    scanf("%d",&a);
    printf("Enter the 2nd number:");
    scanf("%d",&b);
    sum=a+b;
    printf("The addition of %d and %d will be = %d",a,b,sum);
}
 */
//coding for prime number..!!!
/* #include<stdio.h>
int main(){
    int n,i,prime=1;
    printf("Enter the number = ");
    scanf("%d",&n);

    if(n<2){
        prime=0;
    }else{

        for(i=2 ; i*i<=n ; i++){

            if(n%i==0){

                prime=0;
                break;
            }
        }
    }

if(prime){
    printf("The number is a prime number..!!!");
}else{
    printf("The number is NOT a prime number..!!!");
}
return 0;
} */
//code for prime number --
/* #include<stdio.h>
int main(){
    int n,i,prime=1;
    printf("Enter a number:");
    scanf("%d",&n);

    if (n<2){

        prime=0;

    }else{
        for(i=2;i*i<=n;i++){

            if(n%i==0){
                prime = 0;
                break;

            }
        }
    }

if(prime){
    printf("PRIME NUMBER..!!");
}else{
    printf("NOT PRIME..!!");
}

return 0;

} */
//prime number code with start end
/* #include<stdio.h>
int main(){

    int n,i,prime=1,start,end;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);

    for(n=start;n<=end;n++){
        prime=1;

        
    if(n<2){

        prime=0;

    }else{

        for(i=2;i*i<=n;i++){

            if(n%i==0){

                prime=0;
                break;
            }
        }

    }

if(prime){
    printf("%d",n);
}

}

return 0;

} */

/* #include<stdio.h>
int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    
    if(n%2==0){
        printf("The number entered is an even number..!!");
    }else{
        printf("The entered number is odd number..!!");
    }
    return 0;
}
 */
//argnstrom---------------------
/* #include<stdio.h>
int main(){
    int n,temp,rem,sum=0;

    printf("Enter any number:");
    scanf("%d",&n);

    temp = n;

    while(temp>0){
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==0){
        printf("ARNGSTROM..!!");
    
    }else{
        printf("NOT ARNGSTROM..!!");

    
    }
return 0;
} */
//factorial--
#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1){
        return 1;
    
    }else{
        return n*fact(n-1);
    }
}
int main(){
    int num;
    printf("Emter any number:");
    scanf("%d",&num);
    if(num<0){
        printf("not posible");
    
    }else{
        printf("The factorial will be of %d wil be = %d",num,fact(num));
    }
    return 0;
}



    



