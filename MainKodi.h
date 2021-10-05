#ifndef MAINKODI_H
#define MAINKODI_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class MainKodi; }
QT_END_NAMESPACE

class MainKodi : public QWidget
{
    Q_OBJECT

public:
    MainKodi(QWidget *parent = nullptr);
    ~MainKodi();

private:
    Ui::MainKodi *ui;
};
#endif // MAINKODI_H
