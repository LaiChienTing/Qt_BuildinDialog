#ifndef CBUILDINDLG_H
#define CBUILDINDLG_H

#include <QDialog>
#include <QPushButton>
#include <QTextEdit>
#include <QtPrintSupport/qprinter.h>
#include <QtPrintSupport/qpagesetupdialog.h>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrintPreviewDialog>

class CBuildinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuildinDlg(QWidget *parent = nullptr);
    ~CBuildinDlg();
private:
    QTextEdit   *displayTextEdit;
    QPushButton *colorPushBtn;
    QPushButton *errorPushBtn;
    QPushButton *filePushBtn;
    QPushButton *fontPushBtn;
    QPushButton *inputPushBtn;
    QPushButton *pagePushBtn;
    QPushButton *progressPushBtn;
    QPushButton *printPushBtn;
    QPushButton *textPushBtn;

private slots:
    void doPushBtn();
    void doTextcolor();
};
#endif // CBUILDINDLG_H
