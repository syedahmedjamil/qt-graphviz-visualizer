/***************************************************************
QGVCore Sample
Copyright (c) 2014, Bergont Nicolas, All rights reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 3.0 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library.
***************************************************************/
#include "graphvizwrapper.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GraphvizWrapper graph;

    //Add Nodes Like This
    graph.addNode("Qt" , 4);
    graph.addNode("QML" , 23);
    graph.addNode("C#" , 54);
    graph.addNode("C++" , 77);
    graph.addNode("Java" , 22);
    graph.addNode("Python" , 78);
    graph.addNode("Scala" , 78);
    graph.addNode("Swift" , 78);

    //Add Edges Like This
    graph.addEdge("Qt","C#",222);
    graph.addEdge("Qt","QML",123);
    graph.addEdge("QML","C++",400);
    graph.addEdge("C#","Scala",29);
    graph.addEdge("C#","Python",567);
    graph.addEdge("C#","Java",567);
    graph.addEdge("Python","Swift",567);
    graph.addEdge("Python","Python",400);
    graph.addEdge("Swift","Qt",400);

    //Add Attributes Like This
    graph.addGraphAttribute("rankdir", "LR");
    graph.addNodeAttribute("style", "filled");
    graph.addNodeAttribute("fillcolor", "yellow");
    graph.addNodeAttribute("height", "0.6");
    graph.addNodeAttribute("margin", "0.1");

    graph.draw();

    return a.exec();
}
