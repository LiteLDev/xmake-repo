#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/BVHEntity.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

namespace mce::framebuilder::bgfxbridge {

struct BVHMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::bgfxbridge::BVHEntity> mBVH;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                               mMesh;
    ::ll::TypedStorage<8, 8, ulong>                                       mFrameNumLastTimeAccessed;
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
