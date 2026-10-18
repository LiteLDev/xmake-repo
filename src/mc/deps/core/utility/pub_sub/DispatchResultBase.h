#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DispatchResultCode.h"

namespace Bedrock::PubSub::Detail {

struct DispatchResultBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 2, std::optional<Bedrock::PubSub::DispatchResultCode>> mResultCode;
#else // @header-generator platform
    ::ll::TypedStorage<1, 2, ::std::optional<::Bedrock::PubSub::DispatchResultCode>> mResultCode;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DispatchResultBase& operator=(DispatchResultBase const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~DispatchResultBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ~DispatchResultBase() = default;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
