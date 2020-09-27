//#include <opencv2/opencv.hpp>
//using namespace cv;
//int main()
//{
//	cv::Mat scr_color = imread("D:\\1.png");
//	cv::imshow("original Mat", scr_color);
//	std::vector<cv::Mat> channels;
//	cv::split(scr_color, channels);
//	cv::Mat B = channels.at(0);
//	cv::Mat G = channels.at(1);
//	cv::Mat R = channels.at(2);
//	cv::imshow("red", R);
//	cv::imshow("green", G);
//	cv::imshow("blue", B);
//	cv::imshow("original Mat", scr_color);
//	waitKey(0);
//	return 0;
//
//}