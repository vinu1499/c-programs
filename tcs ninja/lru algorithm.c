
#include<stdio.h>
void main()
{
int q[20],p[50],c=0,c1,d,f,i,j,k=0,n,r,t,b[20],c2[20];

scanf("%d",&n);

for(i=0;i<n;i++)
            scanf("%d",&p[i]);

scanf("%d",&f);
q[k]=p[k];

c++;
k++;
for(i=1;i<n;i++){
        c1=0;
        for(j=0;j<f;j++){
                if(p[i]!=q[j])
                    c1++;
            }
            if(c1==f){
                c++;
                if(k<f){
                    q[k]=p[i];
                    k++;
                }
                else{
                    for(r=0;r<f;r++){ 
                        c2[r]=0;
                        for(j=i-1;j<n;j--){
                            if(q[r]!=p[j])
                            c2[r]++;
                            else
                            break;
                        }
                    }
                    for(r=0;r<f;r++)
                         b[r]=c2[r];
                         for(r=0;r<f;r++){
                                for(j=r;j<f;j++){
                                    if(b[r]<b[j]){
                                        t=b[r];
                                        b[r]=b[j];
                                        b[j]=t;
                                    }
                                }
                        }
                    for(r=0;r<f;r++){
                        if(c2[r]==b[0])
                        q[r]=p[i];
                    }
                                  
                }
            }
    }
printf("%d",c);
}
