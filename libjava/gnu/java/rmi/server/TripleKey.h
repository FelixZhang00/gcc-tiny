
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_rmi_server_TripleKey__
#define __gnu_java_rmi_server_TripleKey__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace rmi
      {
        namespace server
        {
            class TripleKey;
        }
      }
    }
  }
}

class gnu::java::rmi::server::TripleKey : public ::java::lang::Object
{

public: // actually package-private
  TripleKey(::java::lang::String *, jint, ::java::lang::Object *);
public:
  virtual jint hashCode();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * toString();
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) host;
  jint port;
  ::java::lang::Object * other;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_rmi_server_TripleKey__