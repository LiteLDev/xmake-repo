#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/codebuilder/ProtocolVersion.h"
#include "mc/codebuilder/RequestPurpose.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace CodeBuilder {

struct RequestHeader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CodeBuilder::ProtocolVersion> version;
    ::ll::TypedStorage<8, 24, std::string>                   requestId;
    ::ll::TypedStorage<1, 1, ::CodeBuilder::RequestPurpose>  purpose;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnkefe2f4;
    ::ll::UntypedStorage<8, 32> mUnke3702e;
    ::ll::UntypedStorage<1, 1>  mUnkc57e98;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestHeader& operator=(RequestHeader const&);
    RequestHeader(RequestHeader const&);
    RequestHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RequestHeader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
