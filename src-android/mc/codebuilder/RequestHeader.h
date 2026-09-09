#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/ProtocolVersion.h"
#include "mc/codebuilder/RequestPurpose.h"

namespace CodeBuilder {

struct RequestHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::CodeBuilder::ProtocolVersion> version;
    ::ll::TypedStorage<8, 24, std::string>                   requestId;
    ::ll::TypedStorage<1, 1, ::CodeBuilder::RequestPurpose>  purpose;
    // NOLINTEND
};

} // namespace CodeBuilder
