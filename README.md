GraphViz Dot Visualizer C++ Qt Widget
=====================================

This is extended version of (https://github.com/nbergont/qgv).<br/>
I have added a wrapper class to easily add edges , nodes , attributes.<br/> 
Just include the graphVizwrapper.h class in your main file and use the functions present in the class 

Demo :
------

![Demo](https://i.imgur.com/fjLzahn.png)

The Code :
----------

![The Code](https://i.imgur.com/tQnhllJ.png)

Functions inside the wrapper class :
------------------------------------

* void addNode(QString lable , int frequency)
* void addEdge(QString node1 , QString node2 , int weight)
* void addGraphAttribute(QString name , QString value)
* void addNodeAttribute(QString name , QString value)
* void draw()


How to Download and use this :
------------------------------

* Download GraphViz 2.8 Stable from (https://graphviz.gitlab.io/_pages/Download/Download_windows.html)
* Clone or Download this repository
* Navigate to the following path and open (Qt GraphViz Visualizer/QGVCore/GraphViz.pri) file
* Change the **GRAPHVIZ_PATH** to where you installed GraphViz in you computer as shown in the following image

![installation](https://i.imgur.com/ocJd7vL.png)

* Open the (QGraphViz.pro) file located in folder (Qt GraphViz Visualizer) and build/run it.
* [IMPORTANT] When you will build/run the project for the first time your build directory might have a differnt name than mine <br/>
and will not contain the required dll files that are present in my provided build directories. If so, then just copy and <br/>
paste the dll files from any of my build directoy to yours.
![Build Directory](https://i.imgur.com/BGOOD8p.png)

* If something like following happens when opening the project file then just click "NO"
![Popup](https://i.imgur.com/QQTJzdM.png)

Ask any questions you may like via email (ahmedjamilcs@gmail.com)



