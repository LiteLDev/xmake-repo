#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
class IRandom;
#else // @header-generator platform
#endif // @header-generator platform
class IStructurePoolBlockPredicate;
#if defined(LL_PLAT_A) // @header-generator platform
class Random;
namespace Util { class XXHash; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class StructurePoolBlockRule {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<IStructurePoolBlockPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IStructurePoolBlockPredicate> const> mTargetPredicate;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IStructurePoolBlockPredicate> const> mPositionPredicate;
    ::ll::TypedStorage<8, 8, ::Block const*>                                      mResultBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockRule();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockRule(
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        ::Block const*
    );

    MCNAPI StructurePoolBlockRule(
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        ::Block const*
    );

    MCNAPI void appendMetadataKey(::Util::XXHash&) const;

    MCNAPI bool finalizeRule(::BlockSource&, ::IRandom&);

    MCNAPI bool
    processRule(::Block const&, ::Block const&, ::Random&, ::Block const*&, ::BlockPos const&, ::BlockPos const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        ::Block const*
    );

    MCNAPI void* $ctor(
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        std::unique_ptr<IStructurePoolBlockPredicate>&&,
        ::Block const*
    );
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mTargetPredicate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mPositionPredicate;
    ::ll::TypedStorage<8, 8, ::Block const*>                                          mResultBlock;
#endif // @header-generator platform
    // NOLINTEND
};
