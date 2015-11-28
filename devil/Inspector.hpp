#pragma once

#include <iostream>
#include <typeinfo>

template<size_t a>
struct metaSwag
{
};

template<typename T, typename U>
struct IsPrintable
{
  typedef struct { char tab[1]; } Yes;
  typedef struct { char tab[2]; } No;

  template<typename Object>
  static Yes isPrintable(Object *a, metaSwag<sizeof((T&)((*(T*)(0))) << (Object &)((*(Object *)(0))))> *b = 0);
  template<typename Object>
  static No isPrintable(...);

  static const bool ISPRINTABLE = (sizeof(isPrintable<U>((U *)0))  == sizeof(Yes));
};



template<bool b, typename v = void *>
struct enable_if
{
  typedef v type;
};

template<typename v>
struct enable_if<false, v>
{
};



template<typename Flux>
struct metaTruth
{
  template<typename Object>
  static void print(Flux &a, const Object &b, typename enable_if<IsPrintable<Flux, Object>::ISPRINTABLE>::type *c = 0)
  {
    a << b << std::endl;
  }
  template<typename Object>
  static void print(Flux &a, const Object &b, typename enable_if<!IsPrintable<Flux, Object>::ISPRINTABLE>::type *c = 0)
  {
    a << typeid(b).name() << std::endl;
  }
};



template<typename Obj>
void inspect(const Obj &o)
{
  metaTruth<std::ostream>::print(std::cout,o);
}
