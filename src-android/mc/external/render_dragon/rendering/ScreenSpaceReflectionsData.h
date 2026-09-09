#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

namespace dragon::rendering {

class ScreenSpaceReflectionsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                             mCurrentSSRHitBuffer;
    ::ll::UntypedStorage<8, 32>                             mPreviousSSRHitBuffer;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mSSRHitBuffersDescription;
    ::ll::UntypedStorage<8, 32>                             mPreviousSceneBuffer;
    ::ll::TypedStorage<8, 64, ::dragon::TextureDescription> mPreviousSceneBufferDescription;
    ::ll::TypedStorage<1, 1, bool>                          mIsPreviousHitBufferSafeToRead;
    ::ll::TypedStorage<1, 1, bool>                          mIsPreviousSceneBufferNew;
    // NOLINTEND
};

} // namespace dragon::rendering
