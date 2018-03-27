GraphViz Dot Visualizer C++ Qt Widget
=====================================

This is extended version of (https://github.com/nbergont/qgv).
I have added a wrapper class to easily add edges , nodes , attributes . Just include the graphVizwrapper.h class in your main file <br/>
and use the functions present in the class 

Demo :
------

http://www.mediafire.com/view/jxmla4vgqmthbj9/Demo.png

The Code :
----------

![The Code](http://www.mediafire.com/view/39ukk4244mu3h35/The%20Code.png)

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
* Change the GraphViz installtion path to where you installed GraphViz in you computer as shown in the following image

![installation](http://www.mediafire.com/view/cpcaw2f890nw8xo/Installation.png)

* Open the (QGraphViz.pro) file located in folder (Qt GraphViz Visualizer) and build/run it.
* [IMPORTANT] When you will build/run the project for the first time your build directory might have a differnt name than mine <br/>
and will not contain the required dll files that are present in my provided build directories. If so, then just copy and <br/>
paste the dll files from any of my build directoy to yours.
![Build Directory](http://www.mediafire.com/view/25q8792l30e52p3/Build%20Directory.png)

* If something like following happens when opening the project file then just click "NO"
![Popup](http://www.mediafire.com/view/0c44b1mioo78m73/Popup.png)

Ask any questions you may like via email (ahmed.jamil112233@gmail.com)



