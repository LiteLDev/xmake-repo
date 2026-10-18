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

struct AppendLoot : public ::br::worldgen::processors::BlockEntity::ModifierType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mLootTable;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AppendLoot();
#else // @header-generator platform
    virtual ::std::unique_ptr<::CompoundTag> apply(::IRandom& random, ::CompoundTag const* existingTag) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CompoundTag> apply(::IRandom&, ::CompoundTag const*) const;
#else // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendMetadataKey(::Util::XXHash&) const;
#else // @header-generator platform
    virtual ~AppendLoot() /*override*/;
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
