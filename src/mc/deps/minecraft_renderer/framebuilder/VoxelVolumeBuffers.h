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
namespace mce::framebuilder::gamecomponents {

#if defined(LL_PLAT_A) // @header-generator platform
struct VoxelVolumeBuffers {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>     mVoxelBuffer;
    ::ll::UntypedStorage<8, 24>     mVolumeOffsetMap;
    ::ll::TypedStorage<8, 8, ulong> mVolumeOffsetMapCapacity;
    // NOLINTEND
};
#else // @header-generator platform
struct VoxelVolumeBuffers {};
#endif // @header-generator platform

} // namespace mce::framebuilder::gamecomponents
