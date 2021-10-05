#include "MainKodi.h"
#include "./ui_MainKodi.h"

MainKodi::MainKodi(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MainKodi)
{
    ui->setupUi(this);
}

MainKodi::~MainKodi()
{
    delete ui;
}

