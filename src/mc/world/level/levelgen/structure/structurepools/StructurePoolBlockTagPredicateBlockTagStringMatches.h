#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockTagPredicate.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockTagPredicateBlockTagStringMatches : public ::IStructurePoolBlockTagPredicate {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const&>     mBlock;
    ::ll::TypedStorage<8, 24, std::string const> mTagKey;
    ::ll::TypedStorage<8, 24, std::string const> mTagValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const&>       mBlock;
    ::ll::TypedStorage<8, 32, ::std::string const> mTagKey;
    ::ll::TypedStorage<8, 32, ::std::string const> mTagValue;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockTagPredicateBlockTagStringMatches&
    operator=(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches(StructurePoolBlockTagPredicateBlockTagStringMatches const&);
    StructurePoolBlockTagPredicateBlockTagStringMatches();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructurePoolBlockTagPredicateBlockTagStringMatches();
#else // @header-generator platform
    virtual bool test(::Block const& block, ::CompoundTag const& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::Block const&, ::CompoundTag const&) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructurePoolBlockTagPredicateBlockTagStringMatches(::Block const&, std::string, std::string);
#else // @header-generator platform
    MCAPI
    StructurePoolBlockTagPredicateBlockTagStringMatches(::Block const& block, ::std::string tag, ::std::string value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Block const&, std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Block const& block, ::std::string tag, ::std::string value);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $test(::Block const&, ::CompoundTag const&) const;
#else // @header-generator platform
    MCAPI bool $test(::Block const& block, ::CompoundTag const& tag) const;
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
