#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class NetEventCallback;
// clang-format on

class NetEventCallbackComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::NetEventCallback>> mCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void set(::Bedrock::NonOwnerPointer<::NetEventCallback> callback);
#endif // @header-generator platform
    // NOLINTEND
};
