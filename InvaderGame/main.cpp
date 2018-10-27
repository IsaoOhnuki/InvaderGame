#include "stdafx.h"
#include "invadergame.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	InvaderGame w;
	w.show();
	return a.exec();
}
