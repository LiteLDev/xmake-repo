#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerSoundHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong> mValue;
    // NOLINTEND

public:
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
};
