#ifndef _DECODER_H
#define _DECODER_H

#include <iostream>
#include "opencv2/opencv.hpp"

using namespace std;
using namespace cv;

//宏定义六个信息的尺寸和左上角坐标
#define MESSAGE_SIZE 10

#define MESSAGE_LU_X 4
#define MESSAGE_LU_Y 0

#define MESSAGE_MU_X 28
#define MESSAGE_MU_Y 0

#define MESSAGE_RU_X 52
#define MESSAGE_RU_Y 0

#define MESSAGE_LD_X 4
#define MESSAGE_LD_Y 18

#define MESSAGE_MD_X 28
#define MESSAGE_MD_Y 18

#define MESSAGE_RD_X 52
#define MESSAGE_RD_Y 18

class Decoder
{
public:
	Decoder(void);
	~Decoder(void);

	int decode(Mat& img);

private:
	Mat srcImage;
	Mat preProcImage;

	bool messageLUStatus;
	bool messageMUStatus;
	bool messageRUStatus;
	bool messageLDStatus;
	bool messageMDStatus;
	bool messageRDStatus;
};
#endif //_DECODER_H