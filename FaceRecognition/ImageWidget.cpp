/*
## 创建标识：第五届全国高校物联网应用创新大赛（命题赛）人脸识别demo

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

#include "ImageWidget.h"

ImageWidget::ImageWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	ui.removeButton->setIcon(QIcon("icon\\cross.png"));
	ui.removeButton->setIconSize(QSize(30, 30));
	ui.removeButton->setFixedSize(ui.removeButton->iconSize());
	ui.removeButton->setFlat(true);
}

ImageWidget::~ImageWidget()
{
}

void ImageWidget::setPixmap(QPixmap& pixmap)
{

	QSize qImageSize = pixmap.size();
	QSize qLabelSize = ui.label->size();
	double dWidthRatio = 1.0*qImageSize.width() / qLabelSize.width();
	double dHeightRatio = 1.0*qImageSize.height() / qLabelSize.height();
	if (dWidthRatio > dHeightRatio)
	{
		pixmap = pixmap.scaledToWidth(qLabelSize.width());
	}
	else
	{
		pixmap = pixmap.scaledToHeight(qLabelSize.height());
	}

	ui.label->setPixmap(pixmap);
	ui.label->setAlignment(Qt::AlignCenter);
	ui.label->show();
}

void ImageWidget::setText(QString qstring)
{
	text = qstring;
}

QPushButton* ImageWidget::getRemoveBtn()
{
	return ui.removeButton;
}

