# Command Pattern
命令模式，封装调用(命令/请求)。把一个命令/请求/行为委托给Command接口，同时支持回退操作。

命令模式将发出请求的对象（Invoker）和请求的执行对象（receive）进行了解耦。 Invoker和Receiver之间通过Command接口进行沟通。Invoker统一通过Command接口的execute()方法发出请求；具体的Command对象通过调用Receiver对应的方法，执行具体的命令/请求。

命令模式和策略模式的区别：命令模式封装的是一个动作(do what)，且该动作可以回退; 策略模式封装的是算法(how to do)




# Class diagram for Command Factory pattern
![Alt text](./uml/Command%20Pattern.svg)

# 参考资料
https://www.youtube.com/watch?v=9qA5kw8dcSU&list=PLrhzvIcii6GNjpARdnO4ueTUAVR9eMBpc&index=7






