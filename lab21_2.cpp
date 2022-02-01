#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *A,Rect *B){
	double XA,YA;
	XA = A->x + A->w;
	YA = A->y - A->h;
	double XB,YB;
	XB = B->x + B->w;
	YB = B->y - B->h;

    double a,b,c,d;

	if(A->x == B->x){
		a = 0;
	}else if(A->x > B->x){
	       a = A->x;
	    }else{
		     a = B->x;
	    }

	if(XA == XB){
		b = 0;
	}else if(XA < XB){
		  b = XA;
	   }else{
		  b = XB;
	   }
    
	if(A->x == B->y){
		c = 0;
	}else if(A->y < B->y){
	    c = A->y;
	}else{
		c = B->y;
	}
    
	if(XA == XB){
	    d = 0;
	}else if(YA < YB){
		d = YB;
	}else{
		d = YA;
	}
    double answer;
	if(a < b && d < c){
		answer = (b-a)*(c-d);
		if(answer < 0) answer = -answer;
		return answer;
	}else{
		return 0;
	}

}
