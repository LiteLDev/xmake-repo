#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonRpc {

struct ReceiveChatResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mRedactedText;
    ::ll::TypedStorage<8, 24, std::string> mScanText;
    ::ll::TypedStorage<8, 24, std::string> mSender;
    ::ll::TypedStorage<8, 24, std::string> mTimestamp;
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkadb7b0;
    ::ll::UntypedStorage<8, 32> mUnke888c2;
    ::ll::UntypedStorage<8, 32> mUnk11940a;
    ::ll::UntypedStorage<8, 32> mUnkf9dcd4;
    ::ll::UntypedStorage<8, 32> mUnk5f28e7;
    ::ll::UntypedStorage<8, 32> mUnk26f1d9;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiveChatResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ReceiveChatResult& operator=(ReceiveChatResult const&);
    ReceiveChatResult(ReceiveChatResult const&);
    ReceiveChatResult();
#endif // @header-generator platform
};

} // namespace JsonRpc
