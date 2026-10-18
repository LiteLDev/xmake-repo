#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct FogDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>  mControl;
    ::ll::TypedStorage<4, 4, float>                                    mRenderDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    FogDescription& operator=(FogDescription const&);
    FogDescription();
};
#else // @header-generator platform
struct FogDescription {};
#endif // @header-generator platform

} // namespace mce::framebuilder
