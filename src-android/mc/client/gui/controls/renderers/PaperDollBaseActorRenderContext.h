#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/IPaperDollRenderContext.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class ActorRenderData;
class BaseActorRenderContext;
class HashedString;
class MatrixStack;
struct OffscreenCaptureDescription;
// clang-format on

class PaperDollBaseActorRenderContext : public ::IPaperDollRenderContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BaseActorRenderContext&> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollBaseActorRenderContext& operator=(PaperDollBaseActorRenderContext const&);
    PaperDollBaseActorRenderContext(PaperDollBaseActorRenderContext const&);
    PaperDollBaseActorRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PaperDollBaseActorRenderContext();

    virtual float getDebugSkinSpeedMultiplier();

    virtual bool shouldDisableRenderMainMenuPaperDollAnimation();

    virtual ::MatrixStack& getWorldMatrixStack();

    virtual float getYOffset(float);

    virtual void renderGui(::HashedString const&, ::ActorRenderData&, ::OffscreenCaptureDescription const*);

    virtual float getLastTimestamp();

    virtual ::glm::vec<2, float, (glm::qualifier)0> getMouseMove(::glm::vec<2, float, (glm::qualifier)0> const&);

    virtual ::SubClientId getClientSubId();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PaperDollBaseActorRenderContext(::BaseActorRenderContext&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BaseActorRenderContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getDebugSkinSpeedMultiplier();

    MCNAPI bool $shouldDisableRenderMainMenuPaperDollAnimation();

    MCNAPI ::MatrixStack& $getWorldMatrixStack();

    MCNAPI float $getYOffset(float);

    MCNAPI void $renderGui(::HashedString const&, ::ActorRenderData&, ::OffscreenCaptureDescription const*);

    MCNAPI float $getLastTimestamp();

    MCNAPI ::glm::vec<2, float, (glm::qualifier)0> $getMouseMove(::glm::vec<2, float, (glm::qualifier)0> const&);

    MCNAPI ::SubClientId $getClientSubId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
