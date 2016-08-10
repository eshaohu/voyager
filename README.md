Voyager是一个运行在Unix/Linux上的C++多线程网络库。该网络库采用Reactor模式，IO模型为IO multiplexing + non-blocking IO, 线程模型为one loop per thread + threadpool，每个线程最多有一个事件轮询，每个TCP连接都必须归某一个线程来管理，它所有的IO都在该线程上完成。

Voyager网络库的主要功能包括网络IO事件，定时任务管理，线程库和日志处理等。网络IO为非阻塞IO，基于事件的驱动和回调, IO多路复用技术poll(2)，epoll(4)，将在后续的版本上加入对kqueue的支持，并对功能进行完善。Voyager主要实现了TCP长连接，并没有实现UDP连接。

Voyager采用C++11语言来编写，使用智能指针，RAII手法来管理内存，使用右值语义和移动语义来减少不必要的内存拷贝，使用function + bind来做事件的回调处理等等。Voyager采用的线程为Posix线程，而非C++11标准库的线程，除此，还使用了部分GCC的基础设施，如私有线程储存等等。

Voyager的核心代码位于voyager目录中，其结构分为三部分，分别为util，port和core。util为基础库，主要是实现了一些基础工具类，port主要是对Posix线程的封装，core为核心库，实现了网络库的核心功能。除此，网络库还包含了大量的例子(示例代码位于examples目录中)，如一个未完善的http服务器示例，suduku服务器和客户端的实现，echo示例，以及一个NoSQL的cache部分的实现等等。

对Voyager网络库做了很多对比测试（测试代码位于benchmarks目录中），Voyager在吞吐量和并发量方面表现优异。当然，Voyager并没有在安全性上做太多的处理，安全性和稳定性还有待加强。除此，还有很多细节方面需要完善。

编译环境：
（1）Linux 和 GCC 4.8
（2）Mac OS X 和 Clang 3.3
