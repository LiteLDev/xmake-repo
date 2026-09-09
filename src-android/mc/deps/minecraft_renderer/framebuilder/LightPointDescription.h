#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/PointLightParameters.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/frame_object/components/ViewSetId.h"

namespace mce::framebuilder {

struct LightPointDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::mce::PointLightParameters const>                    mLightParameters;
    ::ll::TypedStorage<2, 2, ::dragon::frameobject::components::ViewSetId const>    mViewId;
    ::ll::TypedStorage<8, 192, std::array<dragon::atlas::AtlasTileHandle, 6> const> mAtlasTiles;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0> const>        mWorldOrigin;
    // NOLINTEND
};

} // namespace mce::framebuilder
