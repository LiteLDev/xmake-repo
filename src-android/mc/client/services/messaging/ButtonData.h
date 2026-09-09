#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ButtonData {
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
    ButtonData& operator=(ButtonData const&);
    ButtonData(ButtonData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ButtonData(std::string, ::Json::Value const&);

    MCNAPI ~ButtonData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, ::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
