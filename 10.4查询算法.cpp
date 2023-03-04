#include <stdio.h>
#define MaxSize 50
typedef int ElemType;//让顺序表存储其他类型的元素时，方便改写 
typedef struct{
	ElemType data[MaxSize];
	int length;
}sqlList;
 
int ListQuery(sqlList &L,ElemType elemtype){
	for(int i=0;i<L.length;i++){
		if(L.data[i]==elemtype){
			return i+1;
		}
	}
} 

////打印顺序表
//void printList(sqlList &L){
//    for(int i =0;i<L.length;i++){
//    	printf("%d",L.data[i]);
//	}	
//} 
int main(){
	sqlList L;
	int ret;
	L.data[0]=1;
	L.data[1]=2;
	L.data[2]=3;
	L.length=3;//设置长度 
	ret=ListQuery(L,2);
	if(ret!=NULL){
		printf("Query success!!\n");
		printf("该元素在 %d位置",ret);
	}else{
	printf("Query false");
}
	return 0;
}
