#include <stdio.h>
#define MaxSize 50
typedef int ElemType;//让顺序表存储其他类型的元素时，方便改写 
typedef struct{
	ElemType data[MaxSize];
	int length;
}sqlList;

bool ListInser(sqlList &L,int pos,ElemType element){
	if(pos<1||pos>=L.length||pos>=MaxSize){
		return false;
	}else{
		for(int i=L.length;i>=pos;i--){
			L.data[i]=L.data[i-1];
		}
		L.data[pos-1]=element;	
		L.length++;
		return true;
	}
} 


bool ListDelete(sqlList &L,int pos){
	if(pos<1||pos>L.length||pos>=MaxSize){
		return false;
	}else{
		for(int i=pos-1;i<L.length;i++){
			L.data[i]=L.data[i+1];
		}	
		L.length--;
		return true;
	}
} 

//打印顺序表
void printList(sqlList &L){
    for(int i =0;i<L.length;i++){
    	printf("%3d",L.data[i]);
	}
	printf("\n");	
} 
int main(){
	sqlList L;
	bool ret1,ret2;
	L.data[0]=1;
	L.data[1]=2;
	L.data[2]=3;
	L.length=3;//设置长度 
    ElemType n;
    scanf("%d",&n);
	ret1=ListInser(L,2,n);
	if(ret1){
		printList(L);
	}else{
	printf("false");     
}
    ElemType m;
    scanf("%d",&m);
  	ret2=ListDelete(L,m);
	if(ret2){
		printList(L);
	}else{
	printf("false");
    }
	return 0;
}
