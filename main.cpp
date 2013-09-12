#include <QProcess>

int main(int argc, char *argv[])
{
    QProcess *myProcess = new QProcess;
    myProcess->start("alarmeditorapp.exe");
    return 1;
}
