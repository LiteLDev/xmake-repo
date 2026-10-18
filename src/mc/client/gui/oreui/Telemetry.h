#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ITelemetry.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/ITelemetry.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class IMinecraftEventing;
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class Telemetry : public ::OreUI::ITelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>    mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    Telemetry& operator=(Telemetry const&);
    Telemetry(Telemetry const&);
    Telemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Telemetry();

    virtual void fireEvent(std::string const&, std::vector<Social::Events::Property> const&, std::vector<Social::Events::Measurement> const&, bool);

    virtual void fireEventOreUIScreenLoadFailed();

    virtual void fireEventOreUIJsException();

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const&);

    virtual void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&);

    virtual void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&);

    virtual void fireEventOptionsChangedAlt(std::string const&, std::unordered_map<std::string, Social::Events::OptionChange> const&);

    virtual void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&);

    virtual void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Telemetry(::IClientInstance&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance&, ::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fireEvent(
        std::string const&,
        std::vector<Social::Events::Property> const&,
        std::vector<Social::Events::Measurement> const&,
        bool
    );

    MCNAPI void $fireEventOreUIScreenLoadFailed();

    MCNAPI void $fireEventOreUIJsException();

    MCNAPI void $fireEventOreUIScreenPerformance(::OreUI::DataTracker const&);

    MCNAPI void $fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void $fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&);

    MCNAPI void $fireEventOptionsChangedAlt(
        std::string const&,
        std::unordered_map<std::string, Social::Events::OptionChange> const&
    );

    MCNAPI void $fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&);

    MCNAPI void $fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Telemetry : public ::OreUI::ITelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>    mClientInstance;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    Telemetry& operator=(Telemetry const&);
    Telemetry(Telemetry const&);
    Telemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) /*override*/;

    virtual void fireEventOreUIScreenLoadFailed() /*override*/;

    virtual void fireEventOreUIJsException() /*override*/;

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker) /*override*/;

    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) /*override*/;

    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) /*override*/;

    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionsGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) /*override*/;

    virtual void fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionsGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) /*override*/;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    );

    MCAPI void $fireEventOreUIScreenLoadFailed();

    MCAPI void $fireEventOreUIJsException();

    MCAPI void $fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker);

    MCAPI void $fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void $fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    );

    MCAPI void
    $fireEventOptionsChanged(::std::string const& optionsGroup, ::std::unordered_map<::std::string, int> const& events);

    MCAPI void $fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionsGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    );

    MCAPI void $fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class Telemetry {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
