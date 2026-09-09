#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class StrictEntityContext;
// clang-format on

namespace MovementDataExtractionUtility {

struct Extractors {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<void (*)(EntityRegistry&, EntityRegistry&, const StrictEntityContext&, const StrictEntityContext&, bool)>>> mExtractCopies;
    // clang-format on
    // NOLINTEND
};

} // namespace MovementDataExtractionUtility
