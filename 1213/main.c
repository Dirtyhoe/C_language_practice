#include <stdio.h>
#include "rectangle.h"

int main (){
	Point p1 = {3,4};
	Point p2 = {2,3};

	Rectangle rec;
	
	printf("rectangle r's point(x,y) : ");
	//scanf("%d %d", &rec.a.x, &rec.*(a).y);
	//scanf("%d %d", &rec.b.x, &rec.b.y);
	setPointA(&rec, &p1);
	printf("\n");
	setPointB(&rec, &p2);
	
	printRectPoint(&rec);

	printf("\n");
	printf("rectangle r's area : ");
	printf("%d",getArea(&rec));
	printf("\n");
	printf("rectangle r's width : ");
	printf("%d",getWidth(&p1, &p2));
	printf("\n");
	printf("rectangle r's isSqaure? : ");
	
	return 0;
}
