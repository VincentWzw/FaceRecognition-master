/*
## ������ʶ�������ȫ����ѧ����������������ʶ��demo

## ����ʱ�䣺2017-12-20

## ������������������ʶ��ؼ�

## ��������
[Windows10+VS2015+Qt5.6+opencv2.4.11]
**��������C++**
**���뻷��x64**

## ��������
**����opencv2.4.11�Ļ���**
**����Qt5.6+VS2015�Ļ���**
**��Ŀ����-������-����-���������� ��Ҫ������lib�ļ�

## ����֧��
(http://www.greenorbs.com/)
*/

#include "FaceRecognition.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FaceRecognition w;
	w.show();
	return a.exec();
}
