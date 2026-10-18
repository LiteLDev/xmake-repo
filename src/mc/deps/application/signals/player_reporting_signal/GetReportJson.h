#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/application/signals/player_reporting_signal/GetReportJsonFunctionData.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace PlayerReportingSignal { struct GetReportJsonFunctionData; }
// clang-format on
#endif // @header-generator platform

namespace PlayerReportingSignal {

class GetReportJson
#if defined(LL_PLAT_A) // @header-generator platform
: public ::Bedrock::Signal<PlayerReportingSignal::GetReportJson, PlayerReportingSignal::GetReportJsonFunctionData> {};
#else // @header-generator platform
: public ::Bedrock::Signal<::PlayerReportingSignal::GetReportJson, ::PlayerReportingSignal::GetReportJsonFunctionData> {
};
#endif // @header-generator platform

} // namespace PlayerReportingSignal
