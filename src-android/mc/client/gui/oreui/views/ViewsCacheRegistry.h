#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ViewId.h"
#include "mc/common/SubClientId.h"

namespace OreUI {

class ViewsCacheRegistry {
public:
    // ViewsCacheRegistry inner types declare
    // clang-format off
    struct CachedView;
    // clang-format on

    // ViewsCacheRegistry inner types define
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
};

} // namespace OreUI
