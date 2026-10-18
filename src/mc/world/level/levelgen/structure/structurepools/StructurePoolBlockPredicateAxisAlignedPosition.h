#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateAxisAlignedPosition : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> mMinChance;
    ::ll::TypedStorage<4, 4, float const> mMaxChance;
    ::ll::TypedStorage<4, 4, int const>   mMinDist;
    ::ll::TypedStorage<4, 4, int const>   mMaxDist;
    ::ll::TypedStorage<1, 1, uchar const> mAxis;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    StructurePoolBlockPredicateAxisAlignedPosition();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition();
#else // @header-generator platform
    virtual bool test(::Block const& block, ::IRandom& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;
#else // @header-generator platform
    virtual bool test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::Block const&, ::IRandom&) const;
#else // @header-generator platform
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructurePoolBlockPredicateType getType() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockPredicateAxisAlignedPosition(float const, float const, int const, int const, uchar const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(float const, float const, int const, int const, uchar const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;
#else // @header-generator platform
    MCFOLD bool $test(::Block const& block, ::IRandom& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::Block const&, ::IRandom&) const;
#else // @header-generator platform
    MCAPI bool $test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructurePoolBlockPredicateType $getType() const;
#else // @header-generator platform
    MCFOLD ::StructurePoolBlockPredicateType $getType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
