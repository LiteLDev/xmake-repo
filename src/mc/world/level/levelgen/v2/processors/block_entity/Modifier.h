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
#if defined(LL_PLAT_A) // @header-generator platform
    using Type = std::
        variant<br::worldgen::processors::BlockEntity::Passthrough, br::worldgen::processors::BlockEntity::AppendLoot>;
#else // @header-generator platform
    using Type = ::std::variant<
        ::br::worldgen::processors::BlockEntity::Passthrough,
        ::br::worldgen::processors::BlockEntity::AppendLoot>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<br::worldgen::processors::BlockEntity::Passthrough, br::worldgen::processors::BlockEntity::AppendLoot>> mData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::br::worldgen::processors::BlockEntity::Passthrough,
            ::br::worldgen::processors::BlockEntity::AppendLoot>>
        mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    Modifier(Modifier const&);
#else // @header-generator platform
    Modifier();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Modifier();
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom& random, ::CompoundTag const* existingTag) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> apply(::IRandom&, ::CompoundTag const*) const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Modifier(::br::worldgen::processors::BlockEntity::Passthrough);
#else // @header-generator platform
    MCAPI explicit Modifier(::br::worldgen::processors::BlockEntity::AppendLoot match);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::br::worldgen::processors::BlockEntity::Passthrough);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::br::worldgen::processors::BlockEntity::AppendLoot match);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> $apply(::IRandom&, ::CompoundTag const*) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> $apply(::IRandom& random, ::CompoundTag const* existingTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors::BlockEntity
