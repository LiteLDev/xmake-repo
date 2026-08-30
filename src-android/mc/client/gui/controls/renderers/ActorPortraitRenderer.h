#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/SkinData.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Matrix;
class MinecraftUIRenderContext;
class Mob;
class UIControl;
class UICustomRenderer;
class UIPropertyBag;
// clang-format on

class ActorPortraitRenderer : public ::MinecraftUICustomRenderer {
public:
    // ActorPortraitRenderer inner types declare
    // clang-format off
    struct Args;
    // clang-format on

    // ActorPortraitRenderer inner types define
    enum class RotateMode : uchar {
        None = 0,
        Auto = 1,
    };

    struct Args {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mScale;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mRotate;
        ::ll::TypedStorage<4, 12, ::glm::vec<3, float, (glm::qualifier)0>> mTranslate;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>                          mActorId;
        ::ll::TypedStorage<1, 1, bool>                                     mUseLiveAnimation;
        ::ll::TypedStorage<1, 1, ::ActorPortraitRenderer::RotateMode>      mRotateMode;
        ::ll::TypedStorage<4, 16, ::SkinData>                              mSkin;
        // NOLINTEND

    public:
        // prevent constructor by default
        Args();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mElapsedTime;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorPortraitRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _prependTransform(
        ::Matrix&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        ::glm::vec<2, float, (glm::qualifier)0> const&,
        int,
        float,
        ::ActorPortraitRenderer::Args const&,
        ::Mob const&
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::shared_ptr<UICustomRenderer> $clone() const;

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
