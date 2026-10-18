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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>         mCommand;
    ::ll::TypedStorage<8, 56, ::CommandOriginData> mOrigin;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>       mCommand;
    ::ll::TypedStorage<8, 64, ::CommandOriginData> mOrigin;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>  mVersion;
    ::ll::TypedStorage<1, 1, bool>                 mInternalSource;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    CommandRequestPacketPayload();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandRequestPacketPayload(::CommandContext&, bool);
#else // @header-generator platform
    MCAPI CommandRequestPacketPayload(::CommandContext& context, bool internalSource);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandContext>
    createCommandContext(::NetworkIdentifier const&, ::Bedrock::NonOwnerPointer<ILevel> const&, ::SubClientId) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandContext> createCommandContext(
        ::NetworkIdentifier const&                  source,
        ::Bedrock::NonOwnerPointer<::ILevel> const& level,
        ::SubClientId                               senderSubId
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CommandRequestPacketPayload();
#else // @header-generator platform
    MCAPI ~CommandRequestPacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandContext&, bool);
#else // @header-generator platform
    MCAPI void* $ctor(::CommandContext& context, bool internalSource);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
