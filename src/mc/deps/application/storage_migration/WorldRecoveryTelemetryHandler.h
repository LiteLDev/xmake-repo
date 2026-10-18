#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { struct WorldRecoveryTelemetryEvent; }
// clang-format on

namespace Bedrock {

class WorldRecoveryTelemetryHandler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const&) = 0;
#else // @header-generator platform
    virtual void fireWorldRecoveryTelemetryEvent(::Bedrock::WorldRecoveryTelemetryEvent const& data) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
