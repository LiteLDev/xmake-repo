#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/options/Typeface.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct ScreenViewCommand;
// clang-format on

class ChatSettingsScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/options/Typeface.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct ScreenViewCommand;
// clang-format on

class ChatSettingsScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
class ChatSettingsScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ChatSettingsScreenController inner types declare
    // clang-format off
    struct ChatSettings;
    // clang-format on

    // ChatSettingsScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ColorSubsection : uchar {
        None         = 0,
        ChatMessages = 1,
        Mentions     = 2,
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class ColorSubsection : uchar {
        None         = 0,
        ChatMessages = 1,
        Mentions     = 2,
    };
#else // @header-generator platform
    enum class ColorSubsection : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct ChatSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>       mIsChatMute;
        ::ll::TypedStorage<1, 1, bool>       mIsTTSOn;
        ::ll::TypedStorage<4, 4, ::Typeface> mTypeface;
        ::ll::TypedStorage<4, 4, int>        mFontSize;
        ::ll::TypedStorage<4, 4, float>      mLineSpacing;
        ::ll::TypedStorage<4, 4, int>        mChatColorCode;
        ::ll::TypedStorage<4, 4, int>        mMentionsColorCode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ChatSettingsScreenController::ChatSettings> mInitialSettings;
    ::ll::TypedStorage<4, 24, ::ChatSettingsScreenController::ChatSettings> mSettings;
    ::ll::UntypedStorage<1, 1>                                              mLanguageCanBeSmooth;
    ::ll::UntypedStorage<8, 48>                                             mRefreshChatCallback;
    ::ll::UntypedStorage<8, 48>                                             mFocusControlCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatSettingsScreenController();

    virtual void setViewCommand(::ScreenViewCommand const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _handleFontColorChanged(int, ::ChatSettingsScreenController::ColorSubsection);

    MCNAPI void _setInitialSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setViewCommand(::ScreenViewCommand const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ChatSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>       mIsChatMute;
        ::ll::TypedStorage<1, 1, bool>       mIsTTSOn;
        ::ll::TypedStorage<4, 4, ::Typeface> mTypeface;
        ::ll::TypedStorage<4, 4, int>        mFontSize;
        ::ll::TypedStorage<4, 4, float>      mLineSpacing;
        ::ll::TypedStorage<4, 4, int>        mChatColorCode;
        ::ll::TypedStorage<4, 4, int>        mMentionsColorCode;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::ChatSettingsScreenController::ChatSettings>      mInitialSettings;
    ::ll::TypedStorage<4, 24, ::ChatSettingsScreenController::ChatSettings>      mSettings;
    ::ll::TypedStorage<1, 1, bool const>                                         mLanguageCanBeSmooth;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                           mRefreshChatCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void(::std::string const&, bool)>> mFocusControlCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void setViewCommand(::ScreenViewCommand const& callback) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatSettingsScreenController(
        ::std::shared_ptr<::ClientInstanceScreenModel> clientModel,
        ::std::function<void()>                        refreshChatCallback
    );

    MCAPI void _handleFontColorChanged(int fontColorIndex, ::ChatSettingsScreenController::ColorSubsection colorType);

    MCAPI void _setInitialSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::shared_ptr<::ClientInstanceScreenModel> clientModel, ::std::function<void()> refreshChatCallback);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setViewCommand(::ScreenViewCommand const& callback);
    // NOLINTEND
#else // @header-generator platform
    struct ChatSettings {};
#endif // @header-generator platform
#endif // @header-generator platform
};
