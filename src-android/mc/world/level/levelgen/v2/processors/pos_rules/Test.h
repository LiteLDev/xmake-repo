#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/pos_rules/AlwaysTrue.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/AxisAlignedLinear.h"
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct Test : public ::br::worldgen::processors::PosRules::TestType {
public:
    // Test inner types define
    using Type = std::
        variant<br::worldgen::processors::PosRules::AlwaysTrue, br::worldgen::processors::PosRules::AxisAlignedLinear>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<br::worldgen::processors::PosRules::AlwaysTrue, br::worldgen::processors::PosRules::AxisAlignedLinear>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Test(Test const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Test();

    virtual bool test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const;

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
    MCNAPI bool $test(::BlockPos, ::BlockPos, ::BlockPos, ::IRandom&) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::PosRules
