#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/NodeBase.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject::Detail {

struct FreeStringBuffer : public ::Bedrock::JSONObject::NodeBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 8> mCapacity;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4> mUnk6d3287;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    FreeStringBuffer& operator=(FreeStringBuffer const&);
    FreeStringBuffer(FreeStringBuffer const&);
#endif // @header-generator platform
    FreeStringBuffer();
};

} // namespace Bedrock::JSONObject::Detail
