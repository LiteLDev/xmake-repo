#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { struct ChatMessage; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CodeBuilder {

struct ChatSubscription {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> rules;
    ::ll::UntypedStorage<8, 48> serializeMessage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc96b4d;
    ::ll::UntypedStorage<8, 64> mUnk52d004;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ChatSubscription& operator=(ChatSubscription const&);
    ChatSubscription(ChatSubscription const&);
    ChatSubscription();
#endif // @header-generator platform
};

} // namespace CodeBuilder
