#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class ClientInputHandler;
class Config;
class IClientInstance;
class MobEffectsLayout;
// clang-format on

class ClientBindingFactory : public ::BindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<float()>>>                                 mFloatBindings;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<void(float)>>>                             mFloatSetters;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<bool()>>>                                  mBoolBindings;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<RectangleArea()>>>                         mAreaBindings;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<std::string()>>>                           mStringBindings;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<glm::vec<2, float, (glm::qualifier)0>()>>> mPointBindings;
    ::ll::TypedStorage<8, 24, std::map<uint, std::function<void(RectangleArea)>>> mDynamicAreaBindings;
    ::ll::TypedStorage<8, 8, ::ClientInputHandler const&>                         mClientInputHandler;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                  mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mEmpty;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mTurnInteract;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDPadNoTurnInteractArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mGuiPassthrough;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mHotbarGuiPassthrough;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mChangingFlightHeight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mUpInvisible;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDownInvisible;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mUp;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDown;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mAscend;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mMiddleRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDescend;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mPause;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mEmote;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mChat;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mTogglePerspective;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mJump;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mUpLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mUpRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDownLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDownRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mPlayerEffects;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mPaddleRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mPaddleLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mSneak;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mMobEffects;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mToastArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mCodeBuilder;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mImmersiveReader;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDestroyOrAttack;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mBuildOrInteract;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mBlockSelect;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mBlockSelectNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mDefaultMoveStickArea;
    ::ll::UntypedStorage<8, 48>                                                   mInteractSetter;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mInteractSize;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mSneakNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mJumpNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mSprintNewControls;
    ::ll::TypedStorage<8, 24, std::map<uint, std::shared_ptr<RectangleArea>>>     mCustomRectangleAreas;
    ::ll::TypedStorage<8, 24, std::map<uint, RectangleArea>>                      mCustomAreaFractions;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>             mInteractCreative;
    ::ll::TypedStorage<4, 8, ::glm::vec<2, float, (glm::qualifier)0>>             mInteractSurvival;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                    mFinalSafeScreenArea;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBindingFactory& operator=(ClientBindingFactory const&);
    ClientBindingFactory(ClientBindingFactory const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBindingFactory();

    virtual std::function<bool()> getBooleanBinding(uint) const;

    virtual std::function<float()> getFloatBinding(uint) const;

    virtual std::function<std::string()> getStringBinding(uint) const;

    virtual std::function<glm::vec<2, float, (glm::qualifier)0>()> getPointBinding(uint) const;

    virtual std::function<RectangleArea()> getAreaBinding(uint) const;

    virtual std::function<void(RectangleArea)> getDynamicAreaBinding(uint) const;

    virtual std::function<void(float)> getFloatSetter(uint) const;

    virtual void setCustomAreaBinding(std::string const&, ::RectangleArea);

    virtual void removeCustomAreaBinding(std::string const&);

    virtual std::vector<uint> getCustomAreaBindingNames() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClientBindingFactory(::ClientInputHandler const&, ::IClientInstance&);

    MCNAPI ::RectangleArea _calculateClassicButtonRectangleWithOptionIDs(::OptionID, ::OptionID, ::OptionID) const;

    MCNAPI ::RectangleArea _calculateClassicDpadRectangle() const;

    MCNAPI ::RectangleArea _fitToScreen(::RectangleArea const&) const;

    MCNAPI bool _isInputSprinting() const;

    MCNAPI bool _touchButtonsVisible() const;

    MCNAPI void setupBoolBindings();

    MCNAPI void setupFloatBindings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ClientInputHandler const&, ::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::function<bool()> $getBooleanBinding(uint) const;

    MCNAPI std::function<float()> $getFloatBinding(uint) const;

    MCNAPI std::function<std::string()> $getStringBinding(uint) const;

    MCNAPI std::function<glm::vec<2, float, (glm::qualifier)0>()> $getPointBinding(uint) const;

    MCNAPI std::function<RectangleArea()> $getAreaBinding(uint) const;

    MCNAPI std::function<void(RectangleArea)> $getDynamicAreaBinding(uint) const;

    MCNAPI std::function<void(float)> $getFloatSetter(uint) const;

    MCNAPI void $setCustomAreaBinding(std::string const&, ::RectangleArea);

    MCNAPI void $removeCustomAreaBinding(std::string const&);

    MCNAPI std::vector<uint> $getCustomAreaBindingNames() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/BindingFactory.h"
#include "mc/deps/input/RectangleArea.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class ClientInputHandler;
class IClientInstance;
// clang-format on

class ClientBindingFactory : public ::BindingFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<float()>>>               mFloatBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<void(float)>>>           mFloatSetters;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<bool()>>>                mBoolBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<::RectangleArea()>>>     mAreaBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<::std::string()>>>       mStringBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<::glm::vec2()>>>         mPointBindings;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::function<void(::RectangleArea)>>> mDynamicAreaBindings;
    ::ll::TypedStorage<8, 8, ::ClientInputHandler const&>                               mClientInputHandler;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                        mClient;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mEmpty;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mTurnInteract;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDPadNoTurnInteractArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mGuiPassthrough;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mHotbarGuiPassthrough;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mChangingFlightHeight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUpInvisible;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDownInvisible;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUp;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDown;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mAscend;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mMiddleRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDescend;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPause;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mEmote;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mChat;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mTogglePerspective;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mJump;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUpLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mUpRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDownLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDownRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPlayerEffects;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPaddleRight;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mPaddleLeft;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mSneak;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mMobEffects;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mToastArea;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mCodeBuilder;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mImmersiveReader;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDestroyOrAttack;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mBuildOrInteract;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mBlockSelect;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mBlockSelectNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mDefaultMoveStickArea;
    ::ll::TypedStorage<8, 64, ::std::function<void(::RectangleArea)>>                   mInteractSetter;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mInteractSize;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mSneakNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mJumpNewControls;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mSprintNewControls;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::std::shared_ptr<::RectangleArea>>>     mCustomRectangleAreas;
    ::ll::TypedStorage<8, 16, ::std::map<uint, ::RectangleArea>>                        mCustomAreaFractions;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mInteractCreative;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                                               mInteractSurvival;
    ::ll::TypedStorage<4, 16, ::RectangleArea>                                          mFinalSafeScreenArea;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBindingFactory& operator=(ClientBindingFactory const&);
    ClientBindingFactory(ClientBindingFactory const&);
    ClientBindingFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBindingFactory() /*override*/ = default;

    virtual ::std::function<bool()> getBooleanBinding(uint name) const /*override*/;

    virtual ::std::function<float()> getFloatBinding(uint name) const /*override*/;

    virtual ::std::function<::std::string()> getStringBinding(uint name) const /*override*/;

    virtual ::std::function<::glm::vec2()> getPointBinding(uint name) const /*override*/;

    virtual ::std::function<::RectangleArea()> getAreaBinding(uint name) const /*override*/;

    virtual ::std::function<void(::RectangleArea)> getDynamicAreaBinding(uint name) const /*override*/;

    virtual ::std::function<void(float)> getFloatSetter(uint name) const /*override*/;

    virtual void setCustomAreaBinding(::std::string const& name, ::RectangleArea area) /*override*/;

    virtual void removeCustomAreaBinding(::std::string const& name) /*override*/;

    virtual ::std::vector<uint> getCustomAreaBindingNames() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::RectangleArea
    _calculateClassicButtonRectangleWithOptionIDs(::OptionID posX, ::OptionID posY, ::OptionID scale) const;

    MCAPI ::RectangleArea _calculateClassicDpadRectangle() const;

    MCAPI ::RectangleArea _fitToScreen(::RectangleArea const& rectangle) const;

    MCAPI bool _isInputSprinting() const;

    MCAPI bool _touchButtonsVisible() const;

    MCAPI void setupAreaBindings();

    MCAPI void setupBoolBindings();

    MCAPI void setupFloatBindings();

    MCAPI void setupFloatSetters();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::function<bool()> $getBooleanBinding(uint name) const;

    MCAPI ::std::function<float()> $getFloatBinding(uint name) const;

    MCAPI ::std::function<::std::string()> $getStringBinding(uint name) const;

    MCAPI ::std::function<::glm::vec2()> $getPointBinding(uint name) const;

    MCAPI ::std::function<::RectangleArea()> $getAreaBinding(uint name) const;

    MCAPI ::std::function<void(::RectangleArea)> $getDynamicAreaBinding(uint name) const;

    MCAPI ::std::function<void(float)> $getFloatSetter(uint name) const;

    MCAPI void $setCustomAreaBinding(::std::string const& name, ::RectangleArea area);

    MCAPI void $removeCustomAreaBinding(::std::string const& name);

    MCAPI ::std::vector<uint> $getCustomAreaBindingNames() const;
    // NOLINTEND
};
#else // @header-generator platform
class ClientBindingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
