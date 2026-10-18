#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IPaperDollHandleFactory.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IPaperDollHandleFactory.h"

// auto generated forward declare list
// clang-format off
class PropertyBag;
namespace GeometryAtlas { class PaperDollHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class PaperDollFactoryImpl : public ::GeometryAtlas::IPaperDollHandleFactory {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class PaperDollFactoryImpl : public ::GeometryAtlas::IPaperDollHandleFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::GeometryAtlas::PaperDollHandle> createDoll(::std::unique_ptr<::PropertyBag> bag) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::GeometryAtlas::PaperDollHandle> $createDoll(::std::unique_ptr<::PropertyBag> bag) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PaperDollFactoryImpl {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas
