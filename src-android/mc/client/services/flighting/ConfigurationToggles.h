#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
class ConfigurationFlightingToggles;
class Option;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
// clang-format on

namespace flighting {

class ConfigurationToggles : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ConfigurationFlightingToggles>> mConfigurationToggles;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfigurationToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ConfigurationToggles();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ConfigurationToggles(::Core::Path const&);

    MCNAPI ::gsl::not_null<const Option*> get(::FlightingToggleId) const;

    MCNAPI std::optional<FlightingToggleId> getToggleIdByTagId(std::string_view) const;

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
    MCNAPI static void _registerToggles(::ConfigurationFlightingToggles&);
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

} // namespace flighting
