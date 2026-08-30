#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/watchdog/scripting/WatchdogSettings.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace Scripting { struct WatchdogEvent; }
// clang-format on

namespace Scripting {

class IWatchdog {
public:
    // IWatchdog inner types define
    using WatchdogEventHandler = std::function<void(Scripting::WatchdogEvent)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 32, ::Scripting::WatchdogSettings> mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    IWatchdog();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWatchdog() = default;

    virtual void setWatchdogEventHandler(std::function<void(Scripting::WatchdogEvent)>) = 0;

    virtual void setWatchdogInterruptPollCounter(uint) = 0;

    virtual void beginTiming(::Scripting::ContextId) = 0;

    virtual void endTiming(::Scripting::ContextId) = 0;

    virtual void pushPhase(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000>>) = 0;

    virtual void popPhase() = 0;

    virtual void endFrame() = 0;

    virtual void resetTimings() = 0;
    // NOLINTEND
};

} // namespace Scripting
