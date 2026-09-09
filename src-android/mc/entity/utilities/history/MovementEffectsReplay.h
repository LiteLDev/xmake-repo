#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/network/packet/MovementEffectPacketPayload.h"
#include "mc/world/effect/EffectDuration.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
struct MovementEffectsComponent;
// clang-format on

namespace History {

struct MovementEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::MovementEffectPacketPayload> mPacketPayload;
    ::ll::TypedStorage<4, 4, ::EffectDuration>               mTickAdjustedDuration;
    ::ll::TypedStorage<8, 8, std::bitset<2>>                 mCorrectionTypeBitset;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementEffectsReplay();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MovementEffectsReplay();

    virtual void advanceLiveFrame(::Actor&, std::optional<ulong>);

    virtual std::bitset<2> getCorrectionTypeBitset() const;

    virtual void advanceFrame(::EntityContext&) const;
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
