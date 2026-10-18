#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/BlockPos.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class BlockSource;
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Randomize;
namespace Bedrock::Threading { class Mutex; }
#endif // @header-generator platform
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateCappedRandomBlockReplacement : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint const>                                  mMaximumAmount;
    ::ll::TypedStorage<8, 24, std::map<HashedString, HashedString> const> mBlockMappings;
    ::ll::TypedStorage<8, 24, std::vector<BlockPos>>                      mCandidatePositions;
    ::ll::TypedStorage<4, 40, std::mutex>                                 mCandidatePositionsLock;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint const>                                        mMaximumAmount;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::HashedString> const> mBlockMappings;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                        mCandidatePositions;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mCandidatePositionsLock;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedRandomBlockReplacement();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement();
#else // @header-generator platform
    virtual bool test(::Block const& block, ::IRandom&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const;
#else // @header-generator platform
    virtual bool test(::BlockPos const& worldPos, ::BlockPos const&, ::IRandom&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::Block const&, ::IRandom&) const;
#else // @header-generator platform
    virtual bool finalize(::BlockSource& region, ::IRandom& random) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool finalize(::BlockSource&, ::IRandom&);
#else // @header-generator platform
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructurePoolBlockPredicateType getType() const;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    virtual bool operator==(::StructurePoolBlockPredicateCappedRandomBlockReplacement const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool operator==(::StructurePoolBlockPredicateCappedRandomBlockReplacement const&) const;
#else // @header-generator platform
    virtual bool operator!=(::StructurePoolBlockPredicateCappedRandomBlockReplacement const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool operator!=(::StructurePoolBlockPredicateCappedRandomBlockReplacement const&) const;
#else // @header-generator platform
    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    StructurePoolBlockPredicateCappedRandomBlockReplacement(std::map<HashedString, HashedString> const&, uint const);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool _finalize(::BlockSource& region, ::IRandom& random, ::std::function<void(::BlockPos&)> applyToBlocks);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _finalize(::BlockSource&, ::IRandom&, std::function<void(BlockPos&)>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::map<HashedString, HashedString> const&, uint const);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _finalize(::BlockSource& region, ::IRandom& random, ::std::function<void(::BlockPos&)> applyToBlocks);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
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
    MCAPI bool $test(::BlockPos const& worldPos, ::BlockPos const&, ::IRandom&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $finalize(::BlockSource&, ::IRandom&);
#else // @header-generator platform
    MCAPI bool $finalize(::BlockSource& region, ::IRandom& random);
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
