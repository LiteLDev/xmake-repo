#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class CommandsRegistryConfiguration : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, CommandPermissionLevel>> mCommandPermissionLevels;
    ::ll::TypedStorage<1, 2, std::optional<CommandPermissionLevel>>                    mDefaultCommandPermissionLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandsRegistryConfiguration& operator=(CommandsRegistryConfiguration const&);
    CommandsRegistryConfiguration();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandsRegistryConfiguration();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<CommandPermissionLevel> getCommandPermissionLevel(std::string const&) const;
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
