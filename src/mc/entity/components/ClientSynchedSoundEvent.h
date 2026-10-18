#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/LevelSoundEventPacketPayload.h"

struct ClientSynchedSoundEvent : public ::LevelSoundEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mTickDelay;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ClientSynchedSoundEvent& operator=(ClientSynchedSoundEvent const&);
    ClientSynchedSoundEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ClientSynchedSoundEvent(::LevelSoundEventPacketPayload const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LevelSoundEventPacketPayload const&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
