#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class IVillageManager;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DimensionType;
#endif // @header-generator platform
// clang-format on

struct VillageManagerComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mVillageManagers;
#else // @header-generator platform
    ::ll::
        TypedStorage<8, 24, ::std::vector<::std::pair<::DimensionType, ::Bedrock::NonOwnerPointer<::IVillageManager>>>>
            mVillageManagers;
#endif // @header-generator platform
    // NOLINTEND
};
