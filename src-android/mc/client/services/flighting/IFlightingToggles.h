#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
class Option;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class IFlightingToggles {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IFlightingToggles() = default;

    virtual ::gsl::not_null<const Option*> get(::FlightingToggleId) const = 0;

    virtual void initialize() = 0;

    virtual void registerOptionObserverCallback(::Bedrock::PubSub::Subscription&, ::FlightingToggleId, std::function<void (const Option&)>) = 0;

    virtual void visit(std::function<void (const FlightingToggleMetadata&)> const&) const = 0;
    // clang-format on
    // NOLINTEND
};
