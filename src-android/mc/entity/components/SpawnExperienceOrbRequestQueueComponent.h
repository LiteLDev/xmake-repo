#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/SpawnExperienceOrbRequest.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SpawnExperienceOrbRequestQueueComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<DimensionType, std::queue<SpawnExperienceOrbRequest, std::deque<SpawnExperienceOrbRequest>>>> mRequestQueues;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool tryAddRequest(::SpawnExperienceOrbRequest const&, ::DimensionType const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& SUGGESTED_MAX_REQUESTS_PER_DIMENSION();
    // NOLINTEND
};
