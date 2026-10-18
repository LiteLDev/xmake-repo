#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/item/ItemStack.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ui {

#if defined(LL_PLAT_A) // @header-generator platform
struct FlyingItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> item;
    ::ll::TypedStorage<8, 8, double>        startTime;
    ::ll::TypedStorage<4, 4, float>         animationTime;
    ::ll::TypedStorage<4, 4, float>         sourcex;
    ::ll::TypedStorage<4, 4, float>         sourcey;
    ::ll::TypedStorage<4, 4, float>         destx;
    ::ll::TypedStorage<4, 4, float>         desty;
    ::ll::TypedStorage<4, 4, float>         sourceScale;
    ::ll::TypedStorage<4, 4, float>         destScale;
    ::ll::TypedStorage<1, 1, bool>          forceFoil;
    // NOLINTEND

public:
    // prevent constructor by default
    FlyingItem& operator=(FlyingItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FlyingItem();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct FlyingItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 152, ::ItemStack> item;
    ::ll::TypedStorage<8, 8, double>        startTime;
    ::ll::TypedStorage<4, 4, float>         animationTime;
    ::ll::TypedStorage<4, 4, float>         sourcex;
    ::ll::TypedStorage<4, 4, float>         sourcey;
    ::ll::TypedStorage<4, 4, float>         destx;
    ::ll::TypedStorage<4, 4, float>         desty;
    ::ll::TypedStorage<4, 4, float>         sourceScale;
    ::ll::TypedStorage<4, 4, float>         destScale;
    ::ll::TypedStorage<1, 1, bool>          forceFoil;
    // NOLINTEND
};
#else // @header-generator platform
struct FlyingItem {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ui
