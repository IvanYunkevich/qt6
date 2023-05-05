#ifndef THREAD_H
#define THREAD_H

#include <QThread>

class myThread : public QThread
{
    Q_OBJECT
public:
    explicit myThread();

    void run();

public slots:
    void receiveGlobalVar(QString, QString, bool);

signals:
    void send(QString, bool);

private:
    QString path;
    QString t_filename;

    bool singleton_crutch;
    QString result;
};

#endif // THREAD_H
