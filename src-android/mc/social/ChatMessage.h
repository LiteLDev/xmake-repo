#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/social/ChatMessageType.h"

namespace Social {

struct ChatMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         authorXuid;
    ::ll::TypedStorage<8, 24, std::string>                         messageId;
    ::ll::TypedStorage<8, 56, ::Bedrock::Safety::RedactableString> message;
    ::ll::TypedStorage<4, 4, ::Social::ChatMessageType>            type;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatMessage& operator=(ChatMessage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ChatMessage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
