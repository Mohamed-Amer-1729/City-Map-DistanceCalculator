#ifndef GRAPH_H
#define GRAPH_H
#include <QString>
#include <QVector>
#include <QObject>
#include <QMap>
#include <QPair>
#include <QFile>
#include <QTextStream>
#include <QGraphicsEllipseItem>
class Node : public QObject, public QGraphicsEllipseItem{
    Q_OBJECT
public:
    QString name;
};
class graph
{
public:
    QMap<QString,QVector<QPair<QString,double>>*> my_graph;
    graph();
    bool exists(QString name);
    void addcity(QString name);
    void dcity(QString name);
    double getweight(QString name1, QString name2);
    void connectcities(QString name1, QString name2, double weight);
    QVector<QString>* findpath(QString src, QString des);
    QFile data;
};

#endif // GRAPH_H
