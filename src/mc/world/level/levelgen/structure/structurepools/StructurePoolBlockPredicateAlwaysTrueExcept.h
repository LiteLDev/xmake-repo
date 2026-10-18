#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/Block.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
#endif // @header-generator platform
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateAlwaysTrueExcept : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::set<const Block*>> mCannotReplace;
    ::ll::TypedStorage<4, 4, float const>             mProbability;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::set<::Block const*>> mCannotReplace;
    ::ll::TypedStorage<4, 4, float const>                 mProbability;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrueExcept();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept();
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
    MCNAPI StructurePoolBlockPredicateAlwaysTrueExcept(std::set<const Block*> const&, float const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::set<const Block*> const&, float const);
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
    MCAPI bool $test(::Block const& block, ::IRandom& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::Block const&, ::IRandom&) const;
#else // @header-generator platform
    MCFOLD bool $test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const;
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
