#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/pos_rules/TestType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::PosRules {

struct AlwaysTrue : public ::br::worldgen::processors::PosRules::TestType {
public:
    // prevent constructor by default
    AlwaysTrue& operator=(AlwaysTrue const&);
    AlwaysTrue();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AlwaysTrue();

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
