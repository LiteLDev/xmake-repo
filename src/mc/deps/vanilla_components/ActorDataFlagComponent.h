#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"
#include "mc/platform/brstd/bitset.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFlags.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDataFlagComponent : public ::ActorDataComponentBase<brstd::bitset<131, ulong>> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ulong getFlags(int) const;

    MCNAPI bool getStatusFlag(::ActorFlags) const;

    MCNAPI std::optional<brstd::bitset<131, ulong>> setFlags(ulong, int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ulong getFlags(::brstd::bitset<131, ulong> const&, int);

    MCNAPI static std::optional<brstd::bitset<131, ulong>> setFlags(::brstd::bitset<131, ulong>&, ulong, int);
    // NOLINTEND
};
#else // @header-generator platform
struct ActorDataFlagComponent : public ::ActorDataComponentBase<::brstd::bitset<131, uint64>> {};
#endif // @header-generator platform
