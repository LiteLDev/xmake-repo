#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUnknownBlockTypeRegistry;
class StructureBlockPalette;
class StructureTemplateData;
#if defined(LL_PLAT_A) // @header-generator platform
namespace br::worldgen { struct StructureBlockInfo; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace br::worldgen {

struct McStructureTemplateBlockPalette {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::StructureTemplateData const*>                               mMcstructure;
    ::ll::TypedStorage<8, 8, ::StructureBlockPalette const*>                               mPalette;
    ::ll::TypedStorage<8, 8, ::Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> const*> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 8, ulong>                                                        mIndex;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::StructureTemplateData const*>                                 mMcstructure;
    ::ll::TypedStorage<8, 8, ::StructureBlockPalette const*>                                 mPalette;
    ::ll::TypedStorage<8, 8, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> const*> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 8, uint64>                                                         mIndex;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
