#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct DirectionalLightRenderData;
namespace mce::framebuilder { struct RenderAtmosphereDescription; }
namespace mce::framebuilder::gamecomponents { struct GameplayMetadata; }
// clang-format on

struct BaseSceneDirectionalLightRenderData {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void prepareAtmosphericData(::mce::framebuilder::RenderAtmosphereDescription&, bool const) const = 0;

    virtual void prepareGameplayMetadata(::mce::framebuilder::gamecomponents::GameplayMetadata&) const = 0;

    virtual std::vector<DirectionalLightRenderData> getDirectionalLightRenderData() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct BaseSceneDirectionalLightRenderData {};
#endif // @header-generator platform
