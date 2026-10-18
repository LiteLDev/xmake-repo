#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class CompoundTag;
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class ServerPlayer;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerPlayerLoader {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc3e923;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ServerPlayerLoader& operator=(ServerPlayerLoader const&);
    ServerPlayerLoader(ServerPlayerLoader const&);
#endif // @header-generator platform
    ServerPlayerLoader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ServerPlayerLoader(::Bedrock::NonOwnerPointer<ILevel> const&);

    MCNAPI bool loadNewPlayer(::ServerPlayer&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<ILevel> const&);
#else // @header-generator platform
    MCNAPI bool loadNewPlayer(::ServerPlayer& newPlayer, bool isXboxLive);
#endif // @header-generator platform
    // NOLINTEND
};
