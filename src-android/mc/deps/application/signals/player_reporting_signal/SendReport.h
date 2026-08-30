#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"
#include "mc/deps/application/signals/player_reporting_signal/ReportFunctionData.h"

namespace PlayerReportingSignal {

class SendReport
: public ::Bedrock::Signal<PlayerReportingSignal::SendReport, PlayerReportingSignal::ReportFunctionData> {};

} // namespace PlayerReportingSignal
