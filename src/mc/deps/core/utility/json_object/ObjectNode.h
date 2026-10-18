#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Collection.h"
#include "mc/deps/core/utility/json_object/Node.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class MemoryPage; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class StringNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ObjectNode : public ::Bedrock::JSONObject::Node, public ::Bedrock::JSONObject::Collection {
public:
    // ObjectNode inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    template<bool T0> class iterator_base;
#else // @header-generator platform
    template<int T0> class iterator_base;
#endif // @header-generator platform
    // clang-format on

    // ObjectNode inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    template <bool T0>
#else // @header-generator platform
    template <int T0>
#endif // @header-generator platform
    class iterator_base {};
#if defined(LL_PLAT_A) // @header-generator platform

    using const_iterator = ::Bedrock::JSONObject::ObjectNode::iterator_base<true>;

    using iterator = ::Bedrock::JSONObject::ObjectNode::iterator_base<false>;

    using const_value_type = std::pair<const Bedrock::JSONObject::StringNode*, const Bedrock::JSONObject::Node*>;

public:
    // prevent constructor by default
    ObjectNode();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<false> begin();
#else // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<1> begin() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<true> begin() const;
#else // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<1> find(::std::string_view keyStr) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<false> end();
#else // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<0>
    insert(::std::string_view keyStr, ::Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<true> end() const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<true> find(std::string_view) const;

    MCNAPI ::Bedrock::JSONObject::ObjectNode::iterator_base<false>
    insert(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&, bool);

    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const&);
#else // @header-generator platform
    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const& contents);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
