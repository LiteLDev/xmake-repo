#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { struct ResolvedShaderBufferResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct VoxelVolumeDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
