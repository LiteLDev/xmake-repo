#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/common/SubClientId.h"
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI {

class ViewsCacheRegistry {
public:
    // ViewsCacheRegistry inner types declare
    // clang-format off
    struct CachedView;
    // clang-format on

    // ViewsCacheRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CachedView {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>             viewId;
        ::ll::TypedStorage<8, 24, std::string> path;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedView& operator=(CachedView const&);
        CachedView(CachedView const&);
        CachedView();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, std::array<std::vector<OreUI::ViewsCacheRegistry::CachedView>, 4>> mCachedViews;
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct CachedView {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::OreUI::ViewId> viewId;
        ::ll::TypedStorage<8, 32, ::std::string>  path;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::std::array<::std::vector<::OreUI::ViewsCacheRegistry::CachedView>, 4>> mCachedViews;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ViewsCacheRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct CachedView {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI
