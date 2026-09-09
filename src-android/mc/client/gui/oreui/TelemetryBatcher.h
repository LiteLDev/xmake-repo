#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/OptionChange.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
// clang-format on

namespace OreUI {

class TelemetryBatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, Social::Events::OptionChange>> mTrackedOptions;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                           mTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryBatcher& operator=(TelemetryBatcher const&);
    TelemetryBatcher(TelemetryBatcher const&);
    TelemetryBatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TelemetryBatcher(::OreUI::ITelemetry&);

    MCNAPI void discardTrackedOptions();

    MCNAPI std::unordered_map<std::string, Social::Events::OptionChange> getTrackedOptionChanges() const;

    MCNAPI void sendTrackedTelemetry(std::string const&);

    MCNAPI void sendTrackedTelemetryAlt(std::string const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ITelemetry&);
    // NOLINTEND
};

} // namespace OreUI
