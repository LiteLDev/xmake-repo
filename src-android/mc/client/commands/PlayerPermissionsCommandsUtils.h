#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class MinecraftCommands;
class PacketSender;
// clang-format on

class PlayerPermissionsCommandsUtils {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MinecraftCommands&> mCommands;
    ::ll::TypedStorage<8, 8, ::PacketSender&>      mPacketSender;
    ::ll::UntypedStorage<8, 48>                    mGetCurrentLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissionsCommandsUtils& operator=(PlayerPermissionsCommandsUtils const&);
    PlayerPermissionsCommandsUtils(PlayerPermissionsCommandsUtils const&);
    PlayerPermissionsCommandsUtils();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerPermissionsCommandsUtils(::MinecraftCommands&, ::PacketSender&, std::function<LocalPlayer*()>);

    MCNAPI void enableCheats();

    MCNAPI bool requestDisconnectPlayer(std::string);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MinecraftCommands&, ::PacketSender&, std::function<LocalPlayer*()>);
    // NOLINTEND
};
