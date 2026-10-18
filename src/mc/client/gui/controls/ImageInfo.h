#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct ImageInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mSize;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageInfo& operator=(ImageInfo const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ImageInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::glm::vec2> mPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mSize;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mUV;
    ::ll::TypedStorage<4, 8, ::glm::vec2> mUVSize;
    // NOLINTEND
};
#else // @header-generator platform
struct ImageInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
