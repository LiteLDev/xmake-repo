#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/safety/RedactableString.h"
#include "mc/social/ChatMessageType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct ChatMessage {};
#endif // @header-generator platform

} // namespace Social
