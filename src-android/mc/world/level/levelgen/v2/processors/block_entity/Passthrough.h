#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_entity/ModifierType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockEntity {

struct Passthrough : public ::br::worldgen::processors::BlockEntity::ModifierType {
public:
    // prevent constructor by default
    Passthrough& operator=(Passthrough const&);
    Passthrough();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Passthrough();

    virtual std::unique_ptr<CompoundTag> apply(::IRandom&, ::CompoundTag const*) const;

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
    MCNAPI std::unique_ptr<CompoundTag> $apply(::IRandom&, ::CompoundTag const*) const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockEntity
