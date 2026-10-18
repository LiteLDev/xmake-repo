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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                    mStructureName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>>    mStructureTag;
    ::ll::TypedStorage<1, 1, ::StructureTemplateResponseType> mResponseType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                   mStructureName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mStructureTag;
    ::ll::TypedStorage<1, 1, ::StructureTemplateResponseType>  mResponseType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StructureTemplateDataResponsePacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureTemplateDataResponsePacketPayload(::StructureTemplateDataResponsePacketPayload const&);
#else // @header-generator platform
    MCAPI StructureTemplateDataResponsePacketPayload(::StructureTemplateDataResponsePacketPayload const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureTemplateDataResponsePacketPayload(
        std::string const&,
        std::unique_ptr<CompoundTag>,
        ::StructureTemplateResponseType
#else // @header-generator platform
    MCAPI StructureTemplateDataResponsePacketPayload(
        ::std::string const&             structureName,
        ::std::unique_ptr<::CompoundTag> structureTag,
        ::StructureTemplateResponseType  type
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~StructureTemplateDataResponsePacketPayload();
#else // @header-generator platform
    MCAPI ::StructureTemplateDataResponsePacketPayload&
    operator=(::StructureTemplateDataResponsePacketPayload const& other);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::StructureTemplateDataResponsePacketPayload const&);
#else // @header-generator platform
    MCAPI void* $ctor(::StructureTemplateDataResponsePacketPayload const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::unique_ptr<CompoundTag>, ::StructureTemplateResponseType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::string const&             structureName,
        ::std::unique_ptr<::CompoundTag> structureTag,
        ::StructureTemplateResponseType  type
    );
#endif // @header-generator platform
    // NOLINTEND
};
