#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/InboxSettingsData.h"
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/services/messaging/player_messaging/InteractionType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct MessageServiceInteraction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlayerMessaging::InteractionType>        mType;
    ::ll::TypedStorage<8, 24, std::string>                              mTime;
    ::ll::TypedStorage<8, 664, ::MessageData const>                     mMessage;
    ::ll::TypedStorage<1, 2, ::InboxSettingsData const>                 mInboxSettings;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string> const> mPayload;
    ::ll::TypedStorage<8, 24, std::string>                              mButtonId;
    ::ll::TypedStorage<8, 24, std::string>                              mSessionId;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageServiceInteraction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageServiceInteraction(::PlayerMessaging::InteractionType, ::MessageData const&, std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessaging::InteractionType, ::MessageData const&, std::string const&);
    // NOLINTEND
};
