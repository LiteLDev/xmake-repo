#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct RenderPlayerVisionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mNightVisionEnabled;
    ::ll::TypedStorage<4, 4, float> mNightVisionScale;
    ::ll::TypedStorage<4, 4, float> mMobEffectFogLevel;
    ::ll::TypedStorage<4, 4, float> mSkyAmbientContribution;
    ::ll::TypedStorage<4, 4, float> mDarknessScale;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderPlayerVisionDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderPlayerVisionDescription(bool, float, float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, float, float, float, float);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct RenderPlayerVisionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mNightVisionEnabled;
    ::ll::TypedStorage<4, 4, float> mNightVisionScale;
    ::ll::TypedStorage<4, 4, float> mMobEffectFogLevel;
    ::ll::TypedStorage<4, 4, float> mSkyAmbientContribution;
    ::ll::TypedStorage<4, 4, float> mDarknessScale;
    // NOLINTEND
};
#else // @header-generator platform
struct RenderPlayerVisionDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce::framebuilder
