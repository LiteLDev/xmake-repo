#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/StructuredBuffer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct DeferredResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mBrdfLUT;
    ::ll::UntypedStorage<8, 56> mEmptyVoxelBuffer;
    ::ll::UntypedStorage<8, 56> mEmptyVolumeOffsetMap;
    // NOLINTEND
};
#else // @header-generator platform
struct DeferredResources {};
#endif // @header-generator platform

} // namespace mce::framebuilder
