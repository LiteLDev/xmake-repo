#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/DispatchResultCode.h"

namespace Bedrock::PubSub::Detail {

struct DispatchResultBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, std::optional<Bedrock::PubSub::DispatchResultCode>> mResultCode;
    // NOLINTEND

public:
    // prevent constructor by default
    DispatchResultBase& operator=(DispatchResultBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DispatchResultBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
