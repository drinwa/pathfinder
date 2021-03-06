#ifndef XPATHVIEWER_H
#define XPATHVIEWER_H

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QtXmlPatterns/QXmlQuery>
#include <QTextStream>
#include <QVBoxLayout>

#include "xmlsyntaxhighlighter.h"

class XPathViewer : public QWidget
{
    Q_OBJECT
public:
    explicit XPathViewer(QTextStream & input, XmlSyntaxHighlighter* highlighter, QWidget *parent = 0);
    virtual ~XPathViewer();
    void takeHighlighterFocus();
    void takeNewHighlighter(XmlSyntaxHighlighter* newHighlighter);
signals:
    
public slots:
    void highlightQueryResults(QString const& text);
private:
    QLineEdit* txtXPath;
    QTextEdit* txtXDoc;
    QVBoxLayout* mainLayout;
    XmlSyntaxHighlighter* highlighter;

    QXmlQuery query;

};

#endif // XPATHVIEWER_H
