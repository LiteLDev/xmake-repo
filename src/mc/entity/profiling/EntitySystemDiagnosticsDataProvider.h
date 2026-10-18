#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/platform/brstd/flat_map.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace ECS::Profiling::Diagnostics {

struct EntitySystemDiagnosticsDataProvider {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnke88005;
    ::ll::UntypedStorage<8, 8>  mUnk96a950;
    ::ll::UntypedStorage<8, 64> mUnk6f119a;
    ::ll::UntypedStorage<8, 64> mUnkec4685;
    ::ll::UntypedStorage<8, 64> mUnk5faa59;
    ::ll::UntypedStorage<8, 64> mUnkbfe0b5;
    ::ll::UntypedStorage<8, 64> mUnk3896ba;
    ::ll::UntypedStorage<8, 64> mUnk673ec4;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemDiagnosticsDataProvider& operator=(EntitySystemDiagnosticsDataProvider const&);
    EntitySystemDiagnosticsDataProvider(EntitySystemDiagnosticsDataProvider const&);
    EntitySystemDiagnosticsDataProvider();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EntitySystemDiagnosticsDataProvider();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ECS::Profiling::Diagnostics
