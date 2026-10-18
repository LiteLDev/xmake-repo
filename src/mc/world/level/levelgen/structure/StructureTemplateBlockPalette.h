#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUnknownBlockTypeRegistry;
class LegacyStructureBlockInfo;
class StructureTemplateData;
namespace br::worldgen { struct StructureBlockInfo; }
// clang-format on
#else // @header-generator platform
#include "mc/world/level/levelgen/structure/McStructureTemplateBlockPalette.h"
#include "mc/world/level/levelgen/structure/NbtStructureTemplateBlockPalette.h"
#endif // @header-generator platform

namespace br::worldgen {

struct StructureTemplateBlockPalette {
public:
    // StructureTemplateBlockPalette inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Type : uint {
        UNSET        = 0,
        MC_STRUCTURE = 1,
        NBT          = 2,
#else // @header-generator platform
    enum class Type : int {
        Unset       = 0,
        McStructure = 1,
        Nbt         = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::br::worldgen::StructureTemplateBlockPalette::Type> mType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                                   mData;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::StructureTemplateBlockPalette
    mcstructure(::StructureTemplateData const&, ulong, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> const&);
#else // @header-generator platform
    union {
        ::ll::TypedStorage<8, 32, ::br::worldgen::McStructureTemplateBlockPalette>  mcstructure;
        ::ll::TypedStorage<8, 32, ::br::worldgen::NbtStructureTemplateBlockPalette> nbt;
        ::ll::TypedStorage<8, 32, void*>                                            unset;
    } mData;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
