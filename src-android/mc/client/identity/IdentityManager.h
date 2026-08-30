#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/identity/IdentityType.h"

// auto generated forward declare list
// clang-format off
namespace Social { class Identity; }
// clang-format on

namespace Social {

class IdentityManager {
public:
    // IdentityManager inner types define
    using IdentityMap = std::unordered_map<Social::IdentityType, std::shared_ptr<Social::Identity>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<Social::IdentityType, std::shared_ptr<Social::Identity>>> mIdentityMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<Social::IdentityType, std::shared_ptr<Social::Identity>>, void*>*>>
           begin();

    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<Social::IdentityType, std::shared_ptr<Social::Identity>>, void*>*>>
           end() const;

    MCNAPI std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<Social::IdentityType, std::shared_ptr<Social::Identity>>, void*>*>>
           end();

    MCNAPI std::shared_ptr<Social::Identity> get(::Social::IdentityType) const;
    // NOLINTEND
};

} // namespace Social
