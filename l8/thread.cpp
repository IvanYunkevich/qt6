#include "thread.h"
#include <windows.h>
#include <QDebug>
#include <QDirIterator>

myThread::myThread()
{

}

void myThread::run()
{
    if(path != "" && t_filename != "")
    {
        QDirIterator it(path, QStringList() << t_filename, QDir::Files, QDirIterator::Subdirectories);

            while (it.hasNext())
            {
                break;
            }
            singleton_crutch = true;
            emit send(it.next(), singleton_crutch);
    }else
    {
        singleton_crutch = true;
        result = "Введите имя файла";
        emit send(result, singleton_crutch);
    }
}

void myThread::receiveGlobalVar(QString path_, QString filename_, bool singleton_crutch_)
{
    qDebug() << path_;
    qDebug() << filename_;

    this->singleton_crutch = singleton_crutch_;
    this->path = path_;
    this->t_filename = filename_;
}
