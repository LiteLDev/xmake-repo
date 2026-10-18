#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct MessageButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mId;
    ::ll::TypedStorage<8, 24, std::string>                        mText;
    ::ll::TypedStorage<8, 24, std::string>                        mDescription;
    ::ll::TypedStorage<8, 24, std::string>                        mLink;
    ::ll::TypedStorage<4, 4, ::PlayerMessaging::ButtonActionType> mAction;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageButton& operator=(MessageButton const&);
    MessageButton();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MessageButton(::ButtonData const&);

    MCNAPI MessageButton(::OreUI::MessageButton const&);

    MCNAPI void openExternalLink();

    MCNAPI ~MessageButton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ButtonData const&);

    MCNAPI void* $ctor(::OreUI::MessageButton const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MessageButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mText;
    ::ll::TypedStorage<8, 32, ::std::string>                      mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                      mLink;
    ::ll::TypedStorage<4, 4, ::PlayerMessaging::ButtonActionType> mAction;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageButton& operator=(MessageButton const&);
    MessageButton(MessageButton const&);
    MessageButton();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MessageButton(::ButtonData const& button);

    MCAPI void openExternalLink();

    MCAPI ::OreUI::MessageButton& operator=(::OreUI::MessageButton&&);

    MCAPI ~MessageButton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ButtonData const& button);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MessageButton {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
