#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/pack_command/MoveReplaceBatch.h"
#include "mc/resources/pack_command/RemoveBatch.h"
#include "mc/resources/pack_command/UpgradeLegacyDependenciesBatch.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { class IResourceRepositories; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct CommandExecutor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<::PackCommand::UpgradeLegacyDependenciesBatch, ::PackCommand::MoveReplaceBatch, ::PackCommand::RemoveBatch>> mCommands;
    ::ll::TypedStorage<8, 8, ::PackCommand::IResourceRepositories&> mRepositories;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk3825d9;
    ::ll::UntypedStorage<8, 8>  mUnke088f7;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CommandExecutor& operator=(CommandExecutor const&);
    CommandExecutor(CommandExecutor const&);
    CommandExecutor();
};

} // namespace PackCommand
