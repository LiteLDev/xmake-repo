#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/StructureTemplateResponseType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct StructureTemplateDataResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                    mStructureName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>>    mStructureTag;
    ::ll::TypedStorage<1, 1, ::StructureTemplateResponseType> mResponseType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplateDataResponsePacketPayload(::StructureTemplateDataResponsePacketPayload const&);

    MCNAPI StructureTemplateDataResponsePacketPayload(
        std::string const&,
        std::unique_ptr<CompoundTag>,
        ::StructureTemplateResponseType
    );

    MCNAPI ~StructureTemplateDataResponsePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureTemplateDataResponsePacketPayload const&);

    MCNAPI void* $ctor(std::string const&, std::unique_ptr<CompoundTag>, ::StructureTemplateResponseType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
