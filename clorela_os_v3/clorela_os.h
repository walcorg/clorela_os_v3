#ifndef CLORELA_OS_H
#define CLORELA_OS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Clorela_OS; }
QT_END_NAMESPACE

class Clorela_OS : public QMainWindow
{
    Q_OBJECT

public:
    Clorela_OS(QWidget *parent = nullptr);
    ~Clorela_OS();

private:
    Ui::Clorela_OS *ui;
};
#endif // CLORELA_OS_H
