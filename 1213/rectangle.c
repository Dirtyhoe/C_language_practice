#include "rectangle.h"
#include <stdio.h>
#include "point.h"


void setPointA(Rectangle* r, Point* p){
	r->a=p;
}
void setPointB(Rectangle* r, Point* p){
	r->b=p;
}

void printRectPoint(Rectangle* r){
	printPoint(r->a);
	printf("\n");
	printPoint(r->b);
}

int getArea(Rectangle* r){
	return getWidth(r->a, r->b)*getHeight(r->a, r->b);
}

int getPerimeter(Rectangle* r){
	return (getWidth(r->a, r->b)*2)+(getHeight(r->a, r->b)*2);
}

int isSquare(Rectangle* r){
	return (getWidth(r->a, r->b) == getHeight(r->a, r->b)? 1 : 0);
}

Rectangle* getBiggestRec(Rectangle* rects, int size){
}
