#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedShaderBufferResource; }
// clang-format on

namespace mce::framebuilder::gamecomponents {

struct VoxelVolumeBuffers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mVoxelBuffer;
    ::ll::UntypedStorage<8, 24>     mVolumeOffsetMap;
    ::ll::TypedStorage<8, 8, ulong> mVolumeOffsetMapCapacity;
    // NOLINTEND
};

} // namespace mce::framebuilder::gamecomponents
