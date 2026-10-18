#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { struct DataTracker; }
namespace Social::Events { class Measurement; }
namespace Social::Events { class OptionChange; }
namespace Social::Events { class Property; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
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
class ITelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ITelemetry();

    virtual void fireEvent(std::string const&, std::vector<Social::Events::Property> const&, std::vector<Social::Events::Measurement> const&, bool) = 0;

    virtual void fireEventOreUIScreenLoadFailed() = 0;

    virtual void fireEventOreUIJsException() = 0;

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const&) = 0;

    virtual void fireEventButtonPressed(std::string const&, std::unordered_map<std::string, std::string> const&) = 0;

    virtual void fireEventOptionsChanged(std::string const&, std::unordered_map<std::string, int> const&) = 0;

    virtual void fireEventOptionsChangedAlt(std::string const&, std::unordered_map<std::string, Social::Events::OptionChange> const&) = 0;

    virtual void fireEventModalShown(std::string const&, std::unordered_map<std::string, std::string> const&) = 0;

    virtual void fireEventRealmsStoriesOptIn(std::string const&, std::string const&, std::string const&, bool) = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ITelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITelemetry() = default;

    virtual void fireEvent(
        ::std::string const&                                eventName,
        ::std::vector<::Social::Events::Property> const&    properties,
        ::std::vector<::Social::Events::Measurement> const& measurements,
        bool                                                shouldAggregate
    ) = 0;

    virtual void fireEventOreUIScreenLoadFailed() = 0;

    virtual void fireEventOreUIJsException() = 0;

    virtual void fireEventOreUIScreenPerformance(::OreUI::DataTracker const& dataTracker) = 0;

    virtual void fireEventButtonPressed(
        ::std::string const&                                      buttonName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) = 0;

    virtual void fireEventOptionsChanged(
        ::std::string const&                            optionsGroup,
        ::std::unordered_map<::std::string, int> const& events
    ) = 0;

    virtual void fireEventOptionsChangedAlt(
        ::std::string const&                                                       optionsGroup,
        ::std::unordered_map<::std::string, ::Social::Events::OptionChange> const& changes
    ) = 0;

    virtual void fireEventModalShown(
        ::std::string const&                                      modalName,
        ::std::unordered_map<::std::string, ::std::string> const& details
    ) = 0;

    virtual void fireEventRealmsStoriesOptIn(
        ::std::string const& correlationId,
        ::std::string const& action,
        ::std::string const& realmId,
        bool                 isOwner
    ) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ITelemetry {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
