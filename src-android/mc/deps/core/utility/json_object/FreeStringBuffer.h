#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/NodeBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject::Detail {

struct FreeStringBuffer : public ::Bedrock::JSONObject::NodeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mCapacity;
    // NOLINTEND

public:
    // prevent constructor by default
    FreeStringBuffer();
};

} // namespace Bedrock::JSONObject::Detail
