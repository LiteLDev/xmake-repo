#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/runtime/watchdog/scripting/WatchdogSettings.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
namespace Scripting { struct WatchdogEvent; }
// clang-format on

namespace Scripting {

class IWatchdog {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // IWatchdog inner types define
    using WatchdogEventHandler = std::function<void(Scripting::WatchdogEvent)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 32, ::Scripting::WatchdogSettings> mSettings;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 32> mUnk4aaa86;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    IWatchdog& operator=(IWatchdog const&);
    IWatchdog(IWatchdog const&);
#endif // @header-generator platform
    IWatchdog();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWatchdog() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWatchdogEventHandler(std::function<void(Scripting::WatchdogEvent)>) = 0;
#else // @header-generator platform
    virtual void setWatchdogEventHandler(::std::function<void(::Scripting::WatchdogEvent)> watchdogEventHandler) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWatchdogInterruptPollCounter(uint) = 0;
#else // @header-generator platform
    virtual void setWatchdogInterruptPollCounter(uint counter) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void beginTiming(::Scripting::ContextId) = 0;
#else // @header-generator platform
    virtual void beginTiming(::Scripting::ContextId contextId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void endTiming(::Scripting::ContextId) = 0;
#else // @header-generator platform
    virtual void endTiming(::Scripting::ContextId contextId) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void pushPhase(std::string const&, std::chrono::duration<long long, std::ratio<1, 1000000>>) = 0;
#else // @header-generator platform
    virtual void pushPhase(::std::string const& namedPhase, ::std::chrono::microseconds frameBaseLine) = 0;
#endif // @header-generator platform

    virtual void popPhase() = 0;

    virtual void endFrame() = 0;

    virtual void resetTimings() = 0;
    // NOLINTEND
};

} // namespace Scripting
