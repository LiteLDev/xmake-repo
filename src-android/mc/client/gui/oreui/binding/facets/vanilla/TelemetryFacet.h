#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
namespace OreUI { struct EventMeasurement; }
namespace OreUI { struct EventProperty; }
// clang-format on

namespace OreUI {

class TelemetryFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::TelemetryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::OreUI::TelemetryBatcher> mTelemetryBatcher;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>       mTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryFacet& operator=(TelemetryFacet const&);
    TelemetryFacet(TelemetryFacet const&);
    TelemetryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TelemetryFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TelemetryFacet(::OreUI::ITelemetry&);

    MCNAPI void discardTrackedOptions();

    MCNAPI void fireEvent(
        std::string const&,
        std::unordered_map<std::string, OreUI::EventProperty> const&,
        std::optional<std::unordered_map<std::string, OreUI::EventMeasurement>> const&,
        std::optional<bool>
    );

    MCNAPI void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void fireEventOptionsChanged(std::string const&);

    MCNAPI void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool);

    MCNAPI void trackOptionChanged(std::string const&, int, int);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[18]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ITelemetry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
