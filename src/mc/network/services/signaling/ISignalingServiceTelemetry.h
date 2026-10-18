#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/SignalServiceConnectStage.h"

// auto generated forward declare list
// clang-format off
class MessagePerformance;
namespace Json { class Value; }
// clang-format on

class ISignalingServiceTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISignalingServiceTelemetry() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignalServiceConnect(::SignalServiceConnectStage, ::Json::Value const&) const = 0;
#else // @header-generator platform
    virtual void
    fireEventSignalServiceConnect(::SignalServiceConnectStage stage, ::Json::Value const& properties) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignalMessagePerformance(::MessagePerformance const&) const = 0;
#else // @header-generator platform
    virtual void fireEventSignalMessagePerformance(::MessagePerformance const& event) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getAppSessionId() const = 0;
#else // @header-generator platform
    virtual ::std::string getAppSessionId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getCorrelationId() const = 0;
#else // @header-generator platform
    virtual ::std::string getCorrelationId() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
