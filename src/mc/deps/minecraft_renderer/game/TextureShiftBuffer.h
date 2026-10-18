#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct TextureShiftBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPreUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPostUV;
    ::ll::TypedStorage<2, 2, ushort>                                  mPrePBRId;
    ::ll::TypedStorage<2, 2, ushort>                                  mPostPBRId;
    ::ll::TypedStorage<4, 4, float>                                   mGlobalAlpha;
    ::ll::TypedStorage<4, 4, float>                                   mLocalShiftLength;
    ::ll::TypedStorage<4, 4, float>                                   mNoiseSpread;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftBuffer& operator=(TextureShiftBuffer const&);
    TextureShiftBuffer(TextureShiftBuffer const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureShiftBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkbe4300;
    ::ll::UntypedStorage<4, 8> mUnkfa2b7d;
    ::ll::UntypedStorage<2, 2> mUnk3a7472;
    ::ll::UntypedStorage<2, 2> mUnk9a738a;
    ::ll::UntypedStorage<4, 4> mUnk342ac7;
    ::ll::UntypedStorage<4, 4> mUnkc15533;
    ::ll::UntypedStorage<4, 4> mUnk2add5a;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftBuffer& operator=(TextureShiftBuffer const&);
    TextureShiftBuffer(TextureShiftBuffer const&);
    TextureShiftBuffer();
};
#else // @header-generator platform
struct TextureShiftBuffer {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
