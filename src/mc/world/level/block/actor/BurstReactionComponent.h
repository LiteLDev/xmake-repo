#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LabTableReaction;
// clang-format on

class BurstReactionComponent : public ::LabTableReactionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType>  mParticleType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString> mNewParticleType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mNewParticleType;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>         mDims;
    ::ll::TypedStorage<4, 12, ::Vec3>         mDirRange;
    ::ll::TypedStorage<4, 4, int>             mCount;
    ::ll::TypedStorage<4, 4, int>             mDataMin;
    ::ll::TypedStorage<4, 4, int>             mDataMax;
    ::ll::TypedStorage<1, 1, bool>            mDirOneWay;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BurstReactionComponent();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BurstReactionComponent();
#else // @header-generator platform
    virtual ~BurstReactionComponent() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _onEnd(::LabTableReaction& owner, ::BlockSource& region) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onEnd(::LabTableReaction&, ::BlockSource&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_onEnd(::LabTableReaction& owner, ::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
