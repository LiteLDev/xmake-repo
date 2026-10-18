#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BinaryStream;
class EntityContext;
class EntityId;
class EntityRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
// clang-format on

class EntityNetId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRawId;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::EntityNetId _serverGetEntityNetId(::EntityContext const&);

    MCNAPI static uint cerealize(::EntityNetId const&);

    MCNAPI static void decerealize(::EntityNetId&, uint);

    MCNAPI static ::Bedrock::Result<EntityNetId, std::error_code> deserialize(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCNAPI static ::Bedrock::Result<::EntityNetId> deserialize(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform
    // NOLINTEND
};
