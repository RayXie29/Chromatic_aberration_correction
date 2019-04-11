#pragma once
#include <opencv2\opencv.hpp>

void rmCA(std::vector<cv::Mat> &bgrVec, int threshold);
void CACorrection(cv::Mat &Src, cv::Mat &Dst);