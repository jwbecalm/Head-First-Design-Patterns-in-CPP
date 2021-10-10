
class FlyBehavior
{
public:
    virtual void fly() = 0;
};


class QuackBehavior
{
public:
    virtual void quack() = 0;
};


class FlyWithWings: public FlyBehavior
{
public:
    void fly();
};

class FlyNoWay: public FlyBehavior
{
public:
    void fly();
};

class FlyRocketPowered: public FlyBehavior
{
public:
    void fly();
};


class Quack: public QuackBehavior
{
public:
    void quack();
};

class Squeak: public QuackBehavior
{
public:
    void quack();
};


class MuteQuack: public QuackBehavior
{
public:
    void quack();
};

