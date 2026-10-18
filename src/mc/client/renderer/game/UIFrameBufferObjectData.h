#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/renderer/hal/interface/FrameBufferObject.h"
#include "mc/deps/renderer/hal/interface/Texture.h"

struct UIFrameBufferObjectData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::mce::FrameBufferObject> mFrameBufferObject;
    ::ll::UntypedStorage<8, 128>                         mColorBufferTexture;
    ::ll::UntypedStorage<8, 128>                         mDepthBufferTexture;
    ::ll::TypedStorage<1, 1, ::SubClientId>              mAssociatedClient;
    // NOLINTEND

public:
    // prevent constructor by default
    UIFrameBufferObjectData& operator=(UIFrameBufferObjectData const&);
    UIFrameBufferObjectData(UIFrameBufferObjectData const&);
};
#else // @header-generator platform
struct UIFrameBufferObjectData {};
#endif // @header-generator platform
