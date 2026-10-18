#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/ObjectHelperBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::JSONObject { class ObjectNode; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

#if defined(LL_PLAT_A) // @header-generator platform
class MutableObjectHelper : public ::Bedrock::JSONObject::ObjectHelperBase<false> {
public:
    // MutableObjectHelper inner types define
    using const_iterator = std::__map_const_iterator<std::__tree_const_iterator<
        std::__value_type<std::string_view, Bedrock::JSONObject::Node*>,
        std::__tree_node<std::__value_type<std::string_view, Bedrock::JSONObject::Node*>, void*>*,
        long>>;

    using iterator = std::__map_iterator<std::__tree_iterator<
        std::__value_type<std::string_view, Bedrock::JSONObject::Node*>,
        std::__tree_node<std::__value_type<std::string_view, Bedrock::JSONObject::Node*>, void*>*,
        long>>;

    using InsertResult = std::pair<
        std::__map_iterator<std::__tree_iterator<
            std::__value_type<std::string_view, Bedrock::JSONObject::Node*>,
            std::__tree_node<std::__value_type<std::string_view, Bedrock::JSONObject::Node*>, void*>*,
            long>>,
        bool>;

#else // @header-generator platform
class MutableObjectHelper : public ::Bedrock::JSONObject::ObjectHelperBase<0> {
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MutableObjectHelper();

    MCNAPI std::pair<
        std::__map_iterator<std::__tree_iterator<
            std::__value_type<std::string_view, Bedrock::JSONObject::Node*>,
            std::__tree_node<std::__value_type<std::string_view, Bedrock::JSONObject::Node*>, void*>*,
            long>>,
#else // @header-generator platform
    MCNAPI ::std::pair<
        ::std::_Tree_iterator<::std::_Tree_val<
            ::std::_Tree_simple_types<::std::pair<::std::string_view const, ::Bedrock::JSONObject::Node*>>>>,
#endif // @header-generator platform
        bool>
#if defined(LL_PLAT_A) // @header-generator platform
    insert(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    insert(::std::string_view key, ::Bedrock::JSONObject::ValueWrapper const& value, bool copyKey);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
