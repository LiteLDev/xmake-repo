#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentView;
struct PackContentItem;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentView;
struct PackContentItem;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackViewAndItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentView*>                    mContentView;
    ::ll::TypedStorage<8, 16, std::shared_ptr<PackContentItem>> mContentItem;
    // NOLINTEND

public:
    // prevent constructor by default
    PackViewAndItem& operator=(PackViewAndItem const&);
    PackViewAndItem();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackViewAndItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentView*>                        mContentView;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PackContentItem>> mContentItem;
    // NOLINTEND
};
#else // @header-generator platform
struct PackViewAndItem {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
