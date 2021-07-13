# Guangzhou-Subway-Shortest-Path
C++实现广州地铁最短路线查询，利用Floyd深度优先算法

## 项目人员

> xay2001
> drh

## 问题描述和基本要求

* 虚拟场景：假设给出一张广州地铁的路线图，游客通过终端进行地铁信息的查询，提供最短 路的计算与推荐功能（例如：路线最短，时间最短，换地铁数最少等信息），UI的设计与展示。 各个站点之间的路线长度只要合理估算即可。为了减少复杂度，广州地铁只需要考虑1号线、 2号线、3号线即可。

* 将广州地铁路线图作为带权无向图(可以自行模拟)，顶点表示广州地铁的各个站点（如 “坑口”，“公园前”，“中山大学”，“沙园”等20个站点以上），边表示各站点之间的道 路，边上的权值表示距离； 

* 将广州地铁路线图信息存入一文件中，程序运行时可自动读入文件建立相关数据结构；

* 输入两个站点名称，就可以得到其最短线路，即：路程最短的行进方法；如果两者无 线路可通，就得出“两景点不可达的信息”；

* 显示线路时应同时显示路径长度；

* 除了上述基本功能以外，可以适当鼓励附加功能，如换地铁数最少或者站数最少的路 线等。

* 结语：算法与武功中的招式类似，所有武功的招式都有破绽，都可以加以改进。如果 能在学算法时，对所学算法都能用心发现算法的不妥，自觉地加以改进，自然会提高 对所学算法的领悟，而且还容易达到具有创造新算法的能力。

## 工具/准备工作

> 带权无向图
> Floyd算法。
> Dev-C++
> Qt Creator 4.5.0。

## 分析与实现

* 实验目的是要输出两站点之间的路程最短的行进方法，按实验要求可以采用带权无向图的最短路径算法。实验还要求通过读取文件的方式获取数据，可以从8684地铁网上摘取广州地铁1,2,3号线的站点相关信息按照图的存储结构保存到一个txt文件中，程序运行后读取。

* 最短路径用Floyd算法实现，采用邻接矩阵作为图的存储结构，还需要在带权无向图原有的存储结构基础上添加辅助数组dist[n][n]和path[n][n]，dist数组存放在迭代过程中求得的最短路径长度，path数组在迭代中存放从vi到vj的最短路径的中间点，初始path[i][j]=-1。考虑到图的存储结构和path数组的构造过程，路径的输出采用递归的方法更加可观。还有用户输入站点的问题，考虑到用户要知道有哪些站点可选，采用了列出所有可选站点来让用户选择的方式，而不是从键盘键入站点的名称。
