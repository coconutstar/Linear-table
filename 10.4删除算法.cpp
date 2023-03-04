#include <stdio.h>
#define MaxSize 50
typedef int ElemType;//让顺序表存储其他类型的元素时，方便改写 
typedef struct{
	ElemType data[MaxSize];
	int length;
}sqlList;

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
    	printf("%d",L.data[i]);
	}	
} 
int main(){
	sqlList L;
	bool ret;
	L.data[0]=1;
	L.data[1]=2;
	L.data[2]=3;
	L.length=3;//设置长度 
	ret=ListDelete(L,3);
	if(ret){
		printf("Delete success!!\n");
		printList(L);
	}else{
	printf("Delete false");
}
	return 0;
}
