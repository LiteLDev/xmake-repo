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
    ::ll::TypedStorage<8, 32, ::CompoundTag> mJigsawStructureDataTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit JigsawStructureDataPacketPayload(::SharedTypes::v1_21_20::JigsawStructureData const&);

    MCNAPI std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData> getJigsawStrutureData() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::JigsawStructureData const&);
    // NOLINTEND
};
