#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/MoveReplaceBatch.h"
#include "mc/resources/pack_command/RemoveBatch.h"
#include "mc/resources/pack_command/UpgradeLegacyDependenciesBatch.h"

// auto generated forward declare list
// clang-format off
namespace PackCommand { class IResourceRepositories; }
// clang-format on

namespace PackCommand {

struct CommandExecutor {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, std::variant<::PackCommand::UpgradeLegacyDependenciesBatch, ::PackCommand::MoveReplaceBatch, ::PackCommand::RemoveBatch>> mCommands;
    ::ll::TypedStorage<8, 8, ::PackCommand::IResourceRepositories&> mRepositories;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CommandExecutor& operator=(CommandExecutor const&);
    CommandExecutor(CommandExecutor const&);
    CommandExecutor();
};

} // namespace PackCommand
