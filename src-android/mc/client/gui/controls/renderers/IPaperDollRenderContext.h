#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class HashedString;
class MatrixStack;
struct OffscreenCaptureDescription;
// clang-format on

class IPaperDollRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IPaperDollRenderContext() = default;

    virtual float getDebugSkinSpeedMultiplier() = 0;

    virtual bool shouldDisableRenderMainMenuPaperDollAnimation() = 0;

    virtual ::MatrixStack& getWorldMatrixStack() = 0;

    virtual float getYOffset(float) = 0;

    virtual void renderGui(::HashedString const&, ::ActorRenderData&, ::OffscreenCaptureDescription const*) = 0;

    virtual float getLastTimestamp() = 0;

    virtual ::glm::vec<2, float, (glm::qualifier)0> getMouseMove(::glm::vec<2, float, (glm::qualifier)0> const&) = 0;

    virtual ::SubClientId getClientSubId() = 0;
    // clang-format on
    // NOLINTEND
};
