#include <stdio.h>
#define MaxSize 50
typedef int ElemType;//��˳���洢�������͵�Ԫ��ʱ�������д 
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

////��ӡ˳���
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
	L.length=3;//���ó��� 
	ret=ListQuery(L,2);
	if(ret!=NULL){
		printf("Query success!!\n");
		printf("��Ԫ���� %dλ��",ret);
	}else{
	printf("Query false");
}
	return 0;
}
