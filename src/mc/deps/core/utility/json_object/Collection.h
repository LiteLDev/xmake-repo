#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/platform/container/list.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class NodeBase; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Bedrock::JSONObject {

struct Collection {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<2, 8>     mList;
    ::ll::TypedStorage<4, 4, uint> mSize;
    ::ll::TypedStorage<4, 4, uint> mPadding;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnkf18ad4;
    ::ll::UntypedStorage<4, 4> mUnk1af5e3;
    ::ll::UntypedStorage<4, 4> mUnk75656f;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Collection& operator=(Collection const&);
    Collection(Collection const&);
    Collection();
#endif // @header-generator platform
};

} // namespace Bedrock::JSONObject
