#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/block_entity/AppendLoot.h"
#include "mc/world/level/levelgen/v2/processors/block_entity/ModifierType.h"
#include "mc/world/level/levelgen/v2/processors/block_entity/Passthrough.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

namespace br::worldgen::processors::BlockEntity {

struct Modifier : public ::br::worldgen::processors::BlockEntity::ModifierType {
public:
    // Modifier inner types define
    using Type = std::
        variant<br::worldgen::processors::BlockEntity::Passthrough, br::worldgen::processors::BlockEntity::AppendLoot>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<br::worldgen::processors::BlockEntity::Passthrough, br::worldgen::processors::BlockEntity::AppendLoot>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Modifier(Modifier const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Modifier();

    virtual std::unique_ptr<CompoundTag> apply(::IRandom&, ::CompoundTag const*) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Modifier(::br::worldgen::processors::BlockEntity::Passthrough);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::br::worldgen::processors::BlockEntity::Passthrough);
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
