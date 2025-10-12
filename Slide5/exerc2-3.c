void Compra(int*conta,int valor);
void main(){
        int minhaConta1; int minhaConta2; int* p = 0;
        scanf("%d", &minhaConta1);
        scanf("%d", &minhaConta2);
        int compras[] = { 100, 50, 80, 30, 20 }; 
        for(int i = 0; i<5; i++)
                {
                        if(minhaConta1 > minhaConta2)
                        {
                                p = &minhaConta1;
                        }
                        else
                        {
                                p = &minhaConta2;
                        }
                        Compra(p, compras[i]);
                        printf("%d, %d\n", minhaConta1, minhaConta2);
                }
}
void Compra(int* conta, int valor)
{
        *conta -= valor;
}



