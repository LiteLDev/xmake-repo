#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActiveDirectoryIdentity;
class CommandRegistry;
class FileArchiver;
class IApp;
class IMinecraftGame;
class Level;
class MinecraftCommands;
namespace Bedrock::DevTools { class CommandExecutor; }
namespace mce { class TextureGroup; }
// clang-format on

class ClientCommands {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientCommands();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void init(
        ::CommandRegistry&,
        ::IMinecraftGame&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IApp>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<Bedrock::DevTools::CommandExecutor>>
    );

    MCNAPI static void setupSplitScreenStandard(::MinecraftCommands&);

    MCNAPI static void setupStandard(
        ::MinecraftCommands&,
        ::IMinecraftGame&,
        std::shared_ptr<mce::TextureGroup>,
        ::FileArchiver&,
        bool,
        ::ActiveDirectoryIdentity const*,
        bool,
        ::Level const&
    );

    MCNAPI static void setupStartMenuScreen(::MinecraftCommands&, ::IMinecraftGame&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
