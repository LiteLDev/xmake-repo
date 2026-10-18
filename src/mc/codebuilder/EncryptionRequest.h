#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/codebuilder/EncryptionCipherMode.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CodeBuilder {

struct EncryptionRequest {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::CodeBuilder::EncryptionCipherMode> mode;
    ::ll::TypedStorage<8, 24, std::string>                        publicKey;
    ::ll::TypedStorage<8, 24, std::string>                        salt;
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnkfec9d1;
    ::ll::UntypedStorage<8, 32> mUnkfc44d1;
    ::ll::UntypedStorage<8, 32> mUnk1975a5;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptionRequest& operator=(EncryptionRequest const&);
    EncryptionRequest(EncryptionRequest const&);
    EncryptionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EncryptionRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
