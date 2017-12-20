/*
## 创建标识：第五届全国大学生物联网大赛人脸识别demo

## 创建时间：2017-12-20

## 函数功能描述：人脸识别控件

## 开发环境
[Windows10+VS2015+Qt5.6+opencv2.4.11]
**开发语言C++**
**编译环境x64**

## 环境配置
**配置opencv2.4.11的环境**
**配置Qt5.6+VS2015的环境**
**项目属性-链接器-输入-附加依赖项 需要添加相关lib文件

## 技术支持
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
