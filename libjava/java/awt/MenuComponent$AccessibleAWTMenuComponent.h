
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_MenuComponent$AccessibleAWTMenuComponent__
#define __java_awt_MenuComponent$AccessibleAWTMenuComponent__

#pragma interface

#include <javax/accessibility/AccessibleContext.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Color;
        class Cursor;
        class Dimension;
        class Font;
        class FontMetrics;
        class MenuComponent;
        class MenuComponent$AccessibleAWTMenuComponent;
        class Point;
        class Rectangle;
      namespace event
      {
          class FocusListener;
      }
    }
  }
  namespace javax
  {
    namespace accessibility
    {
        class Accessible;
        class AccessibleComponent;
        class AccessibleRole;
        class AccessibleSelection;
        class AccessibleStateSet;
    }
  }
}

class java::awt::MenuComponent$AccessibleAWTMenuComponent : public ::javax::accessibility::AccessibleContext
{

public: // actually protected
  MenuComponent$AccessibleAWTMenuComponent(::java::awt::MenuComponent *);
public:
  virtual void addAccessibleSelection(jint);
  virtual void addFocusListener(::java::awt::event::FocusListener *);
  virtual void clearAccessibleSelection();
  virtual jboolean contains(::java::awt::Point *);
  virtual ::javax::accessibility::Accessible * getAccessibleAt(::java::awt::Point *);
  virtual ::javax::accessibility::Accessible * getAccessibleChild(jint);
  virtual jint getAccessibleChildrenCount();
  virtual ::javax::accessibility::AccessibleComponent * getAccessibleComponent();
  virtual ::java::lang::String * getAccessibleDescription();
  virtual jint getAccessibleIndexInParent();
  virtual ::java::lang::String * getAccessibleName();
  virtual ::javax::accessibility::Accessible * getAccessibleParent();
  virtual ::javax::accessibility::AccessibleRole * getAccessibleRole();
  virtual ::javax::accessibility::AccessibleSelection * getAccessibleSelection();
  virtual ::javax::accessibility::Accessible * getAccessibleSelection(jint);
  virtual jint getAccessibleSelectionCount();
  virtual ::javax::accessibility::AccessibleStateSet * getAccessibleStateSet();
  virtual ::java::awt::Color * getBackground();
  virtual ::java::awt::Rectangle * getBounds();
  virtual ::java::awt::Cursor * getCursor();
  virtual ::java::awt::Font * getFont();
  virtual ::java::awt::FontMetrics * getFontMetrics(::java::awt::Font *);
  virtual ::java::awt::Color * getForeground();
  virtual ::java::util::Locale * getLocale();
  virtual ::java::awt::Point * getLocation();
  virtual ::java::awt::Point * getLocationOnScreen();
  virtual ::java::awt::Dimension * getSize();
  virtual jboolean isAccessibleChildSelected(jint);
  virtual jboolean isEnabled();
  virtual jboolean isFocusTraversable();
  virtual jboolean isShowing();
  virtual jboolean isVisible();
  virtual void removeAccessibleSelection(jint);
  virtual void removeFocusListener(::java::awt::event::FocusListener *);
  virtual void requestFocus();
  virtual void selectAllAccessibleSelection();
  virtual void setBackground(::java::awt::Color *);
  virtual void setBounds(::java::awt::Rectangle *);
  virtual void setCursor(::java::awt::Cursor *);
  virtual void setEnabled(jboolean);
  virtual void setFont(::java::awt::Font *);
  virtual void setForeground(::java::awt::Color *);
  virtual void setLocation(::java::awt::Point *);
  virtual void setSize(::java::awt::Dimension *);
  virtual void setVisible(jboolean);
private:
  static const jlong serialVersionUID = -4269533416223798698LL;
public: // actually package-private
  ::java::awt::MenuComponent * __attribute__((aligned(__alignof__( ::javax::accessibility::AccessibleContext)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_MenuComponent$AccessibleAWTMenuComponent__