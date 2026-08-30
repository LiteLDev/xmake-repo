#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/container/list.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class NodeBase; }
// clang-format on

namespace Bedrock::JSONObject {

struct Collection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>     mList;
    ::ll::TypedStorage<4, 4, uint> mSize;
    ::ll::TypedStorage<4, 4, uint> mPadding;
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
