#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/IntellisenseHandler.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/HostOptionStates.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class StringHash;
struct HostOptionSubCommand;
namespace Json { class Value; }
// clang-format on

class ChatScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/IntellisenseHandler.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/HostOptionStates.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class StringHash;
struct HostOptionSubCommand;
namespace AppExtensions { class IDevConsoleScreenExtension; }
namespace Json { class Value; }
// clang-format on

class ChatScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
class ChatScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ChatScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class SelectionDirection : int {
        Next     = 0,
        Previous = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                           mCurrentMessage;
    ::ll::TypedStorage<8, 24, std::string>                                           mCurrentHistoryPrefix;
    ::ll::TypedStorage<1, 1, bool>                                                   mRefreshChatMessages;
    ::ll::TypedStorage<1, 1, bool>                                                   mLockMessagesUpdates;
    ::ll::TypedStorage<1, 1, bool>                                                   mScrollChatToBottom;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasUnreadMessages;
    ::ll::TypedStorage<8, 8, ulong>                                                  mCurrentSentMessageIndex;
    ::ll::TypedStorage<1, 1, bool>                                                   mNeedsLayoutUpdate;
    ::ll::TypedStorage<1, 1, bool>                                                   mLastKeyboardActive;
    ::ll::TypedStorage<1, 1, bool>                                                   mUpdateCoordinateUI;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDevConsole;
    ::ll::TypedStorage<1, 1, bool>                                                   mSendMessage;
    ::ll::TypedStorage<1, 1, bool>                                                   mUpdateIntellisense;
    ::ll::TypedStorage<8, 96, ::IntellisenseHandler>                                 mIntellisense;
    ::ll::TypedStorage<4, 4, ::HostOptionStates>                                     mCurrentHostOption;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                              mHostCommands;
    ::ll::TypedStorage<4, 4, uint>                                                   mExpectedCommandDepth;
    ::ll::TypedStorage<8, 24, std::string>                                           mTeleportWhoName;
    ::ll::TypedStorage<8, 24, std::string>                                           mTeleportWhereName;
    ::ll::TypedStorage<8, 24, std::string>                                           mDeferedCollectionFocusName;
    ::ll::TypedStorage<4, 4, int>                                                    mDeferedCollectionFocusIndex;
    ::ll::TypedStorage<1, 1, bool>                                                   mWaitOneTick;
    ::ll::TypedStorage<1, 1, bool>                                                   mChatTextBoxNeedsUpdate;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                mPositionCoordinates;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>                               mFacingCoordinates;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<HostOptionStates, std::string>>> mMainHostButtons;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mProfanityToggleSubscription;
    ::ll::TypedStorage<1, 1, bool>                                                   mShouldUseFilteredMessage;
    ::ll::UntypedStorage<8, 8>                                                       mDevConsoleScreenExtension;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void onInit();

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification);

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void onEntered();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatScreenController(
        std::shared_ptr<ClientInstanceScreenModel>,
        bool,
        bool,
        std::unique_ptr<AppExtensions::IDevConsoleScreenExtension>
    );

    MCNAPI void _getBottomButtonFocusOverrideDown(std::string&);

    MCNAPI void _getBottomButtonFocusOverrideUp(std::string&, ulong);

    MCNAPI std::string _getExitMessage() const;

    MCNAPI std::string _getSendMessage() const;

    MCNAPI void _handleChatMessage(std::string const&, std::string const&);

    MCNAPI void _handleSelectSentMessage(::ChatScreenController::SelectionDirection);

    MCNAPI void _registerBindingsHostOptions();

    MCNAPI void
    _registerBindingsSubCommand(std::vector<HostOptionSubCommand>&, ::StringHash const&, ::StringHash const&);

    MCNAPI void _registerSubControllers();

    MCNAPI void _sendChatMessage();

    MCNAPI void _teleportWhereHelper();

    MCNAPI void _teleportWhoHelper();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const* const& DEV_CONSOLE_SCREEN_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ClientInstanceScreenModel>,
        bool,
        bool,
        std::unique_ptr<AppExtensions::IDevConsoleScreenExtension>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $onInit();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification);

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $onEntered();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class SelectionDirection : int {
        Next     = 0,
        Previous = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mCurrentMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                mCurrentHistoryPrefix;
    ::ll::TypedStorage<1, 1, bool>                          mRefreshChatMessages;
    ::ll::TypedStorage<1, 1, bool>                          mLockMessagesUpdates;
    ::ll::TypedStorage<1, 1, bool>                          mScrollChatToBottom;
    ::ll::TypedStorage<1, 1, bool>                          mHasUnreadMessages;
    ::ll::TypedStorage<8, 8, uint64>                        mCurrentSentMessageIndex;
    ::ll::TypedStorage<1, 1, bool>                          mNeedsLayoutUpdate;
    ::ll::TypedStorage<1, 1, bool>                          mLastKeyboardActive;
    ::ll::TypedStorage<1, 1, bool>                          mUpdateCoordinateUI;
    ::ll::TypedStorage<1, 1, bool>                          mIsDevConsole;
    ::ll::TypedStorage<1, 1, bool>                          mSendMessage;
    ::ll::TypedStorage<1, 1, bool>                          mUpdateIntellisense;
    ::ll::TypedStorage<8, 104, ::IntellisenseHandler>       mIntellisense;
    ::ll::TypedStorage<4, 4, ::HostOptionStates>            mCurrentHostOption;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mHostCommands;
    ::ll::TypedStorage<4, 4, uint>                          mExpectedCommandDepth;
    ::ll::TypedStorage<8, 32, ::std::string>                mTeleportWhoName;
    ::ll::TypedStorage<8, 32, ::std::string>                mTeleportWhereName;
    ::ll::TypedStorage<8, 32, ::std::string>                mDeferedCollectionFocusName;
    ::ll::TypedStorage<4, 4, int>                           mDeferedCollectionFocusIndex;
    ::ll::TypedStorage<1, 1, bool>                          mWaitOneTick;
    ::ll::TypedStorage<1, 1, bool>                          mChatTextBoxNeedsUpdate;
    ::ll::TypedStorage<4, 12, ::Vec3>                       mPositionCoordinates;
    ::ll::TypedStorage<4, 16, ::std::optional<::BlockPos>>  mFacingCoordinates;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::HostOptionStates, ::std::string>>> mMainHostButtons;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mProfanityToggleSubscription;
    ::ll::TypedStorage<1, 1, bool>                             mShouldUseFilteredMessage;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::AppExtensions::IDevConsoleScreenExtension>> mDevConsoleScreenExtension;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatScreenController() /*override*/ = default;

    virtual void onInit() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onEntered() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel>                 model,
        bool                                                           openWithCommand,
        bool                                                           isDevConsole,
        ::std::unique_ptr<::AppExtensions::IDevConsoleScreenExtension> devConsoleScreenExtension
    );

    MCAPI void _getBottomButtonFocusOverrideDown(::std::string& focusOverride);

    MCAPI void _getBottomButtonFocusOverrideUp(::std::string& focusOverride, uint64 lastIndex);

    MCAPI ::std::string _getExitMessage() const;

    MCAPI ::std::string _getSendMessage() const;

    MCAPI void _handleChatMessage(::std::string const& message, ::std::string const& ttsMessage);

    MCAPI void _handleSelectSentMessage(::ChatScreenController::SelectionDirection direction);

    MCAPI void _registerBindings();

    MCAPI void _registerBindingsSubCommand(
        ::std::vector<::HostOptionSubCommand>& subCommandButtons,
        ::StringHash const&                    gridName,
        ::StringHash const&                    collectionName
    );

    MCAPI void _sendChatMessage();

    MCAPI void _teleportWhereHelper();

    MCAPI void _teleportWhoHelper();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientInstanceScreenModel>                 model,
        bool                                                           openWithCommand,
        bool                                                           isDevConsole,
        ::std::unique_ptr<::AppExtensions::IDevConsoleScreenExtension> devConsoleScreenExtension
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onInit();

    MCAPI void $onOpen();

    MCAPI void $onEntered();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
#else // @header-generator platform
    enum class SelectionDirection : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};
