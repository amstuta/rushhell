#pragma once

template <typename Ret> struct FunctionSignature
{
  typedef Ret (*type)();
};

template <typename Ret, class Arg0>
struct FunctionSignature<Ret(Arg0)>
{
  typedef Ret (*type)(Arg0);
};

template <typename Ret, class Arg0, class Arg1>
struct FunctionSignature<Ret(Arg0, Arg1)>
{
  typedef Ret (*type)(Arg0, Arg1);
};

template <typename Ret, class Arg0, class Arg1, class Arg2>
struct FunctionSignature<Ret(Arg0, Arg1, Arg2)>
{
  typedef Ret (*type)(Arg0, Arg1, Arg2);
};

template <typename Ret, class Arg0, class Arg1, class Arg2, class Arg3>
struct FunctionSignature<Ret(Arg0, Arg1, Arg2, Arg3)>
{
  typedef Ret (*type)(Arg0, Arg1, Arg2, Arg3);
};
