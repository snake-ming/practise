#include<stdio.h>
#define i 30
int sum(int k);
int a[i];
void main()
{
    int n,s,arv,m,l,w,b,e,f,h,x,d;
    printf("输入分数\n");
    for(n=0;n<30;n++)//人数改变，方便验证。
        {

            printf("学号:%d\n",n+1);
            scanf("%d",&a[n]);
            if(a[n]<0)
                break;
            else
                continue;
        }
    s=sum(30);//
    arv=s/30;//
    printf("平均分:%d\n",arv);
    m=0;
    for(l=0;l<30;l++)//人数改变，方便验证。
    {
        if(a[l]<60)
            {
                m++;
                printf("不及格:%d,  num:%d\n",a[l],l+1);
            }
        else
            continue;
    }
    printf("   不及格人数:%d\n",m);
    w=0;
    for(b=0;b<30;b++)//人数改变，方便验证。
    {
        if(a[b]>=arv)
            {
                w++;
                printf("平均分以上的分数:%d,  num:%d\n",a[b],b+1);
            }
        else
            continue;
    }
    printf("   平均分以上的人数:%d\n",w);
    e=f=h=x=0;
    for(d=0;d<30;d++)//
    {
        switch(a[d]/10)
        {
            case 10:
            case 9: e++; break;
            case 8: f++; break;
            case 7: h++; break;
            case 6: x++; break;
        }
    }
    float q,o,p,t,j;
    q=(e*100)/30;
    o=(f*100)/30;
    p=(h*100)/30;
    t=(x*100)/30;
    j=(m*100)/30;
    printf("90分以上:%d,  所占百分比:%f%%\n",e,q);
    printf("80分以上:%d,  所占百分比:%f%%\n",f,o);
    printf("70分以上:%d,  所占百分比:%f%%\n",h,p);
    printf("60分以上:%d,  所占百分比:%f%%\n",x,t);
    printf("60分以下:%d,  所占百分比:%f%%\n",m,j);
}
int sum(int k)
{
    int g,c;
    c=0;
    for(g=0;g<k;g++)
    {
        c=c+a[g];
    }
    return c;
}
