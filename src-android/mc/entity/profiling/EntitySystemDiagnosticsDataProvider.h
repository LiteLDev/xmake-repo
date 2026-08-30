#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/platform/brstd/flat_map.h"

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 48> mTimeAttribution;
    ::ll::UntypedStorage<8, 16> mMaxSystemIndex;
    ::ll::TypedStorage<8, 48, std::function<EntityId (uint)>> mGetEntityIdFromInt;
    ::ll::TypedStorage<8, 48, std::function<std::string (EntityId)>> mGetEntityDisplayName;
    ::ll::TypedStorage<8, 48, std::function<std::string (EntityId)>> mGetEntityString;
    ::ll::TypedStorage<8, 48, std::function<std::string (ulong)>> mGetSystemDisplayName;
    ::ll::TypedStorage<8, 48, std::function<std::string (ulong)>> mGetSystemCategoryName;
    ::ll::TypedStorage<8, 48, std::function<std::optional<std::chrono::duration<long long, std::ratio<1, 1000000000>>> (std::chrono::duration<long, std::ratio<1, 1000000000000000000>>)>> mTryGetWallclockTime;
    // clang-format on
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
