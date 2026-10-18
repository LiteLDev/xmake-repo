#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/options/VolumetricFogQuality.h"
#include "mc/external/render_dragon/frame_renderer/modules/VolumeScatteringParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct VolumetricFogConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters> mLow;
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters> mMedium;
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters> mHigh;
    ::ll::TypedStorage<4, 68, ::dragon::framerenderer::modules::VolumeScatteringParameters> mUltra;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::framerenderer::modules::VolumeScatteringParameters
        getVolumeScatteringParameters(::VolumetricFogQuality) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};
#else // @header-generator platform
struct VolumetricFogConfiguration {};
#endif // @header-generator platform
