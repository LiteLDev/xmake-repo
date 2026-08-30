#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/BVHEntity.h"
#include "mc/deps/minecraft_renderer/renderer/Mesh.h"

namespace mce::framebuilder::bgfxbridge {

struct BVHSkinnedMesh {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::mce::framebuilder::bgfxbridge::BVHEntity>               mBVH;
    ::ll::TypedStorage<8, 616, ::mce::Mesh>                                             mSkinnedMesh;
    ::ll::TypedStorage<8, 8, ulong>                                                     mFrameNumLastTimeAccessed;
    ::ll::TypedStorage<4, 512, std::array<glm::mat<4, 4, float, (glm::qualifier)0>, 8>> mCurrentBones;
    ::ll::TypedStorage<1, 1, bool>                                                      mForcePreviousBoneUpdate;
    // NOLINTEND
};

} // namespace mce::framebuilder::bgfxbridge
