#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    virtual ~IPaperDollRenderContext() = default;

    virtual float getDebugSkinSpeedMultiplier() = 0;

    virtual bool shouldDisableRenderMainMenuPaperDollAnimation() = 0;

    virtual ::MatrixStack& getWorldMatrixStack() = 0;

    virtual float getYOffset(float screenScale) = 0;

    virtual void renderGui(
        ::HashedString const&                rendererName,
        ::ActorRenderData&                   data,
        ::OffscreenCaptureDescription const* capture
    ) = 0;

    virtual float getLastTimestamp() = 0;

    virtual ::glm::vec2 getMouseMove(::glm::vec2 const& ownerPos) = 0;

    virtual ::SubClientId getClientSubId() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPaperDollRenderContext {};
#endif // @header-generator platform
#endif // @header-generator platform
