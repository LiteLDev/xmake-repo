#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CustomSurfaceShaderMetadata.h"
#include "mc/deps/minecraft_renderer/game/ShadowCategory.h"
#include "mc/deps/minecraft_renderer/game/ShadowContext.h"

namespace mce::framebuilder {

struct RenderBatchActorInstanceDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>      mWorldTransform;
    ::ll::TypedStorage<8, 8, long>                                             mID;
    ::ll::TypedStorage<4, 8, ::mce::framebuilder::CustomSurfaceShaderMetadata> mCSSMetadata;
    ::ll::TypedStorage<1, 1, ::ShadowContext>                                  mShadowContext;
    ::ll::TypedStorage<1, 1, ::ShadowCategory>                                 mShadowCategory;
    // NOLINTEND
};

} // namespace mce::framebuilder
