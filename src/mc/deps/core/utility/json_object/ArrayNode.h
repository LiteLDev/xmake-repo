#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/Collection.h"
#include "mc/deps/core/utility/json_object/Node.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class NodeBase; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ArrayNode : public ::Bedrock::JSONObject::Node, public ::Bedrock::JSONObject::Collection {
public:
    // ArrayNode inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    template<bool T0> class iterator_base;
#else // @header-generator platform
    template<int T0> class iterator_base;
#endif // @header-generator platform
    // clang-format on

    // ArrayNode inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    template <bool T0>
#else // @header-generator platform
    template <int T0>
#endif // @header-generator platform
    class iterator_base {};
#if defined(LL_PLAT_A) // @header-generator platform

    using const_iterator = ::Bedrock::JSONObject::ArrayNode::iterator_base<true>;

    using iterator = ::Bedrock::JSONObject::ArrayNode::iterator_base<false>;

public:
    // prevent constructor by default
    ArrayNode();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const&);
#else // @header-generator platform
    MCNAPI bool setContents(::Bedrock::JSONObject::ValueWrapper const& contents);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
