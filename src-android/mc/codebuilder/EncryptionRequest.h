#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/EncryptionCipherMode.h"

namespace CodeBuilder {

struct EncryptionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CodeBuilder::EncryptionCipherMode> mode;
    ::ll::TypedStorage<8, 24, std::string>                        publicKey;
    ::ll::TypedStorage<8, 24, std::string>                        salt;
    // NOLINTEND
};

} // namespace CodeBuilder
