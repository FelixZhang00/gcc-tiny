
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_filechooser_FileView__
#define __javax_swing_filechooser_FileView__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
        class Icon;
      namespace filechooser
      {
          class FileView;
      }
    }
  }
}

class javax::swing::filechooser::FileView : public ::java::lang::Object
{

public:
  FileView();
  virtual ::java::lang::String * getName(::java::io::File *);
  virtual ::java::lang::String * getDescription(::java::io::File *);
  virtual ::java::lang::String * getTypeDescription(::java::io::File *);
  virtual ::javax::swing::Icon * getIcon(::java::io::File *);
  virtual ::java::lang::Boolean * isTraversable(::java::io::File *);
  static ::java::lang::Class class$;
};

#endif // __javax_swing_filechooser_FileView__