#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SpawnExperienceOrbRequest.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SpawnExperienceOrbRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::queue<SpawnExperienceOrbRequest, std::deque<SpawnExperienceOrbRequest>>>> mRequestQueues;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::DimensionType,
            ::std::queue<::SpawnExperienceOrbRequest, ::std::deque<::SpawnExperienceOrbRequest>>>>
        mRequestQueues;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool tryAddRequest(::SpawnExperienceOrbRequest const&, ::DimensionType const&);
#else // @header-generator platform
    MCAPI bool tryAddRequest(::SpawnExperienceOrbRequest const& request, ::DimensionType const& dimensionType);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ulong const& SUGGESTED_MAX_REQUESTS_PER_DIMENSION();
#else // @header-generator platform
    MCAPI static uint64 const& SUGGESTED_MAX_REQUESTS_PER_DIMENSION();
#endif // @header-generator platform
    // NOLINTEND
};
