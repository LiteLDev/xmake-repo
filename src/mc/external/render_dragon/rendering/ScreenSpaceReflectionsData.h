#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/resources/TextureDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::rendering {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
class ScreenSpaceReflectionsData {};
#endif // @header-generator platform

} // namespace dragon::rendering
