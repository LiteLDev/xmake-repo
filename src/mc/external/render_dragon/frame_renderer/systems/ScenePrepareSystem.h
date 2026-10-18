#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace dragon::rendering { struct Camera; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace dragon::framerenderer {

class ScenePrepareSystem {
public:
    // ScenePrepareSystem inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    class TransparentSortKey;
#else // @header-generator platform
#endif // @header-generator platform
    struct NonTransparentSortKey;
    struct OrderDependentSortKey;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    class TransparentSortKey;
#endif // @header-generator platform
    // clang-format on

    // ScenePrepareSystem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct NonTransparentSortKey {};

    struct OrderDependentSortKey {};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    class TransparentSortKey {};
#endif // @header-generator platform
};

} // namespace dragon::framerenderer
