#include <iostream>
#include <opencv2\opencv.hpp>
#include <fstream>
#include <string>
#include <errno.h>
#include <direct.h>
#include <ctime>
#include <string>
#include <chrono>
/*---------------------------------------------------------------------*/
#include "CAC.h"

int main(int argc, char *argv[]) {


	cv::Mat src = cv::imread(".\\imgs\\original.bmp", cv::IMREAD_COLOR);
	cv::Mat dst;

	CACorrection(src, dst);

	cv::imshow("original", src);
	cv::imshow("result", dst);
	

	cv::imwrite(".\\imgs\\result.bmp", dst);

	cv::waitKey(0);
	cv::destroyAllWindows();

	return 0;
}