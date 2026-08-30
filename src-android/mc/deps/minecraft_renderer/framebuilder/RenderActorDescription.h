#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/FogDescription.h"

// auto generated forward declare list
// clang-format off
namespace mce::framebuilder { struct RenderSkinnedMeshDescription; }
// clang-format on

namespace mce::framebuilder {

struct RenderActorDescription {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::mce::framebuilder::RenderSkinnedMeshDescription const&> mSkinnedMeshDescription;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mGlintColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mOverlayColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mChangeColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mTileLightColor;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mTileLightIntensity;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mBlockLightColor;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mMultiplicativeTintColor;
    ::ll::TypedStorage<4, 28, ::mce::framebuilder::FogDescription> mFog;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVRotation;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>> mUVScale;
    ::ll::TypedStorage<4, 16, ::glm::vec<4, float, (glm::qualifier)0>> mUVAnim;
    ::ll::TypedStorage<4, 4, float> mHUDOpacity;
    ::ll::TypedStorage<8, 56, std::optional<std::variant<std::unordered_map<ulong, glm::vec<4, float, (glm::qualifier)0>>, std::reference_wrapper<std::unordered_map<ulong, glm::vec<4, float, (glm::qualifier)0>>>>>> mExposedPropertyMap;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RenderActorDescription& operator=(RenderActorDescription const&);
    RenderActorDescription(RenderActorDescription const&);
    RenderActorDescription();
};

} // namespace mce::framebuilder
