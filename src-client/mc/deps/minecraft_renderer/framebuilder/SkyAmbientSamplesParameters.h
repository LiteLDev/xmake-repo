#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct SkyAmbientSamplesParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                   mEnableLinearFiltering;
    ::ll::TypedStorage<4, 4, float>                                  mAmbientBufferBias;
    ::ll::TypedStorage<4, 4, float>                                  mAmbientCutoff;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, int, (glm::qualifier)0>> mAmbientBufferSize;
    // NOLINTEND

public:
    // prevent constructor by default
    SkyAmbientSamplesParameters& operator=(SkyAmbientSamplesParameters const&);
};

} // namespace mce::framebuilder
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
