#include <stdio.h>
#define MaxSize 50
typedef int ElemType;//��˳���洢�������͵�Ԫ��ʱ�������д 
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

//��ӡ˳���
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
	L.length=3;//���ó��� 
	ret=ListInser(L,2,60);
	if(ret){
		printf("insert success!!\n");
		printList(L);
	}else{
	printf("insert false");
}
	return 0;
}
