#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/entity/components/InsideBlockData.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/phys/AABB.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct InsideBlockData;
// clang-format on
#endif // @header-generator platform

struct InsideGenericBlockComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<InsideBlockData>> mData;
    ::ll::TypedStorage<4, 28, std::optional<AABB>>          mSubstituteAABB;
    ::ll::TypedStorage<4, 4, float>                         mGrow;
    ::ll::TypedStorage<1, 1, bool>                          mHasChunks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::InsideBlockData>> mData;
    ::ll::TypedStorage<4, 28, ::std::optional<::AABB>>          mSubstituteAABB;
    ::ll::TypedStorage<4, 4, float>                             mGrow;
    ::ll::TypedStorage<1, 1, bool>                              mHasChunks;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    InsideGenericBlockComponent& operator=(InsideGenericBlockComponent const&);
#else // @header-generator platform
#endif // @header-generator platform
};
