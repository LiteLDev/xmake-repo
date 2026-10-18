#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/TelemetryBatcher.h"
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
namespace OreUI { struct EventMeasurement; }
namespace OreUI { struct EventProperty; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TelemetryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::TelemetryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::OreUI::TelemetryBatcher> mTelemetryBatcher;
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
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit TelemetryFacet(::OreUI::ITelemetry& telemetry);

    MCAPI void discardTrackedOptions();

    MCAPI void fireEvent(
        ::std::string const&                                                                   eventName,
        ::std::unordered_map<::std::string, ::OreUI::EventProperty> const&                     eventProperties,
        ::std::optional<::std::unordered_map<::std::string, ::OreUI::EventMeasurement>> const& eventMeasurements,
        ::std::optional<bool>                                                                  shouldAggregate
    );

    MCAPI void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void fireEventOptionsChanged(::std::string const& optionsGroup);

    MCAPI void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    );

    MCAPI void trackOptionChanged(::std::string const& optionName, int oldOption, int newOption);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ITelemetry& telemetry);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TelemetryFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
