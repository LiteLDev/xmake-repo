#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/lighting/detail/SubChunkDimensionPos.h"
#include "mc/client/renderer/lighting/light_propagation/PropagationPos.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class RuntimeLocalLightingConfig;
template<typename T0> class Pool;
namespace LightPropagation { class LightVolumeManager; }
namespace LightPropagation::Detail { struct PropagationResources; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LightPropagation {

#if defined(LL_PLAT_A) // @header-generator platform
class LightPropagationCoordinator
: public ::std::enable_shared_from_this<LightPropagation::LightPropagationCoordinator> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::weak_ptr<const RuntimeLocalLightingConfig>> mLocalLightingConfig;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::UntypedStorage<8, 8> mPropagatorPool;
    ::ll::TypedStorage<4, 4, std::atomic<int>> mInFlightTasksCount;
    ::ll::TypedStorage<4, 4, int> mMaxInFlightTasks;
    ::ll::TypedStorage<4, 40, std::mutex> mModifiedVolumesMutex;
    ::ll::UntypedStorage<8, 40> mModifiedVolumes;
    ::ll::TypedStorage<4, 40, std::mutex> mPropagationTasksQueueMutex;
    ::ll::TypedStorage<8, 40, std::unordered_set<LightPropagation::Detail::SubChunkDimensionPos>> mPropagationTasks;
    ::ll::TypedStorage<8, 48, std::queue<LightPropagation::Detail::SubChunkDimensionPos, std::deque<LightPropagation::Detail::SubChunkDimensionPos>>> mPropagationTasksQueue;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
class LightPropagationCoordinator {};
#endif // @header-generator platform

} // namespace LightPropagation
