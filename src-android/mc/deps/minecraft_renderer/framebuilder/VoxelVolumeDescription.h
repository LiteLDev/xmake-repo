#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedShaderBufferResource; }
// clang-format on

namespace mce::framebuilder {

struct VoxelVolumeDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ClientResourcePointer<dragon::ResolvedShaderBufferResource> const&> mVoxelBuffer;
    ::ll::TypedStorage<8, 8, ::mce::ClientResourcePointer<dragon::ResolvedShaderBufferResource> const&> mVolumeOffsets;
    ::ll::TypedStorage<8, 8, ulong> mVolumeOffsetsBufferCapacity;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelVolumeDescription& operator=(VoxelVolumeDescription const&);
    VoxelVolumeDescription(VoxelVolumeDescription const&);
    VoxelVolumeDescription();
};

} // namespace mce::framebuilder
