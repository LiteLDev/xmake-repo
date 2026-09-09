#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/vanilla_components/ActorDataComponentBase.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/world/actor/ActorFlags.h"

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
