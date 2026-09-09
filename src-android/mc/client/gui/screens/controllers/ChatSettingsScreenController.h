#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/options/Typeface.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
struct ScreenViewCommand;
// clang-format on

class ChatSettingsScreenController : public ::ClientInstanceScreenController {
public:
    // ChatSettingsScreenController inner types declare
    // clang-format off
    struct ChatSettings;
    // clang-format on

    // ChatSettingsScreenController inner types define
    enum class ColorSubsection : uchar {
        None         = 0,
        ChatMessages = 1,
        Mentions     = 2,
    };

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
};
