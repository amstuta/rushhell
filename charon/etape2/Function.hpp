#pragma once

template <typename T>
class Function
{
public:

  template <typename U>
  Function(U val)
  {
    holder = new ObjHold<U>(val);
  }
  
  template <typename U>
  U operator=(U val)
  {
    holder = new ObjHold<U>(val);
  }
  

  T operator()()
  {
    return (*holder)();
  }


private:
  
  class IHold
  {
  public:
    virtual ~IHold() {}
    virtual T operator()() = 0;
  };

  
  template <typename V>
  class ObjHold : public IHold
  {
    V val;

  public:
    ObjHold(V v) {val = v;}
    ~ObjHold() {}

    T operator()()
    {
      return val();
    }
  };
  
  IHold *holder;
};


template <typename T, typename Arg0>
class Function<T(Arg0)>
{
public:

  template <typename U>
  Function(U val)
  {
    holder = new ObjHold<U>(val);
  }
  
  template <typename U>
  U operator=(U val)
  {
    holder = new ObjHold<U>(val);
  }

  T operator()(Arg0 a)
  {
    return (*holder)(a);
  }


private:
  
  class IHold
  {
  public:
    virtual ~IHold() {}
    virtual T operator()(Arg0) = 0;
  };

  template <typename V>
  class ObjHold : public IHold
  {
    V val;

  public:
    ObjHold(V v):
      val(v)
    {}
    ~ObjHold() {}

    T operator()(Arg0 a)
    {
      return val(a);
    }
  };
  
  IHold *holder;
};


template <typename T, typename Arg0, typename Arg1>
class Function<T(Arg0, Arg1)>
{
public:

  template <typename U>
  Function(U val)
  {
    holder = new ObjHold<U>(val);
  }
  
  template <typename U>
  U operator=(U val)
  {
    holder = new ObjHold<U>(val);
  }

  T operator()(Arg0 a, Arg1 b)
  {
    return (*holder)(a, b);
  }


private:
  
  class IHold
  {
  public:
    virtual ~IHold() {}
    virtual T operator()(Arg0, Arg1) = 0;
  };

  
  template <typename V>
  class ObjHold : public IHold
  {
    V val;

  public:
    ObjHold(V v) {val = v;}
    ~ObjHold() {}

    T operator()(Arg0 a, Arg1 b)
    {
      return val(a, b);
    }
  };
  
  IHold *holder;
};


template <typename T, typename Arg0, typename Arg1, typename Arg2>
class Function<T(Arg0, Arg1, Arg2)>
{
public:

  template <typename U>
  Function(U val)
  {
    holder = new ObjHold<U>(val);
  }
  
  template <typename U>
  U operator=(U val)
  {
    holder = new ObjHold<U>(val);
  }

  T operator()(Arg0 a, Arg1 b, Arg2 c)
  {
    return (*holder)(a, b, c);
  }


private:
  
  class IHold
  {
  public:
    virtual ~IHold() {}
    virtual T operator()(Arg0, Arg1, Arg2) = 0;
  };

  
  template <typename V>
  class ObjHold : public IHold
  {
    V val;

  public:
    ObjHold(V v) {val = v;}
    ~ObjHold() {}

    T operator()(Arg0 a, Arg1 b, Arg2 c)
    {
      return val(a, b, c);
    }
  };
  
  IHold *holder;
};


template <typename T, typename Arg0, typename Arg1, typename Arg2, typename Arg3>
class Function<T(Arg0, Arg1, Arg2, Arg3)>
{
public:

  template <typename U>
  Function(U val)
  {
    holder = new ObjHold<U>(val);
  }
  
  template <typename U>
  U operator=(U val)
  {
    holder = new ObjHold<U>(val);
  }

  T operator()(Arg0 a, Arg1 b, Arg2 c, Arg3 d)
  {
    return (*holder)(a, b, c, d);
  }


private:
  
  class IHold
  {
  public:
    virtual ~IHold() {}
    virtual T operator()(Arg0, Arg1, Arg2, Arg3) = 0;
  };

  
  template <typename V>
  class ObjHold : public IHold
  {
    V val;

  public:
    ObjHold(V v) {val = v;}
    ~ObjHold() {}

    T operator()(Arg0 a, Arg1 b, Arg2 c, Arg3 d)
    {
      return val(a, b, c, d);
    }
  };
  
  IHold *holder;
};
