#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/websockets/automation/AutomationObserver.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
namespace Automation { class AutomationClient; }
// clang-format on

class PlayerAutomationObserver : public ::Automation::AutomationObserver {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LocalPlayer&> mPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAutomationObserver& operator=(PlayerAutomationObserver const&);
    PlayerAutomationObserver(PlayerAutomationObserver const&);
    PlayerAutomationObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerAutomationObserver();

    virtual void onConnected(std::string const&);

    virtual void onConnectionFailed(std::string const&);

    virtual void onConnectionClosed();

    virtual void onDuplicateRequestCancel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onConnected(std::string const&);

    MCNAPI void $onConnectionFailed(std::string const&);

    MCNAPI void $onConnectionClosed();

    MCNAPI void $onDuplicateRequestCancel();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
