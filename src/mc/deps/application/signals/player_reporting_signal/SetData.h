#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/signals/player_reporting_signal/StringData.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace PlayerReportingSignal { struct StringData; }
// clang-format on
#endif // @header-generator platform

namespace PlayerReportingSignal {

#if defined(LL_PLAT_A) // @header-generator platform
class SetData : public ::Bedrock::Signal<PlayerReportingSignal::SetData, PlayerReportingSignal::StringData> {};
#else // @header-generator platform
class SetData : public ::Bedrock::Signal<::PlayerReportingSignal::SetData, ::PlayerReportingSignal::StringData> {};
#endif // @header-generator platform

} // namespace PlayerReportingSignal
