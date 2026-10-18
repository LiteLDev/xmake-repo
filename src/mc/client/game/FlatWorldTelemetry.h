#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace FlatWorldTelemetry {
// functions
// NOLINTBEGIN
MCNAPI ::Json::Value toFlatWorldTelemetryOptions(::Json::Value const& flatWorldOptions);

MCNAPI uint64 toFlatWorldTelemetryOptionsHash(::Json::Value const& flatWorldTelemetryOptions);
// NOLINTEND

} // namespace FlatWorldTelemetry
#endif // @header-generator platform
