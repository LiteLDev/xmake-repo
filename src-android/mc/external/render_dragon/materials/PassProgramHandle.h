#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials::definition { struct StageInputMap; }
// clang-format on

namespace dragon::materials {

struct PassProgramHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                                 mHandle;
    ::ll::TypedStorage<8, 8, ::dragon::materials::definition::StageInputMap const*> mInputDeclaration;
    // NOLINTEND
};

} // namespace dragon::materials
