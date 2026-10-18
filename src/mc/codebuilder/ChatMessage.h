#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct ChatMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> type;
    ::ll::TypedStorage<8, 24, std::string> sender;
    ::ll::TypedStorage<8, 24, std::string> receiver;
    ::ll::TypedStorage<8, 24, std::string> message;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1e10fb;
    ::ll::UntypedStorage<8, 32> mUnkdc9074;
    ::ll::UntypedStorage<8, 32> mUnka490a2;
    ::ll::UntypedStorage<8, 32> mUnk8af4dc;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ChatMessage& operator=(ChatMessage const&);
    ChatMessage(ChatMessage const&);
    ChatMessage();
#endif // @header-generator platform
};

} // namespace CodeBuilder
