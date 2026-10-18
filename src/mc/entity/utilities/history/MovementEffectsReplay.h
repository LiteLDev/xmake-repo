#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/MovementEffectPacketPayload.h"
#include "mc/world/effect/EffectDuration.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
struct MovementEffectsComponent;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace History {

struct MovementEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::MovementEffectPacketPayload> mPacketPayload;
    ::ll::TypedStorage<4, 4, ::EffectDuration>               mTickAdjustedDuration;
    ::ll::TypedStorage<8, 8, std::bitset<2>>                 mCorrectionTypeBitset;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk5ab740;
    ::ll::UntypedStorage<4, 4>  mUnk5c62aa;
    ::ll::UntypedStorage<4, 4>  mUnk12db08;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MovementEffectsReplay& operator=(MovementEffectsReplay const&);
    MovementEffectsReplay(MovementEffectsReplay const&);
#endif // @header-generator platform
    MovementEffectsReplay();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MovementEffectsReplay();
#else // @header-generator platform
    virtual void advanceFrame(::EntityContext& entity) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void advanceLiveFrame(::Actor&, std::optional<ulong>);
#else // @header-generator platform
    virtual void advanceLiveFrame(::Actor& actor, ::std::optional<uint64>) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::bitset<2> getCorrectionTypeBitset() const;

    virtual void advanceFrame(::EntityContext&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $advanceLiveFrame(::Actor&, std::optional<ulong>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $advanceFrame(::EntityContext& entity) const;

    MCNAPI void $advanceLiveFrame(::Actor& actor, ::std::optional<uint64>);

    MCNAPI ::std::bitset<2> $getCorrectionTypeBitset() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::bitset<2> $getCorrectionTypeBitset() const;
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $advanceFrame(::EntityContext&) const;
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace History
