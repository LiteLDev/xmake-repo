#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class IStructurePoolBlockPredicate {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IStructurePoolBlockPredicate();
#else // @header-generator platform
    virtual ~IStructurePoolBlockPredicate() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::IRandom&) const = 0;
#else // @header-generator platform
    virtual bool test(::Block const& block, ::IRandom& random) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool test(::Block const&, ::IRandom&) const = 0;
#else // @header-generator platform
    virtual bool test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool finalize(::BlockSource&, ::IRandom&);
#else // @header-generator platform
    virtual bool finalize(::BlockSource& region, ::IRandom& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string validate() const;
#else // @header-generator platform
    virtual ::std::string validate() const;
#endif // @header-generator platform

    virtual ::StructurePoolBlockPredicateType getType() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $finalize(::BlockSource&, ::IRandom&);
#else // @header-generator platform
    MCFOLD bool $finalize(::BlockSource& region, ::IRandom& random);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $validate() const;
#else // @header-generator platform
    MCFOLD ::std::string $validate() const;


#endif // @header-generator platform
    // NOLINTEND
};
