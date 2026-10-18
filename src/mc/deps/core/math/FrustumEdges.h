#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrustumEdges {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> topLeft;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> topRight;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> bottomLeft;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> bottomRight;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 12> mUnk61007a;
    ::ll::UntypedStorage<4, 12> mUnka924ea;
    ::ll::UntypedStorage<4, 12> mUnk2a667a;
    ::ll::UntypedStorage<4, 12> mUnkcb21c4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FrustumEdges& operator=(FrustumEdges const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FrustumEdges(FrustumEdges const&);
#endif // @header-generator platform
    FrustumEdges();
};
