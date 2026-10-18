#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"

namespace PlayerReportingSignal {

#if defined(LL_PLAT_A) // @header-generator platform
class ResetAll : public ::Bedrock::Signal<PlayerReportingSignal::ResetAll, void> {};
#else // @header-generator platform
class ResetAll : public ::Bedrock::Signal<::PlayerReportingSignal::ResetAll, void> {};
#endif // @header-generator platform

} // namespace PlayerReportingSignal
