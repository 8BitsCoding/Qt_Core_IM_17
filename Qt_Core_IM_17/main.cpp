#include <QtCore/QCoreApplication>

#include <qiodevice.h>
#include <qdir.h>
#include <qfile.h>
#include <qstring.h>
#include <qbytearray.h>
#include <qdebug.h>

bool put(QString path, QByteArray data, QIODevice::OpenMode mode) {
	
}

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);



	return a.exec();
}
