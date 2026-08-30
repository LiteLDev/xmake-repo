#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/signals/Signal.h"
#include "mc/deps/application/signals/player_reporting_signal/JsonData.h"

namespace PlayerReportingSignal {

class SetJson : public ::Bedrock::Signal<PlayerReportingSignal::SetJson, PlayerReportingSignal::JsonData> {};

} // namespace PlayerReportingSignal
