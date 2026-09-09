#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/external/render_dragon/frame_renderer/modules/ExposureCompensationType.h"
#include "mc/util/cereal_helpers/Keyframes.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace dragon::framerenderer::modules { struct ToneMappingParameters; }
// clang-format on

class TonemapperConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // TonemapperConfig inner types declare
    // clang-format off
    struct ToneMappingParametersSrc;
    // clang-format on

    // TonemapperConfig inner types define
    struct ToneMappingParametersSrc {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                                       mEnabled;
        ::ll::TypedStorage<4, 4, ::dragon::framerenderer::modules::ExposureCompensationType> mExposureCompensationType;
        ::ll::UntypedStorage<8, 32>     mCustomExposureCompensationCurve;
        ::ll::TypedStorage<4, 4, float> mExposureCompensation;
        ::ll::TypedStorage<4, 4, float> mMinLuminance;
        ::ll::TypedStorage<4, 4, float> mMaxLuminance;
        ::ll::TypedStorage<4, 4, float> mFStop;
        ::ll::TypedStorage<4, 4, float> mMinWhitePoint;
        // NOLINTEND

    public:
        // prevent constructor by default
        ToneMappingParametersSrc& operator=(ToneMappingParametersSrc const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::TonemapperConfig::ToneMappingParametersSrc> mParameters;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TonemapperConfig();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::ToneMappingParameters getToneMappingParameters() const;

    MCNAPI bool loadDataSync(::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindToneMappingParameters(::cereal::ReflectionCtx&);
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
};
