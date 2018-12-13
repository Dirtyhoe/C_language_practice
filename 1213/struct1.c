#include "point.h"


struct point rec1 = {4, 5};
struct point rec2 = {2, 3};

void printPoint(Point* p){
	printf("x = %d, y = %d",p->x , p->y);
}

int getWidth(Point* p1, Point* p2){
	return abs(p1->x - p2_.x);
}

int getHeight(Point* p1, Point* p2){
	return abs(p1->y - p2->y);

}
