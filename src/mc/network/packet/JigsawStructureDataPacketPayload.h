#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
// clang-format on

struct JigsawStructureDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CompoundTag> mJigsawStructureDataTag;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CompoundTag> mJigsawStructureDataTag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JigsawStructureDataPacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit JigsawStructureDataPacketPayload(::SharedTypes::v1_21_20::JigsawStructureData const&);
#else // @header-generator platform
    MCAPI explicit JigsawStructureDataPacketPayload(
        ::SharedTypes::v1_21_20::JigsawStructureData const& jigsawStructureData
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData> getJigsawStrutureData() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData> getJigsawStrutureData() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const& jigsawStructureData);
#endif // @header-generator platform
    // NOLINTEND
};
