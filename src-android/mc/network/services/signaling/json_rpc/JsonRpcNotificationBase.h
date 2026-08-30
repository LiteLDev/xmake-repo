#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JsonRpc {

class JsonRpcNotificationBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mJsonRpc;
    ::ll::TypedStorage<8, 24, std::string> mMethod;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~JsonRpcNotificationBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
