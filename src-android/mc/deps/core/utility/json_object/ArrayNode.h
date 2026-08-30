#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Collection.h"
#include "mc/deps/core/utility/json_object/Node.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class NodeBase; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ArrayNode : public ::Bedrock::JSONObject::Node, public ::Bedrock::JSONObject::Collection {
public:
    // ArrayNode inner types declare
    // clang-format off
    template<bool T0> class iterator_base;
    // clang-format on

    // ArrayNode inner types define
    template <bool T0>
    class iterator_base {};

    using const_iterator = ::Bedrock::JSONObject::ArrayNode::iterator_base<true>;

    using iterator = ::Bedrock::JSONObject::ArrayNode::iterator_base<false>;

public:
    // prevent constructor by default
    ArrayNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const&);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
