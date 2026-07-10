#include <iostream>
#include <string>
#include <vector>

#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
	std::cout << "test" << std::endl;
	/*
	cv::Mat img(480, 640, CV_8UC3);
	cv::Rect rect(10, 10, 500, 300);
	cv::rectangle(img, rect, cv::Scalar(200, 0, 0), 2, cv::LINE_8);
	std::string message = "Hello, World!!!";
	int fontFace = cv::FONT_HERSHEY_TRIPLEX | cv::FONT_ITALIC;
	cv::putText(img, message, { 10, 60 }, fontFace, 2, { 200, 0, 0 }, 1, cv::LINE_AA);
	cv::imshow("test", img);
	//*/

	/*
	cv::Mat frame;
	cv::VideoCapture video(0);
	if (video.isOpened())
	{
		while (video.read(frame))
		{
			cv::Rect rect(10, 10, 500, 300);
			cv::rectangle(frame, rect, { 0, 200, 0 }, 2, cv::LINE_8);
			std::string message = "Hello, World!!!";
			int fontFace = cv::FONT_HERSHEY_TRIPLEX | cv::FONT_ITALIC;
			cv::putText(frame, message, { 10, 60 }, fontFace, 2, { 0, 0, 255 }, 1, cv::LINE_AA);
			cv::imshow("test", frame);
			cv::waitKey(40);
		}
	}
	else
	{
		std::cout << "Error" << std::endl;
	}
	//*/

	cv::Mat pic = cv::imread("pic3.png");
	cv::imshow("test1", pic);
	cv::waitKey(0);
	cv::Mat picGray;
	//cv::cvtColor(pic, picGray, cv::COLOR_BGR2GRAY);
	std::vector<cv::Mat> channels;
	cv::split(pic, channels);

	picGray = channels[0];
	cv::blur(picGray, picGray, cv::Size(5, 5));
	cv::imshow("test blue", picGray);
	picGray = channels[2];
	cv::blur(picGray, picGray, cv::Size(5, 5));
	cv::imshow("test red", picGray);
	picGray = channels[1];
	cv::blur(picGray, picGray, cv::Size(5, 5));
	cv::imshow("test green", picGray);

	cv::Mat result;
	cv::Canny(picGray, result, 100, 200);
	std::vector<std::vector<cv::Point>> contours;
	cv::findContours(result, contours, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);
	std::vector<std::vector<cv::Point>> contoursPoly(contours.size());
	std::vector<cv::Rect> boundRects(contours.size());
	std::vector<cv::Scalar> colors = { {255, 0, 0}, {0, 255, 0}, {0, 0, 255} };
	int k = 0;
	for (int i = 0; i < contours.size(); i++)
	{
		cv::approxPolyDP(contours[i], contoursPoly[i], 3, true);
		boundRects[i] = cv::boundingRect(contoursPoly[i]);
		cv::Scalar color = colors[k++];
		if (k == colors.size()) k = 0;
		/*
		for (int j = 1; j < contoursPoly[i].size(); j++)
		{
			cv::line(pic, contoursPoly[i][j - 1], contoursPoly[i][j], color, 1, cv::LINE_AA);
		}
		*/
		cv::rectangle(pic, boundRects[i], {0, 0, 0}, 2, cv::LINE_8);
	}
	cv::imshow("test2", pic);

	cv::waitKey(0);
	return 0;
}
