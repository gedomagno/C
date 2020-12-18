/*Algoritmo por insercion*/

void insercion (int n){
    int i,k,x;
    for (i=0;i<n;i++){
        x=m[i];
        k=i-1;
        while(k>=0 && x<m[k])
        {
            m[k+1]=m[k];
            k--;

        }
        m[k+1]=x;
        }
    }


