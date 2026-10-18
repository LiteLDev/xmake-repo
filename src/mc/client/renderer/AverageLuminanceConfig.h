#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct AverageLuminanceParameters; }
// clang-format on

class AverageLuminanceConfig : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class AverageLuminanceConfig {
#endif // @header-generator platform
public:
    // AverageLuminanceConfig inner types declare
    // clang-format off
    struct AverageLuminanceParametersSrc;
    // clang-format on

    // AverageLuminanceConfig inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct AverageLuminanceParametersSrc {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMinLogLuminance;
        ::ll::TypedStorage<4, 4, float> mLogLuminanceRange;
        ::ll::TypedStorage<4, 4, float> mLowPercent;
        ::ll::TypedStorage<4, 4, float> mHighPercent;
        ::ll::TypedStorage<4, 4, float> mAdaptiveCoeff;
        ::ll::TypedStorage<4, 4, float> mLightAdaptation;
        ::ll::TypedStorage<4, 4, float> mDarkAdaptation;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::AverageLuminanceConfig::AverageLuminanceParametersSrc> mParameters;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AverageLuminanceConfig();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::AverageLuminanceParameters getAverageLuminanceParameters();

    MCNAPI bool loadDataSync(::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindAverageLuminanceParameters(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct AverageLuminanceParametersSrc {};
#endif // @header-generator platform
};
