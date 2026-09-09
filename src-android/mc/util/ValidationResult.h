#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ValidationStatus.h"

namespace Util::ResourceUri {

struct ValidationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                          sanitizedUriOrError;
    ::ll::TypedStorage<4, 4, ::Util::ResourceUri::ValidationStatus> status;
    // NOLINTEND
};

} // namespace Util::ResourceUri
