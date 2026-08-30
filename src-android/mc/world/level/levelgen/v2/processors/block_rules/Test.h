#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/BlockStateMatch.h"
#include "mc/world/level/levelgen/v2/processors/RandomBlockStateMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/AlwaysTrue.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/BlockMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/RandomBlockMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/TagMatch.h"
#include "mc/world/level/levelgen/v2/processors/block_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct Test : public ::br::worldgen::processors::BlockRules::TestType {
public:
    // Test inner types define
    using Type = std::variant<
        br::worldgen::processors::BlockRules::AlwaysTrue,
        br::worldgen::processors::BlockRules::BlockMatch,
        br::worldgen::processors::BlockRules::RandomBlockMatch,
        br::worldgen::processors::BlockRules::TagMatch,
        br::worldgen::processors::BlockRules::BlockStateMatch,
        br::worldgen::processors::BlockRules::RandomBlockStateMatch>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, std::variant<br::worldgen::processors::BlockRules::AlwaysTrue, br::worldgen::processors::BlockRules::BlockMatch, br::worldgen::processors::BlockRules::RandomBlockMatch, br::worldgen::processors::BlockRules::TagMatch, br::worldgen::processors::BlockRules::BlockStateMatch, br::worldgen::processors::BlockRules::RandomBlockStateMatch>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Test(Test const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Test();

    virtual bool test(::Block const&, ::IRandom&) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const&, ::IRandom&) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
