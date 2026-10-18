#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
struct PlayerRenderingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>              mView;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>              mProjection;
    ::ll::TypedStorage<4, 68, std::optional<glm::mat<4, 4, float, (glm::qualifier)0>>> mItemInHandView;
    ::ll::TypedStorage<4, 68, std::optional<glm::mat<4, 4, float, (glm::qualifier)0>>> mItemInHandProjection;
    ::ll::TypedStorage<4, 4, float>                                                    mAspectRatio;
    ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>>                 mWorldOrigin;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRenderingParameters(PlayerRenderingParameters const&);
};
#else // @header-generator platform
struct PlayerRenderingParameters {};
#endif // @header-generator platform
