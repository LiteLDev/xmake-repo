#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/client/renderer/game/OnCameraEffectRenderer.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/enums/DirectionId.h"
#include "mc/deps/input/enums/FocusImpact.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Frustum;
class FullScreenEffectRenderer;
class HitResult;
class IClientInstance;
class IMinecraftGame;
class LevelRenderer;
class Player;
class RectangleArea;
class ScreenContext;
struct FrameRenderObject;
struct ScreenSizeData;
namespace mce { class Camera; }
// clang-format on

class InGamePlayScreen : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mPickDirection;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mTurnDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mLastPlayerRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mLastPlayerAngleVel;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mLastHandRotation;
    ::ll::TypedStorage<4, 8, ::Vec2>                                    mLastHandVel;
    ::ll::TypedStorage<8, 8, double>                                    mLastTime;
    ::ll::TypedStorage<8, 8, double>                                    mLastVRStepSoundTime;
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mPreviousDirectTurnVector;
    ::ll::TypedStorage<4, 4, float>                                     mTapTurnAmountRadians;
    ::ll::TypedStorage<4, 4, float>                                     mLastDirectTurnAmountRadians;
    ::ll::TypedStorage<4, 4, float>                                     mRotXTouch;
    ::ll::TypedStorage<4, 4, float>                                     mRotYTouch;
    ::ll::TypedStorage<4, 4, float>                                     mRotXTouchLast;
    ::ll::TypedStorage<4, 4, float>                                     mRotYTouchLast;
    ::ll::TypedStorage<4, 4, float>                                     mLastTickT;
    ::ll::TypedStorage<4, 4, int>                                       mTick;
    ::ll::TypedStorage<1, 1, bool>                                      mTapTurnActive;
    ::ll::TypedStorage<1, 1, bool>                                      mPrevTapTurnActive;
    ::ll::TypedStorage<1, 1, bool>                                      mPrevAtBorder;
    ::ll::TypedStorage<1, 1, bool>                                      mRollTurnTempActivation;
    ::ll::TypedStorage<4, 4, float>                                     mDXLast;
    ::ll::TypedStorage<4, 4, float>                                     mDYLast;
    ::ll::TypedStorage<4, 12, ::Vec3>                                   mLastHitLocation;
    ::ll::TypedStorage<1, 1, bool>                                      mbHitLocationRecorded;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FullScreenEffectRenderer>> mFullscreenEffectRenderer;
    ::ll::TypedStorage<8, 160, ::OnCameraEffectRenderer>                mOnCameraEffectRenderer;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                         mMinecraft;
    ::ll::UntypedStorage<8, 24>                                         mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    InGamePlayScreen& operator=(InGamePlayScreen const&);
    InGamePlayScreen(InGamePlayScreen const&);
    InGamePlayScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InGamePlayScreen();

    virtual void init(::ScreenSizeData const&);

    virtual void onFocusGained();

    virtual void tick(int, int);

    virtual void applyInput(float);

    virtual void prepareFrame(::ScreenContext&);

    virtual void render(::ScreenContext&, ::FrameRenderObject const&);

    virtual void postRenderUpdate(::ScreenContext&);

    virtual void handlePointerPressed(bool);

    virtual void handleDirection(::DirectionId, float, float, ::FocusImpact);

    virtual bool renderGameBehind() const;

    virtual bool isModal() const;

    virtual bool isShowingMenu() const;

    virtual bool shouldStealMouse() const;

    virtual bool isPlayScreen() const;

    virtual bool renderOnlyWhenTopMost() const;

    virtual ::RectangleArea getAreaOfControlByName(std::string const&) const;

    virtual std::string getScreenName() const;

    virtual bool equalsScreenName(std::string_view) const;

    virtual bool containsScreenNameSubstring(std::string_view) const;

    virtual bool forceUpdateActiveSceneStackWhenPushed() const;

    virtual bool _isPlayerSuspended() const;

    virtual void _renderLevelPrep(::ScreenContext&, ::LevelRenderer&, ::Actor&);

    virtual void _renderLevel(::ScreenContext&, ::FrameRenderObject const&);

    virtual void _preLevelRender(::ScreenContext&);

    virtual void _postLevelRender(::ScreenContext&, ::LevelRenderer&);

    virtual bool _shouldRenderFirstPersonObjects(::LevelRenderer&) const;

    virtual bool _updateFreeformPickDirection(float, ::Vec3&, ::Vec3&, ::HitResult&, ::HitResult&);

    virtual void _saveMatrices(::mce::Camera&);

    virtual void _renderTransparentFirstPerson3DObjects(::ScreenContext&, ::LevelRenderer&);

    virtual void _renderItemInHand(::ScreenContext&, ::Player&);

    virtual void _prepareCuller(::mce::Camera&, ::Frustum&);

    virtual void _localPlayerTurned(float);

    virtual float _getPickRange();

    virtual bool _shouldPushHUD();

    virtual void _updateInGameCursor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::ScreenSizeData const&);

    MCNAPI void $onFocusGained();

    MCNAPI void $tick(int, int);

    MCNAPI void $applyInput(float);

    MCNAPI void $prepareFrame(::ScreenContext&);

    MCNAPI void $render(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI void $postRenderUpdate(::ScreenContext&);

    MCNAPI void $handlePointerPressed(bool);

    MCNAPI void $handleDirection(::DirectionId, float, float, ::FocusImpact);

    MCNAPI bool $renderGameBehind() const;

    MCNAPI bool $isModal() const;

    MCNAPI bool $isShowingMenu() const;

    MCNAPI bool $shouldStealMouse() const;

    MCNAPI bool $isPlayScreen() const;

    MCNAPI bool $renderOnlyWhenTopMost() const;

    MCNAPI ::RectangleArea $getAreaOfControlByName(std::string const&) const;

    MCNAPI std::string $getScreenName() const;

    MCNAPI bool $equalsScreenName(std::string_view) const;

    MCNAPI bool $containsScreenNameSubstring(std::string_view) const;

    MCNAPI bool $forceUpdateActiveSceneStackWhenPushed() const;

    MCNAPI bool $_isPlayerSuspended() const;

    MCNAPI void $_renderLevelPrep(::ScreenContext&, ::LevelRenderer&, ::Actor&);

    MCNAPI void $_renderLevel(::ScreenContext&, ::FrameRenderObject const&);

    MCNAPI void $_preLevelRender(::ScreenContext&);

    MCNAPI void $_postLevelRender(::ScreenContext&, ::LevelRenderer&);

    MCNAPI bool $_shouldRenderFirstPersonObjects(::LevelRenderer&) const;

    MCNAPI bool $_updateFreeformPickDirection(float, ::Vec3&, ::Vec3&, ::HitResult&, ::HitResult&);

    MCNAPI void $_saveMatrices(::mce::Camera&);

    MCNAPI void $_renderTransparentFirstPerson3DObjects(::ScreenContext&, ::LevelRenderer&);

    MCNAPI void $_renderItemInHand(::ScreenContext&, ::Player&);

    MCNAPI void $_prepareCuller(::mce::Camera&, ::Frustum&);

    MCNAPI void $_localPlayerTurned(float);

    MCNAPI float $_getPickRange();

    MCNAPI bool $_shouldPushHUD();

    MCNAPI void $_updateInGameCursor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
