// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Native/0.32.14/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IView :32
// {
uInterfaceType* IView_typeof();

struct IView
{
    void(*fp_set_Background)(uObject*, ::g::Fuse::Drawing::Brush*);
    void(*fp_set_Size)(uObject*, ::g::Uno::Float2*);
    void(*fp_set_Transform)(uObject*, ::g::Uno::Float4x4*);
    static void Background(const uInterface& __this, ::g::Fuse::Drawing::Brush* value) { __this.VTable<IView>()->fp_set_Background(__this, value); }
    static void Size(const uInterface& __this, ::g::Uno::Float2 value);
    static void Transform(const uInterface& __this, ::g::Uno::Float4x4 value);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float2.h>
#include <Uno.Float4x4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IView::Size(const uInterface& __this, ::g::Uno::Float2 value) { __this.VTable<IView>()->fp_set_Size(__this, &value); }
inline void IView::Transform(const uInterface& __this, ::g::Uno::Float4x4 value) { __this.VTable<IView>()->fp_set_Transform(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native
