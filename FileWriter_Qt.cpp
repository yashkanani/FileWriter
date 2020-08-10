#pragma once
#include "FileWriter_Qt.h"
void  FileWrite(QString data) {
	QString filePath = QString(QStandardPaths::writableLocation(QStandardPaths::DesktopLocation)) + QString("/out.txt");

	QFile file(filePath);
	if (!file.open(QIODevice::Append | QIODevice::WriteOnly | QIODevice::Text))
		return;

	QTextStream out(&file);
	out << data;
	file.close();
}