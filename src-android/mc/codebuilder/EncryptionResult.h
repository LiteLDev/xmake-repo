#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> requestId;
    ::ll::TypedStorage<8, 24, std::string> publicKey;
    ::ll::TypedStorage<8, 24, std::string> error;
    // NOLINTEND
};

} // namespace CodeBuilder
