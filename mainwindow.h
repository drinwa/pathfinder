#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

#include "xmlsyntaxhighlighter.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_actionOpen_triggered();

    void on_actionExit_triggered();

    void on_actionPreferences_triggered();

    void on_tabOpenDocs_tabCloseRequested(int index);

    void updateDefaultHighlighter();

    void on_tabOpenDocs_currentChanged(int index);

private:
    Ui::MainWindow *ui;

    int tabCount;

    std::unique_ptr<XmlSyntaxHighlighter> highlighter;
};

#endif // MAINWINDOW_H
