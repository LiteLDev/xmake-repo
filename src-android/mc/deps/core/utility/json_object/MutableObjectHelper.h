#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/json_object/ObjectHelperBase.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class Node; }
namespace Bedrock::JSONObject { class ObjectNode; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MutableObjectHelper();

    MCNAPI std::pair<
        std::__map_iterator<std::__tree_iterator<
            std::__value_type<std::string_view, Bedrock::JSONObject::Node*>,
            std::__tree_node<std::__value_type<std::string_view, Bedrock::JSONObject::Node*>, void*>*,
            long>>,
        bool>
    insert(std::string_view, ::Bedrock::JSONObject::ValueWrapper const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Bedrock::JSONObject
