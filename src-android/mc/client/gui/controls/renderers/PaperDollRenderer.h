#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationGroup;
class AnimationComponent;
class IClientInstance;
class IPaperDollRenderContext;
class IPaperDollUIDefSource;
class IPaperDollUpdateContext;
class MinecraftUIRenderContext;
class PropertyBag;
class UIControl;
class UICustomRenderer;
class UIScene;
struct OffscreenCaptureDescription;
struct PaperDollRenderOwnerData;
struct PaperDollUpdateOwnerData;
// clang-format on

class PaperDollRenderer : public ::MinecraftUICustomRenderer {
public:
    // PaperDollRenderer inner types define
    enum class RotationStyle : int {
        None      = 0,
        Automatic = 1,
        GestureX  = 2,
        CustomY   = 3,
        Lerping   = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PaperDollRenderer::RotationStyle>              mRotationStyle;
    ::ll::TypedStorage<4, 4, ::PaperDollRenderer::RotationStyle>              mPreviousRotationStyle;
    ::ll::TypedStorage<1, 1, bool>                                            mUseSelectedSkin;
    ::ll::TypedStorage<1, 1, bool>                                            mUseSkinByName;
    ::ll::TypedStorage<1, 1, bool>                                            mUseUUID;
    ::ll::TypedStorage<4, 4, float>                                           mDeltaTime;
    ::ll::TypedStorage<4, 4, float>                                           mElapsedTime;
    ::ll::TypedStorage<4, 4, float>                                           mRotation;
    ::ll::TypedStorage<4, 4, float>                                           mTargetRotation;
    ::ll::TypedStorage<4, 4, float>                                           mCameraTiltInDeg;
    ::ll::TypedStorage<4, 4, float>                                           mRotationSpeedMultiplier;
    ::ll::TypedStorage<8, 24, std::string>                                    mSkinName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                    mCurrentPlayerUUID;
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                    mPaperDollPackId;
    ::ll::TypedStorage<4, 4, int>                                             mPaperDollSkinIdx;
    ::ll::TypedStorage<1, 1, bool>                                            mWaitForSkinInitialize;
    ::ll::TypedStorage<1, 1, bool>                                            mMarkLocalPlayerAsDirty;
    ::ll::UntypedStorage<8, 64>                                               mRemoveSkin;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, HashedString>> mParticleEffectsMap;
    ::ll::TypedStorage<8, 16, std::shared_ptr<AnimationComponent>>            mAnimationComponent;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>                            mVariables;
    ::ll::UntypedStorage<8, 16>                                               mSkinLastUpdated;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PaperDollRenderer();

    virtual std::shared_ptr<UICustomRenderer> clone() const;

    virtual bool update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    virtual void render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PaperDollRenderer();

    MCNAPI explicit PaperDollRenderer(::IPaperDollUIDefSource const&);

    MCNAPI void _addAnimationIfNotRegistered(std::shared_ptr<ActorAnimationGroup>, ::HashedString const&);

    MCNAPI ::AnimationComponent& _getAnimationComponent();

    MCNAPI void
    _render(::IPaperDollRenderContext&, ::PaperDollRenderOwnerData const&, ::OffscreenCaptureDescription const*);

    MCNAPI void _update(::IPaperDollUpdateContext&, ::PaperDollUpdateOwnerData const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& MAX_ROTATION_SPEED();

    MCNAPI static float const& MAX_ROTATION_SPEED_MOUSE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::IPaperDollUIDefSource const&);
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

    MCNAPI bool $update(::IClientInstance&, ::UIControl&, ::UIScene const&);

    MCNAPI void $render(::MinecraftUIRenderContext&, ::IClientInstance&, ::UIControl&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
