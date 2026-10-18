#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct LinksToStyle;
// clang-format on

class ILayoutContentRefreshable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILayoutContentRefreshable() = default;

    virtual void refreshContent(::LinksToStyle const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct LinksToStyle;
// clang-format on

class ILayoutContentRefreshable {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILayoutContentRefreshable() = default;

    virtual void refreshContent(::LinksToStyle const& linksToStyle) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ILayoutContentRefreshable {};
#endif // @header-generator platform
#endif // @header-generator platform
