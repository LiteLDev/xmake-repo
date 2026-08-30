#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/server/commands/CommandOriginData.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class CommandContext;
class ILevel;
class NetworkIdentifier;
// clang-format on

struct CommandRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>         mCommand;
    ::ll::TypedStorage<8, 56, ::CommandOriginData> mOrigin;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>  mVersion;
    ::ll::TypedStorage<1, 1, bool>                 mInternalSource;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandRequestPacketPayload(::CommandContext&, bool);

    MCNAPI std::unique_ptr<CommandContext>
    createCommandContext(::NetworkIdentifier const&, ::Bedrock::NonOwnerPointer<ILevel> const&, ::SubClientId) const;

    MCNAPI ~CommandRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandContext&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
