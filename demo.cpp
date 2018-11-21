#include <stdio.h> 
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace std;
using namespace cv;
int main() {
    Mat mat(100, 100, CV_8UC3);
    mat.setTo(255);
    printf("hello world! \n");
    imwrite("/sdcard/helloworld.jpg", mat);
    return 1;
}
