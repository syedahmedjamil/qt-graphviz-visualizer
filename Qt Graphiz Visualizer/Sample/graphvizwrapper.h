#ifndef GRAPHVIZWRAPPER_H
#define GRAPHVIZWRAPPER_H

#include "MainWindow.h"
#include <map>

namespace Ui {
class MainWindow;
}

class GraphvizWrapper
{

public:
    GraphvizWrapper()
    {
        mw.show();
    }
    void addNode(QString lable , int frequency)
    {
        QGVNode* newNode = mw._scene->addNode(lable , frequency);
        nodeTable.insert(std::pair<QString,QGVNode*>(lable,newNode));
    }
    void addEdge(QString node1 , QString node2 , int weight)
    {
        mw._scene->addEdge(nodeTable[node1],nodeTable[node2],QString::number(weight));
    }

    void addGraphAttribute(QString name , QString value)
    {
        mw._scene->setGraphAttribute(name, value);
    }
    void addNodeAttribute(QString name , QString value)
    {
        mw._scene->setNodeAttribute(name, value);
    }
    void draw()
    {
        mw._scene->applyLayout();
        mw.FitAndChangeShapeToRect();
    }

private:
    MainWindow mw;
    std::map<QString,QGVNode*> nodeTable;

};

#endif // GRAPHVIZWRAPPER_H
