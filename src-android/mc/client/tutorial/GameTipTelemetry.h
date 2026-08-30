#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
// clang-format on

class GameTipTelemetry {
public:
    // GameTipTelemetry inner types define
    enum class GameTipTelemetryId : int {
        Unknown            = 0,
        Movement           = 1,
        Camera             = 2,
        BreakBlock         = 3,
        PlaceBlock         = 4,
        OpenInventory      = 5,
        PlaceCraftingTable = 6,
        UseCraftingTable   = 7,
        Sneak              = 8,
        Flying             = 9,
        Jump               = 10,
        Swim               = 11,
        StopFlying         = 12,
        HotbarSelection    = 13,
        FlyDown            = 14,
        FlyUp              = 15,
        Chat               = 16,
        Emote              = 17,
        StopSneaking       = 18,
    };

    enum class EventType : int {
        Triggered   = 0,
        Resolved    = 1,
        Interrupted = 2,
        Discarded   = 3,
    };

    enum class TestGroup : int {
        DisplayOn  = 0,
        DisplayOff = 1,
    };

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _fireGameTipEvent(
        std::shared_ptr<ClientInstanceScreenModel> const&,
        ::GameTipTelemetry::EventType,
        ::OptionID,
        ::InputMode
    );

    MCNAPI static ::GameTipTelemetry::TestGroup _getGameTipTestGroup();

    MCNAPI static void
    fireTipInterruptedEvent(std::shared_ptr<ClientInstanceScreenModel> const&, ::OptionID, ::InputMode);

    MCNAPI static void
    fireTipTriggeredEvent(std::shared_ptr<ClientInstanceScreenModel> const&, ::OptionID, ::InputMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<OptionID, GameTipTelemetry::GameTipTelemetryId> const& mGameTipIdMap();
    // NOLINTEND
};
