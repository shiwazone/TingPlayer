#include "TingPlayer.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TingPlayer w;
	w.show();
	return a.exec();
}
