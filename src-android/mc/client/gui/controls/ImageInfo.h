#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
