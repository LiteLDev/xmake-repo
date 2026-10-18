#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerSoundHandle {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong> mValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkc5f833;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerSoundHandle();

    MCNAPI explicit ServerSoundHandle(ulong);

    MCNAPI ::ServerSoundHandle operator++(int);

    MCNAPI bool operator==(::ServerSoundHandle const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(ulong);
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    ServerSoundHandle& operator=(ServerSoundHandle const&);
    ServerSoundHandle(ServerSoundHandle const&);
    ServerSoundHandle();
#endif // @header-generator platform
};
