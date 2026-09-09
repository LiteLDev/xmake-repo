#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http::Internal {

class IRequestBody : public ::std::enable_shared_from_this<Bedrock::Http::Internal::IRequestBody> {
public:
    // IRequestBody inner types declare
    // clang-format off
    struct ReadResult;
    // clang-format on

    // IRequestBody inner types define
    struct ReadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>  success;
        ::ll::TypedStorage<8, 8, ulong> readBytes;
        // NOLINTEND
    };
};

} // namespace Bedrock::Http::Internal
