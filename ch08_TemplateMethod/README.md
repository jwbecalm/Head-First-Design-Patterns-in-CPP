# Template method Pattern
模板方法模式，通过在一个模板方法中，定义一个算法的框架和步骤，并允许子类为一个或多个步骤提供实现。

模板方法可以保证算法框架，步骤不变的情况下，重新定义某些步骤的算法实现。

如果框架算法的某些步骤是可选的，可以设计钩子函数(hook)，钩子可以让子类实现算法框架中的可选部分。

模板方法模式，在现实中的应用，例如一个通用的排序算法框架，支持对数组里任何对象进行比较并排序。不同的对象，其比较方法肯定是不同的，但交换(swap)两个对象在数组里的位置，是通用的。这时就可以用模板方法模式。


# Class diagram for Template method pattern
![Alt text](./uml/Template%20Method%20Pattern.svg)

# 参考资料
https://www.youtube.com/watch?v=7ocpwK9uesw&list=PLrhzvIcii6GNjpARdnO4ueTUAVR9eMBpc&index=13









