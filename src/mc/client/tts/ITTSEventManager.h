#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/ProfanityFilterContext.h"

class ITTSEventManager {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ITTSEventManager();

    virtual void enqueueTTSEvent(std::string const&, ::ProfanityFilterContext, bool, std::string const&, bool, bool, bool) = 0;

    virtual bool isChatTextToSpeechEnabled() const = 0;

    virtual bool isUITextToSpeechEnabled() const = 0;

    virtual bool isTTSClientIdle() const = 0;

    virtual void clearAllTTSEvents(bool const) = 0;

    virtual void clearInterruptibleTTSEventsByFocusChange() = 0;

    virtual bool ttsEventQueued() const = 0;

    virtual void onAppFocusLost() = 0;

    virtual void stopSpeaking(bool const) = 0;
    // clang-format on
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
class ITTSEventManager {};
#endif // @header-generator platform
