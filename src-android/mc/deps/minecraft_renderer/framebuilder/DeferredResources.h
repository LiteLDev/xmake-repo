#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/StructuredBuffer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace mce::framebuilder {

struct DeferredResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mBrdfLUT;
    ::ll::UntypedStorage<8, 56> mEmptyVoxelBuffer;
    ::ll::UntypedStorage<8, 56> mEmptyVolumeOffsetMap;
    // NOLINTEND
};

} // namespace mce::framebuilder
