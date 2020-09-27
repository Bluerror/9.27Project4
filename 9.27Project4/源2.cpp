#include <opencv2/opencv.hpp>
using namespace cv;
int main()
{
	cv::Mat scr_color = imread("D:\\1.png");
	cv::Point pt;
	cv::Mat dispMat;
    dispMat.create(Size(5000, 5000), CV_8UC3);
	pt.x = 500;
	pt.y = 400;
	circle(dispMat, pt, 350, CV_RGB(255, 0, 0), 1, 8, 0);
	cv::imshow("scr", dispMat);
	waitKey(0);
	return 0;
}