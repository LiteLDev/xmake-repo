#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
class ILevel;
class ServerPlayer;
class Vec3;
// clang-format on

class ServerPlayerLoader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPlayerLoader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerPlayerLoader(::Bedrock::NonOwnerPointer<ILevel> const&);

    MCNAPI bool loadNewPlayer(::ServerPlayer&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<ILevel> const&);
    // NOLINTEND
};
