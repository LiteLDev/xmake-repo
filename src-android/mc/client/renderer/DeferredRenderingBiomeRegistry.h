#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/AtmosphericScattering.h"
#include "mc/client/renderer/ColorGraderConfig.h"
#include "mc/client/renderer/LightingGroup.h"
#include "mc/client/renderer/SkyboxConfig.h"
#include "mc/client/renderer/WaterConfig.h"
#include "mc/deps/core/string/HashedString.h"

struct DeferredRenderingBiomeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mDefaultAtmosphereIdentifier;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mDefaultColorGradingIdentifier;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mDefaultLightingIdentifier;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mDefaultWaterIdentifier;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mDefaultSkyboxIdentifier;
    ::ll::UntypedStorage<8, 40>                            mAtmosphereSettings;
    ::ll::UntypedStorage<8, 40>                            mColorGradingSettings;
    ::ll::UntypedStorage<8, 40>                            mLightingSettings;
    ::ll::UntypedStorage<8, 40>                            mWaterSettings;
    ::ll::UntypedStorage<8, 40>                            mSkyboxSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredRenderingBiomeRegistry& operator=(DeferredRenderingBiomeRegistry const&);
    DeferredRenderingBiomeRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DeferredRenderingBiomeRegistry(::DeferredRenderingBiomeRegistry const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DeferredRenderingBiomeRegistry const&);
    // NOLINTEND
};
