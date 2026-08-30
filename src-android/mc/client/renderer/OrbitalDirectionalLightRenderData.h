#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/BaseSceneDirectionalLightRenderData.h"
#include "mc/client/renderer/game/DirectionalLightRenderData.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct RenderAtmosphereDescription; }
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
// clang-format on

struct OrbitalDirectionalLightRenderData : public ::BaseSceneDirectionalLightRenderData {
public:
    // OrbitalDirectionalLightRenderData inner types define
    using OrbitalLightPair = std::pair<DirectionalLightRenderData, DirectionalLightRenderData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 224, std::pair<DirectionalLightRenderData, DirectionalLightRenderData>> mOrbitalLightPair;
    // NOLINTEND

public:
    // prevent constructor by default
    OrbitalDirectionalLightRenderData();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void prepareAtmosphericData(::mce::framebuilder::RenderAtmosphereDescription&, bool const) const;

    virtual void prepareGameplayMetadata(::mce::framebuilder::gamecomponents::GameplayMetadata&) const;

    virtual std::vector<DirectionalLightRenderData> getDirectionalLightRenderData() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $prepareAtmosphericData(::mce::framebuilder::RenderAtmosphereDescription&, bool const) const;

    MCNAPI void $prepareGameplayMetadata(::mce::framebuilder::gamecomponents::GameplayMetadata&) const;

    MCNAPI std::vector<DirectionalLightRenderData> $getDirectionalLightRenderData() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
