#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class ReceiveClientMessageResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<8, 24, std::string> mFrom;
    ::ll::TypedStorage<8, 24, std::string> mId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiveClientMessageResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
