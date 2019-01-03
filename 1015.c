#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

typedef struct {
    int id;
    int de,cai;
} stu;

int cmp(const void *a,const void * b){
    stu *s,*t;
    int fs,ft;
    s=(stu *)a;
    t=(stu *)b;
    fs=s->de+s->cai;
    ft=t->de+t->cai;
    if(fs!=ft)
        return ft-fs;
    else if(s->de!=t->de)
        return t->de-s->de;
    else return s->id-t->id;
}

void printlevel(stu s[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d %d %d\n",s[i].id,s[i].de,s[i].cai);
}


int main(){
    int n,l,h,j,i1,i2,i3,i4;
    stu t,level1[MAX],level2[MAX],level3[MAX],level4[MAX];
    i1=i2=i3=i4=0;
    scanf("%d %d %d",&n,&l,&h);
    for(j=0;j<n;j++){
        scanf("%d %d %d",&t.id,&t.de,&t.cai);
        if(t.de>=l&&t.cai>=l){
            if(t.de>=h&&t.cai>=h)
                level1[i1++]=t;
            else if(t.de>=h)
                level2[i2++]=t;
            else if(t.de>=t.cai)
                level3[i3++]=t;
            else  level4[i4++]=t;
        }
    }
    qsort(level1,i1,sizeof(stu),cmp);
    qsort(level2,i2,sizeof(stu),cmp);
    qsort(level3,i3,sizeof(stu),cmp);
    qsort(level4,i4,sizeof(stu),cmp);
    printf("%d\n",i1+i2+i3+i4);
    printlevel(level1,i1);
    printlevel(level2,i2);
    printlevel(level3,i3);
    printlevel(level4,i4);
    return 0;
}
