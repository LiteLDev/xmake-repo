#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/ValidationStatus.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Util::ResourceUri {

struct ValidationResult {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                          sanitizedUriOrError;
    ::ll::TypedStorage<4, 4, ::Util::ResourceUri::ValidationStatus> status;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkc85a4a;
    ::ll::UntypedStorage<4, 4>  mUnkbfca40;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidationResult& operator=(ValidationResult const&);
    ValidationResult(ValidationResult const&);
    ValidationResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ValidationResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util::ResourceUri
