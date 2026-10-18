#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContext;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementDataExtractionUtility {

struct Extractors {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<void (*)(EntityRegistry&, EntityRegistry&, const StrictEntityContext&, const StrictEntityContext&, bool)>>> mExtractCopies;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk183981;
    // NOLINTEND

public:
    // prevent constructor by default
    Extractors& operator=(Extractors const&);
    Extractors(Extractors const&);
    Extractors();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~Extractors();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
