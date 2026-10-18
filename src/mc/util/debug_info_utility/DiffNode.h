#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/util/debug_info_utility/Modification.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace DebugInfoUtility {

struct DiffNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DebugInfoUtility::Modification> modification;
    ::ll::TypedStorage<8, 24, std::string>                     text;
    ::ll::UntypedStorage<8, 24>                                children;
    ::ll::TypedStorage<8, 8, ::Json::Value const*>             json;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk757f89;
    ::ll::UntypedStorage<8, 32> mUnk3176bd;
    ::ll::UntypedStorage<8, 24> mUnk10615d;
    ::ll::UntypedStorage<8, 8>  mUnk76a3fb;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DiffNode& operator=(DiffNode const&);
    DiffNode(DiffNode const&);
    DiffNode();
#endif // @header-generator platform
};

} // namespace DebugInfoUtility
