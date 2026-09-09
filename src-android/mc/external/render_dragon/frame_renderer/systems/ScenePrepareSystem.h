#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::rendering { struct Camera; }
// clang-format on

namespace dragon::framerenderer {

class ScenePrepareSystem {
public:
    // ScenePrepareSystem inner types declare
    // clang-format off
    class TransparentSortKey;
    struct NonTransparentSortKey;
    struct OrderDependentSortKey;
    // clang-format on

    // ScenePrepareSystem inner types define
    class TransparentSortKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::dragon::rendering::Camera const&> mCamera;
        // NOLINTEND

    public:
        // prevent constructor by default
        TransparentSortKey& operator=(TransparentSortKey const&);
        TransparentSortKey(TransparentSortKey const&);
        TransparentSortKey();
    };

    struct NonTransparentSortKey {};

    struct OrderDependentSortKey {};
};

} // namespace dragon::framerenderer
