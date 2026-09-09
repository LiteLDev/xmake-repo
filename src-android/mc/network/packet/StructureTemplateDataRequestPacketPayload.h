#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

struct StructureTemplateDataRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                        mStructureName;
    ::ll::TypedStorage<4, 12, ::BlockPos>                         mStructureBlockPos;
    ::ll::TypedStorage<8, 96, ::StructureSettings>                mStructureSettings;
    ::ll::TypedStorage<1, 1, ::StructureTemplateRequestOperation> mRequestOperation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplateDataRequestPacketPayload(::StructureTemplateDataRequestPacketPayload const&);

    MCNAPI StructureTemplateDataRequestPacketPayload(
        std::string const&,
        ::BlockPos const&,
        ::StructureSettings const&,
        ::StructureTemplateRequestOperation
    );

    MCNAPI ~StructureTemplateDataRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureTemplateDataRequestPacketPayload const&);

    MCNAPI void*
    $ctor(std::string const&, ::BlockPos const&, ::StructureSettings const&, ::StructureTemplateRequestOperation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
