#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
namespace Json { class Value; }
// clang-format on

class BlockListSerializer {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void loadJSON(::Json::Value, ::MolangVersion, ::BlockDescriptor&);
#else // @header-generator platform
    MCNAPI static void loadJSON(::Json::Value value, ::MolangVersion molangVersion, ::BlockDescriptor& blockDescriptor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void loadJSON(::Json::Value, ::MolangVersion, std::vector<BlockDescriptor>&);

    MCNAPI static void saveJSON(std::vector<BlockDescriptor> const&, ::Json::Value&);
#else // @header-generator platform
    MCNAPI static void
    loadJSON(::Json::Value value, ::MolangVersion molangVersion, ::std::vector<::BlockDescriptor>& blockDescriptors);
#endif // @header-generator platform
    // NOLINTEND
};
