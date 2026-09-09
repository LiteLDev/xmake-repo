#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardManager.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class IClientInstance;
class RectangleArea;
class Vec2;
// clang-format on

class MinecraftKeyboardManager : public ::KeyboardManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>               mDelayedInputResume;
    bool                                         mIsKeyboardActive    : 1;
    bool                                         mIsKeyboardEnabled   : 1;
    bool                                         mKeyboardClosedEvent : 1;
    ::ll::TypedStorage<4, 4, float>              mKeyboardForcedHeight;
    ::ll::UntypedStorage<8, 48>                  mResumeInputCallback;
    ::ll::UntypedStorage<8, 48>                  mDisableInputToOtherClientsCallback;
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClientInstance;
    ::ll::TypedStorage<1, 1, bool>               mWasEnabledWithMultiline;
    ::ll::TypedStorage<1, 1, bool>               mIsNumbersOnly;
    ::ll::TypedStorage<4, 4, int>                mMaxLength;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftKeyboardManager& operator=(MinecraftKeyboardManager const&);
    MinecraftKeyboardManager(MinecraftKeyboardManager const&);
    MinecraftKeyboardManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftKeyboardManager();

    virtual bool tryEnableKeyboard(std::string const&, int, bool, bool, bool, ::Vec2 const&, float);

    virtual bool isFullScreenKeyboard() const;

    virtual void disableKeyboard();

    virtual bool canActivateKeyboard();

    virtual bool isKeyboardEnabled() const;

    virtual bool isKeyboardActive() const;

    virtual bool wasEnabledWithMultiline() const;

    virtual bool isNumbersOnly() const;

    virtual int getMaxLength() const;

    virtual float getKeyboardHeight() const;

    virtual void setForcedHeight(float);

    virtual bool tryClaimKeyboardOwnership();

    virtual void releaseKeyboardOwnership();

    virtual bool getKeyboardClosedEvent();

    virtual void clearKeyboardClosedEvent();

    virtual void updateTextEditBoxPosition(::RectangleArea const&, ::Vec2 const&, ::Vec2 const&);

    virtual void setResumeInputCallback(std::function<void()>);

    virtual void setDisableInputToOtherClientsCallback(std::function<void(int)>);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftKeyboardManager(::IClientInstance&);

    MCNAPI ::gsl::not_null<Bedrock::NonOwnerPointer<const GuiData>> _getGuiData() const;

    MCNAPI float _getGuiScale() const;

    MCNAPI float _getInvGuiScale() const;

    MCNAPI void delayedInputResume();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool keyboardIsOwned();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int& mGlobalKeyboardOwnerId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $tryEnableKeyboard(std::string const&, int, bool, bool, bool, ::Vec2 const&, float);

    MCNAPI bool $isFullScreenKeyboard() const;

    MCNAPI void $disableKeyboard();

    MCNAPI bool $canActivateKeyboard();

    MCNAPI bool $isKeyboardEnabled() const;

    MCNAPI bool $isKeyboardActive() const;

    MCNAPI bool $wasEnabledWithMultiline() const;

    MCNAPI bool $isNumbersOnly() const;

    MCNAPI int $getMaxLength() const;

    MCNAPI float $getKeyboardHeight() const;

    MCNAPI void $setForcedHeight(float);

    MCNAPI bool $tryClaimKeyboardOwnership();

    MCNAPI void $releaseKeyboardOwnership();

    MCNAPI bool $getKeyboardClosedEvent();

    MCNAPI void $clearKeyboardClosedEvent();

    MCNAPI void $updateTextEditBoxPosition(::RectangleArea const&, ::Vec2 const&, ::Vec2 const&);

    MCNAPI void $setResumeInputCallback(std::function<void()>);

    MCNAPI void $setDisableInputToOtherClientsCallback(std::function<void(int)>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
