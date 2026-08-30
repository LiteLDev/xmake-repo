#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/detail/SubChunkDimensionPos.h"
#include "mc/client/renderer/lighting/light_propagation/detail/PendingCommit.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
namespace LightPropagation { class VoxelVolumeBuffersHandler; }
namespace mce { struct DefaultVoxelBufferTraits; }
namespace mce { template<typename T0> class VoxelLightingBuffer; }
// clang-format on

namespace LightPropagation {

class LightVolumeManager {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<1, 144> mLightingBufferOrDimensionMutex;
    ::ll::UntypedStorage<8, 8> mVoxelLightingBuffer;
    ::ll::TypedStorage<4, 8, std::optional<DimensionType>> mDimensionId;
    ::ll::TypedStorage<4, 40, std::mutex> mPendingCommitTaskMutex;
    ::ll::TypedStorage<4, 40, std::mutex> mPendingCommitsMutex;
    ::ll::TypedStorage<8, 40, std::unordered_map<LightPropagation::Detail::SubChunkDimensionPos, LightPropagation::Detail::PendingCommit>> mPendingCommits;
    ::ll::TypedStorage<8, 48, std::queue<LightPropagation::Detail::SubChunkDimensionPos, std::deque<LightPropagation::Detail::SubChunkDimensionPos>>> mPendingCommitQueue;
    ::ll::TypedStorage<8, 8, std::unique_ptr<LightPropagation::VoxelVolumeBuffersHandler>> mVoxelVolumeBuffersHandler;
    // clang-format on
    // NOLINTEND
};

} // namespace LightPropagation
