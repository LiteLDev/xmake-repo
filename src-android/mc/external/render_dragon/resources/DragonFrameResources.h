#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

namespace dragon::res {

class DragonFrameResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 616>                                 mTextures;
    ::ll::TypedStorage<8, 8, ::dragon::ResolvedTextureResource*> mMissingTextureResource;
    // NOLINTEND
};

} // namespace dragon::res
