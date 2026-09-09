#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class EntityContext;
class EntityId;
class EntityRegistry;
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
    MCNAPI static ::EntityNetId _serverGetEntityNetId(::EntityContext const&);

    MCNAPI static uint cerealize(::EntityNetId const&);

    MCNAPI static void decerealize(::EntityNetId&, uint);

    MCNAPI static ::Bedrock::Result<EntityNetId, std::error_code> deserialize(::ReadOnlyBinaryStream&);
    // NOLINTEND
};
