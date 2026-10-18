#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/flighting/FlightingToggleTextDisplay.h"
#include "mc/client/services/flighting/IFlightingToggles.h"
#include "mc/client/services/flighting/TagType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/services/flighting/FlightingToggleId.h"

// auto generated forward declare list
// clang-format off
class Option;
struct FlightingToggleMetadata;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class Path; }
// clang-format on

class FlightingToggles : public ::IFlightingToggles {
#else // @header-generator platform
class FlightingToggles {
#endif // @header-generator platform
public:
    // FlightingToggles inner types declare
    // clang-format off
    struct FlightingToggle;
    // clang-format on

    // FlightingToggles inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct FlightingToggle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FlightingToggleId>          mToggleId;
        ::ll::TypedStorage<1, 2, ::FlightingToggleTextDisplay> mDebugTextDisplay;
        ::ll::TypedStorage<8, 8, std::unique_ptr<Option>>      mOption;
        ::ll::TypedStorage<8, 24, std::string>                 mTagId;
        // NOLINTEND

    public:
        // prevent constructor by default
        FlightingToggle& operator=(FlightingToggle const&);
        FlightingToggle(FlightingToggle const&);
        FlightingToggle();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::flighting::TagType>                            mTagType;
    ::ll::TypedStorage<8, 24, std::vector<FlightingToggles::FlightingToggle>> mToggles;
    ::ll::UntypedStorage<8, 24>                                               mStorageLocation;
    ::ll::UntypedStorage<8, 24>                                               mFileName;
    // NOLINTEND

public:
    // prevent constructor by default
    FlightingToggles();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~FlightingToggles();

    virtual ::gsl::not_null<const Option*> get(::FlightingToggleId) const;

    virtual void initialize();

    virtual void registerOptionObserverCallback(::Bedrock::PubSub::Subscription&, ::FlightingToggleId, std::function<void (const Option&)>);

    virtual void visit(std::function<void (const FlightingToggleMetadata&)> const&) const;

    virtual void _updateToggle(std::vector<std::string> const&, ::FlightingToggles::FlightingToggle&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _load();

    MCNAPI void _registerToggle(
        ::FlightingToggleId,
        std::unique_ptr<Option>,
        std::string const&,
        ::FlightingToggleTextDisplay const&
    );

    MCNAPI void _save() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::gsl::not_null<const Option*> $get(::FlightingToggleId) const;

    MCNAPI void $initialize();

    MCNAPI void $registerOptionObserverCallback(
        ::Bedrock::PubSub::Subscription&,
        ::FlightingToggleId,
        std::function<void(const Option&)>
    );

    MCNAPI void $visit(std::function<void(const FlightingToggleMetadata&)> const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct FlightingToggle {};
#endif // @header-generator platform
};
