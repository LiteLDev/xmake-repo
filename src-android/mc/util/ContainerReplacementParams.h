#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ReplacementParams.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
// clang-format on

namespace Util {

struct ContainerReplacementParams : public ::Util::ReplacementParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Container&> container;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerReplacementParams& operator=(ContainerReplacementParams const&);
    ContainerReplacementParams(ContainerReplacementParams const&);
    ContainerReplacementParams();
};

} // namespace Util
