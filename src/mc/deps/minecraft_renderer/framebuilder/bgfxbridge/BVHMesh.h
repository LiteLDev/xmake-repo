#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/BVHEntity.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
struct BVHMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::bgfxbridge::BVHEntity> mBVH;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                               mMesh;
    ::ll::TypedStorage<8, 8, ulong>                                       mFrameNumLastTimeAccessed;
    // NOLINTEND
};
#else // @header-generator platform
struct BVHMesh {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge
