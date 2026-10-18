#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
class Option;
class TreatmentFlightingToggles;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace flighting {

#if defined(LL_PLAT_A) // @header-generator platform
class TreatmentToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<TreatmentFlightingToggles>> mTreatmentToggles;
    // NOLINTEND

public:
    // prevent constructor by default
    TreatmentToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TreatmentToggles();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TreatmentToggles(::Core::Path const&);

    MCNAPI std::optional<FlightingToggleId> getToggleIdFromTag(std::string_view const) const;

    MCNAPI bool isEnabled(::FlightingToggleId) const;

    MCNAPI void onTogglesUpdated(std::vector<std::string> const&);

    MCNAPI void registerOptionObserverCallback(
        ::Bedrock::PubSub::Subscription&,
        ::FlightingToggleId,
        std::function<void(const Option&)>
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _registerToggles(::TreatmentFlightingToggles&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Path const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class TreatmentToggles {};
#endif // @header-generator platform

} // namespace flighting
