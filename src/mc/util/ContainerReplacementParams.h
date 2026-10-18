#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ReplacementParams.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Util {

struct ContainerReplacementParams : public ::Util::ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Container&> container;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkaf6b8a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerReplacementParams& operator=(ContainerReplacementParams const&);
    ContainerReplacementParams(ContainerReplacementParams const&);
    ContainerReplacementParams();
};

} // namespace Util
