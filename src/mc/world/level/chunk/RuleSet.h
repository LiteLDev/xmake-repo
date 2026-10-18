#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_entity/Modifier.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/Test.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/Test.h"

// auto generated forward declare list
// clang-format off
class Block;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class CompoundTag;
class IRandom;
namespace Util { class XXHash; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace br::worldgen::processors {

struct RuleSet {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 64, ::br::worldgen::processors::BlockRules::Test>      mInputPredicate;
    ::ll::TypedStorage<8, 64, ::br::worldgen::processors::BlockRules::Test>      mLocPredicate;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::br::worldgen::processors::BlockRules::Test>      mInputPredicate;
    ::ll::TypedStorage<8, 72, ::br::worldgen::processors::BlockRules::Test>      mLocPredicate;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 48, ::br::worldgen::processors::PosRules::Test>        mPosPredicate;
    ::ll::TypedStorage<8, 8, ::Block const*>                                     mOutputState;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::br::worldgen::processors::BlockEntity::Modifier> mBlockEntityModifier;
#else // @header-generator platform
    ::ll::TypedStorage<8, 56, ::br::worldgen::processors::BlockEntity::Modifier> mBlockEntityModifier;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RuleSet& operator=(RuleSet const&);
#if defined(LL_PLAT_A) // @header-generator platform
    RuleSet(RuleSet const&);
#else // @header-generator platform
#endif // @header-generator platform
    RuleSet();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RuleSet(::br::worldgen::processors::RuleSet&&);
#else // @header-generator platform
    MCAPI RuleSet(::br::worldgen::processors::RuleSet const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::processors::RuleSet& operator=(::br::worldgen::processors::RuleSet&&);
#else // @header-generator platform
    MCAPI ::br::worldgen::processors::RuleSet withModifier(::br::worldgen::processors::BlockEntity::Modifier modifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::processors::RuleSet withLoc(::br::worldgen::processors::BlockRules::Test);
#else // @header-generator platform
    MCAPI ::br::worldgen::processors::RuleSet withPos(::br::worldgen::processors::PosRules::Test pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::processors::RuleSet withModifier(::br::worldgen::processors::BlockEntity::Modifier);

    MCNAPI ::br::worldgen::processors::RuleSet withPos(::br::worldgen::processors::PosRules::Test);

    MCNAPI ~RuleSet();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::processors::RuleSet
    from(::br::worldgen::processors::BlockRules::Test, ::Block const&);
#else // @header-generator platform
    MCAPI ~RuleSet();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::br::worldgen::processors::RuleSet&&);
#else // @header-generator platform
    MCAPI void* $ctor(::br::worldgen::processors::RuleSet const&);
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
};

} // namespace br::worldgen::processors
