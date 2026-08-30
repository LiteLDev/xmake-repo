#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/debug_info_utility/Modification.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace DebugInfoUtility {

struct DiffNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DebugInfoUtility::Modification> modification;
    ::ll::TypedStorage<8, 24, std::string>                     text;
    ::ll::UntypedStorage<8, 24>                                children;
    ::ll::TypedStorage<8, 8, ::Json::Value const*>             json;
    // NOLINTEND
};

} // namespace DebugInfoUtility
