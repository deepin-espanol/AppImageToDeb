#include "mainwindow.h"
#include <DApplication>
#include <DWidgetUtil>  //Dtk::Widget::moveToCenter(&w); To call it, you have to reference DWidgetUtil.
#include <DAboutDialog>

DWIDGET_USE_NAMESPACE
int main(int argc, char *argv[])
{
    DApplication::loadDXcbPlugin();  //Put the bar in the title bar
    DApplication a(argc, argv);
    DAboutDialog dialog;

     a.loadTranslator();  
     a.setAttribute(Qt::AA_UseHighDpiPixmaps);
     a.setProductName("AppImageToDeb");
     a.setApplicationName("AppImageToDeb");//It only works if you change the window title here.
     a.setAboutDialog(&dialog);

     //Title
     dialog.setWindowTitle("AppImageToDeb");
     //descritcion
     dialog.setProductName("<span>Tool to convert Appimage to deb, allows to build deb packages with Appimage.</span>");
     //icons
     dialog.setProductIcon(QIcon("://builder.png"));
     dialog.setCompanyLogo(QPixmap("://Logo-Racoon.png"));
     //about
     dialog.setDescription(
         "<span style=' font-size:8pt; font-weight:600;'>Deepin en Español </span>"
         "<a href='https://deepinenespañol.org'>https://deepinenespañol.org</a><br/>"
         "<span style=' font-size:8pt; font-weight:600;'>Deepin Latin Code - developers</span>");
     dialog.setVersion(DApplication::buildVersion("0.7+deepines"));
     dialog.setWebsiteName("deepinenespañol.org");
     dialog.setWebsiteLink("https://deepinenespañol.org");
    MainWindow w;
    w.show();

    //Make the interface appear centered when opening
    Dtk::Widget::moveToCenter(&w);


    return a.exec();
}
