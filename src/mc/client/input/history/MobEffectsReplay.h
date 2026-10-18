#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/network/packet/MobEffectPacket.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
class MobEffectInstance;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/entity/utilities/IMovementCorrection.h"
#include "mc/network/packet/MobEffectPacket.h"

// auto generated forward declare list
// clang-format off
class Actor;
class EntityContext;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace History {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MobEffectsReplay : public ::IMovementCorrection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::MobEffectPacket>     mPacket;
    ::ll::TypedStorage<4, 4, ::std::bitset<2> const> mCorrectionTypeBitset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void advanceFrame(::EntityContext& entity) const /*override*/;

    virtual void advanceLiveFrame(::Actor& actor, ::std::optional<uint64>) /*override*/;

    virtual ::std::bitset<2> getCorrectionTypeBitset() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $advanceFrame(::EntityContext& entity) const;

    MCAPI void $advanceLiveFrame(::Actor& actor, ::std::optional<uint64>);

    MCAPI ::std::bitset<2> $getCorrectionTypeBitset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
struct MobEffectsReplay {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace History
