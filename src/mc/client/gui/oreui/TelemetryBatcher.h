#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/OptionChange.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace OreUI { class ITelemetry; }
namespace Social::Events { class OptionChange; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TelemetryBatcher {
public:
    // TelemetryBatcher inner types define
    using OptionValue = ::std::variant<bool, int, float, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::Social::Events::OptionChange>> mTrackedOptions;
    ::ll::TypedStorage<8, 8, ::OreUI::ITelemetry&>                                                 mTelemetry;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryBatcher& operator=(TelemetryBatcher const&);
    TelemetryBatcher(TelemetryBatcher const&);
    TelemetryBatcher();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unordered_map<::std::string, ::Social::Events::OptionChange> getTrackedOptionChanges() const;

    MCAPI ::std::unordered_map<::std::string, int> getTrackedOptions() const;

    MCAPI void sendTrackedTelemetry(::std::string const& optionsGroupName);

    MCAPI void sendTrackedTelemetryAlt(::std::string const& optionsGroupName);
    // NOLINTEND
};
#else // @header-generator platform
class TelemetryBatcher {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
