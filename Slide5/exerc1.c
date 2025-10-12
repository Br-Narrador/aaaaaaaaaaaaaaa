void main(){
        int a; int b; int* p = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        if(a>b)
        {
                p = &a;
        }
        else
        {
                p = &b;
        }
        *p -= 50;
        printf("%d\n", *p);

}
