#include "clorela_os.h"
#include "ui_clorela_os.h"

Clorela_OS::Clorela_OS(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Clorela_OS)
{
    ui->setupUi(this);
}

Clorela_OS::~Clorela_OS()
{
    delete ui;
}

