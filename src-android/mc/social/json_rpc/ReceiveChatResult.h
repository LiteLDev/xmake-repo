#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

struct ReceiveChatResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mPartyId;
    ::ll::TypedStorage<8, 24, std::string> mRedactedText;
    ::ll::TypedStorage<8, 24, std::string> mScanText;
    ::ll::TypedStorage<8, 24, std::string> mSender;
    ::ll::TypedStorage<8, 24, std::string> mTimestamp;
    ::ll::TypedStorage<8, 24, std::string> mMessageId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiveChatResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
