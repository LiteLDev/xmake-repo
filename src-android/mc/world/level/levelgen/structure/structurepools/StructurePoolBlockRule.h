#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IRandom;
class IStructurePoolBlockPredicate;
class Random;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockRule {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
