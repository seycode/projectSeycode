// This file was generated based on /Users/niklas/Dropbox/programmierung/Fuse/SeyCode/.uno/Header.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{struct Header;}

namespace g{

// public partial sealed class Header :2
// {
::g::Fuse::Controls::Shape_type* Header_typeof();
void Header__ctor_8_fn(Header* __this);
void Header__InitializeUX_fn(Header* __this);
void Header__New4_fn(Header** __retval);

struct Header : ::g::Fuse::Controls::Rectangle
{
    void ctor_8();
    void InitializeUX();
    static Header* New4();
};
// }

} // ::g
