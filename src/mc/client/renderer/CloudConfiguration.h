#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/CloudQuality.h"
#include "mc/deps/minecraft_renderer/framebuilder/CloudParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CloudConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::mce::framebuilder::CloudParameters> mLow;
    ::ll::TypedStorage<4, 40, ::mce::framebuilder::CloudParameters> mMedium;
    ::ll::TypedStorage<4, 40, ::mce::framebuilder::CloudParameters> mHigh;
    ::ll::TypedStorage<4, 40, ::mce::framebuilder::CloudParameters> mUltra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::framebuilder::CloudParameters getCloudParameters(::CloudQuality) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};
#else // @header-generator platform
struct CloudConfiguration {};
#if defined(LL_PLAT_C) // @header-generator platform

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(::CloudConfiguration const&, ::CloudConfiguration const&);
// NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
