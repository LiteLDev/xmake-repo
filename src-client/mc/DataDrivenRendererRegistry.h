#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/DataDrivenRendererPool.h"
#include "mc/common/GameVersion.h"
#include "mc/ddrv2__PoolItemHandle.h"

// auto generated forward declare list
// clang-format off
class ActorRenderer;
struct AttachableRendererPool;
// clang-format on

class DataDrivenRendererRegistry {
public:
    // DataDrivenRendererRegistry inner types declare
    // clang-format off
    struct DataDrivenRemappingData;
    struct AttachableRemappingData;
    template<typename T0> class PoolSlotMap;
    // clang-format on

    // DataDrivenRendererRegistry inner types define
    struct DataDrivenRemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>     mHandle;
        ::ll::TypedStorage<1, 1, bool> mAttachablesSupported;
        ::ll::TypedStorage<1, 1, bool> mHideArmor;
        // NOLINTEND
    };

    struct AttachableRemappingData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mHandle;
        // NOLINTEND
    };

    template <typename T0>
    class PoolSlotMap {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, ::GameVersion> mMinCompatibleGameVersion;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<const ActorRenderer*, DataDrivenRendererRegistry::DataDrivenRemappingData, std::hash<const ActorRenderer*>, std::equal_to<void>, std::allocator<std::pair<const ActorRenderer*const, DataDrivenRendererRegistry::DataDrivenRemappingData>>>> mDataDrivenRemapping;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<const ActorRenderer*, DataDrivenRendererRegistry::AttachableRemappingData, std::hash<const ActorRenderer*>, std::equal_to<void>, std::allocator<std::pair<const ActorRenderer*const, DataDrivenRendererRegistry::AttachableRemappingData>>>> mAttachableRemapping;
    ::ll::TypedStorage<8, 624, ::DataDrivenRendererPool> mFallbackPool;
    ::ll::UntypedStorage<8, 48> mDataDrivenPools;
    ::ll::UntypedStorage<8, 48> mAttachablePools;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
