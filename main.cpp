# include <iostream>
using namespace std;
void  ingresarArr(int a[], int n);
void  imprimir(int a[],int b[], int n);


int  main()
{

    int a[100], b [100];
    int n;
    cout << " ingrese el tamanio: ";
    cin >> n;
    ingresarArr(a, n);
    cout << endl;
    imprimir(a, b, n);
    cout << endl;
    return  0;
}
void ingresarArr(int a[], int n)
{
    int i, x=0;
    for (i = 0; i < n; i++)
    {
        cout << " Ingrese el valor para la posicion: " <<x++ <<  endl;
        cin >> a[i];
    }
}
void  imprimir(int a[], int b[], int n)
{
    int i, j=0 ,c=0;
    for  (i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            b[j] = a[i];
            j++;
            c++;
        }
    }
    cout << "los valores pares son: " << endl;
    for(i = 0; i < c; i++)
    {
        cout << "posicion: "<< i << " = "<<  b[i] << endl;
    }
}