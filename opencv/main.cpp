
#include <iostream>

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;
//int main() {
//    Mat src;
////    src = imread("/Users/xiaoxiao 1/CLionProjects/test/1.png");
//    src = imread("../1.png");
//    IplImage* img =  cvLoadImage("../1.png", CV_LOAD_IMAGE_COLOR);
//
//    if (src.empty()) {
//
//        printf("load image error!\n");
//    }
//    namedWindow("src", CV_WINDOW_AUTOSIZE);
//    cvDestroyWindow("src");
//    imshow("src", src);
//
//    Mat dst;
//    cvtColor(src, dst, CV_BGR2GRAY);
//    namedWindow("dst", CV_WINDOW_AUTOSIZE);
//    imshow("dst", dst);
//    imwrite("D:test.png", dst);
//
//    waitKey(0);
//    return 0;
//}


int main(){
    cvNamedWindow("../1.png", 1);

    IplImage* img = cvLoadImage("../1.png");

    cvShowImage("../1.png", img);

    while(1){
        if(cvWaitKey(100) == 27)
            break;
    }

    cvDestroyWindow("../1.png");
    cvReleaseImage(&img);
    exit(0);



}