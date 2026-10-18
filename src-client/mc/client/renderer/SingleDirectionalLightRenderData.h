#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
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

struct SingleDirectionalLightRenderData : public ::BaseSceneDirectionalLightRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 112, ::DirectionalLightRenderData> mDirectionalLight;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleDirectionalLightRenderData();

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
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
