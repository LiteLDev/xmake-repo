#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockRules {

struct TestType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TestType();

    virtual bool test(::Block const&, ::IRandom&) const = 0;

    virtual void appendMetadataKey(::Util::XXHash&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockRules
