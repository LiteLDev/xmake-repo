#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrustumEdges {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> topLeft;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> topRight;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> bottomLeft;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> bottomRight;
    // NOLINTEND

public:
    // prevent constructor by default
    FrustumEdges& operator=(FrustumEdges const&);
    FrustumEdges();
};
