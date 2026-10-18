#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggles.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
struct FlightingToggleTextDisplay;
namespace Core { class Path; }
// clang-format on

class TreatmentFlightingToggles : public ::FlightingToggles {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TreatmentFlightingToggles();

    virtual void _updateToggle(std::vector<std::string> const&, ::FlightingToggles::FlightingToggle&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    registerToggle(::FlightingToggleId, std::string const&, std::string const&, ::FlightingToggleTextDisplay const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_updateToggle(std::vector<std::string> const&, ::FlightingToggles::FlightingToggle&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TreatmentFlightingToggles {};
#endif // @header-generator platform
