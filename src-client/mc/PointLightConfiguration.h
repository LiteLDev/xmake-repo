#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/PointLightQuality.h"
#include "mc/deps/minecraft_renderer/framebuilder/PointLightParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct PointLightConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters> mLow;
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters> mMedium;
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters> mHigh;
    ::ll::TypedStorage<8, 136, ::mce::framebuilder::PointLightParameters> mUltra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PointLightConfiguration();

    MCNAPI ::mce::framebuilder::PointLightParameters getPointLightParameters(::PointLightQuality) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
