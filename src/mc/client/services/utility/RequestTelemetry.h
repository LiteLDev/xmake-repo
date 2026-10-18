#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
namespace Social::Events { class Event; }
// clang-format on

class RequestTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mStatusCode;
    ::ll::TypedStorage<8, 8, double> mStartTime;
    ::ll::TypedStorage<8, 8, double> mResponseTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RequestTelemetry();

    MCNAPI ::brstd::move_only_function<void(Social::Events::Event&) const>
        createStatusCodeWriter(::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString);

    MCNAPI void setStatusCode(ushort);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class RequestTelemetry {};
#endif // @header-generator platform
