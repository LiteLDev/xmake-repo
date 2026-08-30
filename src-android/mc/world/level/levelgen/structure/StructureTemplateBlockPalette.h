#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUnknownBlockTypeRegistry;
class LegacyStructureBlockInfo;
class StructureTemplateData;
namespace br::worldgen { struct StructureBlockInfo; }
// clang-format on

namespace br::worldgen {

struct StructureTemplateBlockPalette {
public:
    // StructureTemplateBlockPalette inner types define
    enum Type : uint {
        UNSET        = 0,
        MC_STRUCTURE = 1,
        NBT          = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::br::worldgen::StructureTemplateBlockPalette::Type> mType;
    ::ll::UntypedStorage<8, 32>                                                   mData;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::StructureTemplateBlockPalette
    mcstructure(::StructureTemplateData const&, ulong, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> const&);
    // NOLINTEND
};

} // namespace br::worldgen
