#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/world/level/BlockPos.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Vec3;
struct PlaySoundOptions;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct PlaySoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      mName;
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mPos;
    ::ll::TypedStorage<4, 4, float>                             mVolume;
    ::ll::TypedStorage<4, 4, float>                             mPitch;
    ::ll::TypedStorage<4, 4, int>                               mLoopCount;
    ::ll::TypedStorage<8, 16, std::optional<ServerSoundHandle>> mServerSoundHandle;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<4, 12, ::BlockPos>                           mPos;
    ::ll::TypedStorage<4, 4, float>                                 mVolume;
    ::ll::TypedStorage<4, 4, float>                                 mPitch;
    ::ll::TypedStorage<4, 4, int>                                   mLoopCount;
    ::ll::TypedStorage<8, 16, ::std::optional<::ServerSoundHandle>> mServerSoundHandle;
#endif // @header-generator platform
    // NOLINTEND
};
