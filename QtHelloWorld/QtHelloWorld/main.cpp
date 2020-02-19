#include "QtHelloWorld.h"
#include <QtWidgets/QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtHelloWorld w;

	w.show();
	_CrtSetDbgFlag(_CrtSetDbgFlag(_CRTDBG_REPORT_FLAG) | _CRTDBG_LEAK_CHECK_DF);
	return a.exec();
}
