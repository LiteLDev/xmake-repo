#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Collection.h"
#include "mc/deps/core/utility/json_object/Node.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ObjectNode : public ::Bedrock::JSONObject::Node, public ::Bedrock::JSONObject::Collection {
public:
    // ObjectNode inner types declare
    // clang-format off
    template<bool T0> class iterator_base;
    // clang-format on

    // ObjectNode inner types define
    template <bool T0>
    class iterator_base {};

    using const_iterator = ::Bedrock::JSONObject::ObjectNode::iterator_base<true>;

    using iterator = ::Bedrock::JSONObject::ObjectNode::iterator_base<false>;

    using const_value_type = std::pair<const Bedrock::JSONObject::StringNode*, const Bedrock::JSONObject::Node*>;

public:
    // prevent constructor by default
    ObjectNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<false> begin();

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<true> begin() const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<false> end();

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<true> end() const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<true> find(std::string_view) const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<false>
    insert(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&, bool);

    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const&);
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
