#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/deps/core/math/Vec3.h"
#else // @header-generator platform
#endif // @header-generator platform

struct PlaySoundOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                      mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mPosition;
    ::ll::TypedStorage<4, 4, float>                             mVolume;
    ::ll::TypedStorage<4, 4, float>                             mPitch;
    ::ll::TypedStorage<4, 4, int>                               mLoopCount;
    ::ll::TypedStorage<8, 16, std::optional<ServerSoundHandle>> mServerSoundHandle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk7cb4c8;
    ::ll::UntypedStorage<4, 12> mUnk7b7755;
    ::ll::UntypedStorage<4, 4>  mUnk209892;
    ::ll::UntypedStorage<4, 4>  mUnka6df4a;
    ::ll::UntypedStorage<4, 4>  mUnk5c4869;
    ::ll::UntypedStorage<8, 16> mUnka38c93;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundOptions& operator=(PlaySoundOptions const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PlaySoundOptions(PlaySoundOptions const&);
#endif // @header-generator platform
    PlaySoundOptions();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlaySoundOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#endif // @header-generator platform
};
