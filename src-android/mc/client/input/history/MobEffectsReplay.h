#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/network/packet/MobEffectPacket.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class MobEffectInstance;
// clang-format on

namespace History {

struct MobEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>                    mPacket;
    ::ll::TypedStorage<8, 8, std::bitset<2> const> mCorrectionTypeBitset;
    // NOLINTEND

public:
    // prevent constructor by default
    MobEffectsReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MobEffectsReplay();

    virtual void advanceLiveFrame(::Actor&, std::optional<ulong>);

    virtual std::bitset<2> getCorrectionTypeBitset() const;

    virtual void advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MobEffectsReplay(::MobEffectPacket, std::vector<MobEffectInstance> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::MobEffectPacket, std::vector<MobEffectInstance> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $advanceLiveFrame(::Actor&, std::optional<ulong>);

    MCNAPI std::bitset<2> $getCorrectionTypeBitset() const;

    MCNAPI void $advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
