#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateBlockMatch : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<HashedString> const> mBlockMatchings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString> const> mBlockMatchings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateBlockMatch();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructurePoolBlockPredicateBlockMatch();
#else // @header-generator platform
    virtual bool test(::Block const& block, ::IRandom&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;
#else // @header-generator platform
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::Block const&, ::IRandom&) const;
#else // @header-generator platform
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructurePoolBlockPredicateType getType() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StructurePoolBlockPredicateBlockMatch(::Block const&);

    MCNAPI explicit StructurePoolBlockPredicateBlockMatch(std::vector<HashedString> const);
#else // @header-generator platform
    MCAPI explicit StructurePoolBlockPredicateBlockMatch(::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Block const&);

    MCNAPI void* $ctor(std::vector<HashedString> const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;
#else // @header-generator platform
    MCAPI bool $test(::Block const& block, ::IRandom&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::Block const&, ::IRandom&) const;
#else // @header-generator platform
    MCFOLD bool $test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;
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
