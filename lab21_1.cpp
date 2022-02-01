#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A, Rect B){
	double max_X = max(A.x,B.x);
	double min_X = min(A.x+A.w,B.x+B.w);
	double min_Y = min(A.y,B.y);
	double max_Y = max(A.x-A.h,B.x-B.h);
	double overlap_X = min_X-max_X;
	double overlap_Y = min_Y-max_Y;
	if(overlap_X <= 0 || overlap_Y <= 0)
		return 0;
	return overlap_X*overlap_Y;
}


