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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                        mStructureName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                      mStructureName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                         mStructureBlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 96, ::StructureSettings>                mStructureSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 104, ::StructureSettings>               mStructureSettings;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::StructureTemplateRequestOperation> mRequestOperation;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StructureTemplateDataRequestPacketPayload();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureTemplateDataRequestPacketPayload(::StructureTemplateDataRequestPacketPayload const&);

    MCNAPI StructureTemplateDataRequestPacketPayload(
        std::string const&,
        ::BlockPos const&,
        ::StructureSettings const&,
        ::StructureTemplateRequestOperation
    );

    MCNAPI ~StructureTemplateDataRequestPacketPayload();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI StructureTemplateDataRequestPacketPayload(
        ::std::string const&                structureName,
        ::BlockPos const&                   blockPos,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation requestOperation
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::StructureTemplateDataRequestPacketPayload const&);

    MCNAPI void*
    $ctor(std::string const&, ::BlockPos const&, ::StructureSettings const&, ::StructureTemplateRequestOperation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string const&                structureName,
        ::BlockPos const&                   blockPos,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation requestOperation
    );
#endif
#endif // @header-generator platform
    // NOLINTEND
};
