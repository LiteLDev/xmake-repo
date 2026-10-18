#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class IApp;
class IMinecraftGame;
// clang-format on

class ClientCommand : public ::Command {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::NonOwnerPointer<IApp>& mApp();

    MCNAPI static ::IMinecraftGame*& mGame();
    // NOLINTEND
};
#else // @header-generator platform
class ClientCommand {};
#endif // @header-generator platform
