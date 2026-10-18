#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DimensionType;
#endif // @header-generator platform
namespace Poi { class Manager; }
namespace Poi { class TagProvider; }
namespace Poi { struct Registry; }
// clang-format on

struct PoiManagerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<Poi::TagProvider>> mTagProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Poi::Registry>>    mRegistry;
    ::ll::UntypedStorage<8, 48>                                 mManagers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Poi::TagProvider>> mTagProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Poi::Registry>>    mRegistry;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::DimensionType,
            ::Poi::Manager*,
            ::std::less<::DimensionType>,
            ::std::vector<::DimensionType>,
            ::std::vector<::Poi::Manager*>>>
        mManagers;
#endif // @header-generator platform
    // NOLINTEND
};
