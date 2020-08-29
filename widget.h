#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    int step = 0; //number of steps
    QString filePath;
    QString dirPath;
    QString imageName;
    void unpack();
    void pack();
    QString ctrl_Package;
    QString ctrl_Version;
    QString ctrl_Architecture;
    QString ctrl_Description;
    void dragEnterEvent(QDragEnterEvent *event);
    void dropEvent(QDropEvent *event);
    QString file_icon;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_checkBox_clicked(bool checked);

private:
    Ui::Widget *ui;

};

#endif // WIDGET_H
