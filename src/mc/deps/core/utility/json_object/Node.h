#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/NodeBase.h"

namespace Bedrock::JSONObject {

#if defined(LL_PLAT_A) // @header-generator platform
class Node : public ::Bedrock::JSONObject::NodeBase {};
#else // @header-generator platform
class Node : public ::Bedrock::JSONObject::NodeBase {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void toJSONString(::std::string& dest) const;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace Bedrock::JSONObject
