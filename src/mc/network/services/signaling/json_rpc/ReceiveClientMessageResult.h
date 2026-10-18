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

class ReceiveClientMessageResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMessage;
    ::ll::TypedStorage<8, 24, std::string> mFrom;
    ::ll::TypedStorage<8, 24, std::string> mId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk277787;
    ::ll::UntypedStorage<8, 32> mUnk655f88;
    ::ll::UntypedStorage<8, 32> mUnkdebc04;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ReceiveClientMessageResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ReceiveClientMessageResult& operator=(ReceiveClientMessageResult const&);
    ReceiveClientMessageResult(ReceiveClientMessageResult const&);
    ReceiveClientMessageResult();
#endif // @header-generator platform
};

} // namespace JsonRpc
