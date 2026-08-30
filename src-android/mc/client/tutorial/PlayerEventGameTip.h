#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/tutorial/GameTip.h"
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class PlayerEventGameTip : public ::GameTip, public ::PlayerEventListener {
public:
    // prevent constructor by default
    PlayerEventGameTip();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerEventGameTip();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerEventGameTip(
        std::shared_ptr<ClientInstanceScreenModel> const&,
        ::OptionID,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        std::vector<InputMode>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<ClientInstanceScreenModel> const&,
        ::OptionID,
        std::chrono::duration<long long, std::ratio<1, 1>>,
        std::vector<InputMode>
    );
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
