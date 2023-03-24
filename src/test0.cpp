#include <stdio.h>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv) {
	printf("This test0.\n");

	cv::Mat img = cv::imread("../IMG_4113.JPG", 1);
	cv::Mat imgResize;

	int rate = 5;

	cv::resize(img, imgResize, cv::Size(img.cols/rate, img.rows/rate));


	cv::imshow("test", imgResize);
	cv::waitKey(0);

	return 0;
}
