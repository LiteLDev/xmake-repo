#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/pack_command/IResourceRepositories.h"
#include "mc/resources/pack_command/RepositoriesOptions.h"

namespace PackCommand {

class RepositoryImpl : public ::PackCommand::IResourceRepositories {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::PackCommand::RepositoriesOptions> mOptions;
    // NOLINTEND
};

} // namespace PackCommand
