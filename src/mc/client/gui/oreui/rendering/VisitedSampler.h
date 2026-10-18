#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct SamplerStateDescription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { struct SamplerStateDescription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
struct VisitedSampler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::SamplerStateDescription const&> mSampler;
    ::ll::TypedStorage<4, 4, int>                                   mTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitedSampler& operator=(VisitedSampler const&);
    VisitedSampler(VisitedSampler const&);
    VisitedSampler();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct VisitedSampler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::SamplerStateDescription const&> mSampler;
    ::ll::TypedStorage<4, 4, int>                                   mTextureIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitedSampler& operator=(VisitedSampler const&);
    VisitedSampler(VisitedSampler const&);
    VisitedSampler();
};
#else // @header-generator platform
struct VisitedSampler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
