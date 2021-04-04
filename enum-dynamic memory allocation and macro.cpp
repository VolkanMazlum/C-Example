enum ay {
	oca = 1,sub,mar,nis,may,haz,tem,agu,eyl,ekm,kas,ara
};


#include <stdio.h>
#include <stdlib.h>
#define TOPLAM_AY(ay1,ay2) ((ay1)+(ay2))
#define KONTROL_MEVSIM(ay1) ((ay1)>3) && ((ay1)<6)  ? 1 : 0    //onislemci kullanimi
                       
int main(void) {
	enum ay buAy;
	int *arr;
	scanf_s("%d", &buAy);    
	if (buAy == mar || buAy == nis || buAy == may)   //enum kullanimi
		printf("Ay = %d Bahar Mevsimi. \n", buAy);

	int ay;
	ay = TOPLAM_AY(buAy,may);

	printf(" %d. Ay \n", ay);

	int kontrol= KONTROL_MEVSIM(buAy);                       //onislemci kullanimi
	if (kontrol == 1) {
		printf("Mevsim Ilkbahar.\n");
	}
	else
		printf("Mevsim Ilkbahar degil.\n");



	arr = (int*)malloc(sizeof(int));      //malloc
	*arr = 45;
	printf("Arr: %d\n", *arr);

	arr = (int*)calloc(20, sizeof(int));    //calloc array olustumak icin
	*(arr + 1) = 44;
	printf("Arr_Array: %d", arr[1]);

	
	free(arr);
	return(0);
}