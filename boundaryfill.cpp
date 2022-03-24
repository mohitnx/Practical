#include<graphics.h>

#include<dos.h>  


void boundaryFill8(int x, int y, int fill_color,int boundary_color) 

{ 

    if(getpixel(x, y) != boundary_color && 

       getpixel(x, y) != fill_color) 

    { 

        putpixel(x, y, fill_color); 

        boundaryFill8(x + 1, y, fill_color, boundary_color); 

        boundaryFill8(x, y + 1, fill_color, boundary_color); 

        boundaryFill8(x - 1, y, fill_color, boundary_color); 

        boundaryFill8(x, y - 1, fill_color, boundary_color); 

        boundaryFill8(x - 1, y - 1, fill_color, boundary_color); 

        boundaryFill8(x - 1, y + 1, fill_color, boundary_color); 

        boundaryFill8(x + 1, y - 1, fill_color, boundary_color); 

        boundaryFill8(x + 1, y + 1, fill_color, boundary_color); 

    } 

}  

int main() 

{ 

    int gd = DETECT, gm; 

    initgraph(&gd, &gm, "c:\\Turboc3\\bgi");   

    // Rectangle function 

    rectangle(50, 50, 100, 100);   //x,y and x1,y1
	//lrectangle(int left, int top, int right, int bottom); left =x cordinate of top left, top= y coordinate of top left, right - x cordinate of right bottom, bottom = y coordinate of right botoom

    // Function calling 

    boundaryFill8(55, 55, 4, 15);   
//x,y,fill color,boundary color
    delay(10000);   

    getch();   

/*closegraph function closes the graphics mode and deallocates all memory allocated by graphics system .*/ 

    closegraph(); 

}  
