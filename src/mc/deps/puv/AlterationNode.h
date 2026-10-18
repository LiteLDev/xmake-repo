#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/PathElement.h"
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on
#endif // @header-generator platform

namespace Puv::internal {

struct AlterationNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>  mMap;
    ::ll::UntypedStorage<8, 160> mAlteration;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64>  mUnkfe287f;
    ::ll::UntypedStorage<8, 160> mUnk629784;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AlterationNode();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    AlterationNode& operator=(AlterationNode const&);
    AlterationNode(AlterationNode const&);
    AlterationNode();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fill(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Puv::internal::AlterationNode&,
        const std::string*,
        const std::string*,
        std::variant<
            std::monostate,
            std::pair<
                std::function<void(entt::meta_any&, entt::meta_any&)>,
                Bedrock::small_vector<Puv::internal::PathElement, 1>>>
#else // @header-generator platform
        ::Puv::internal::AlterationNode&                                                       node,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>> it,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>> end,
        ::std::variant<
            ::std::monostate,
            ::std::pair<
                ::std::function<void(::entt::meta_any&, ::entt::meta_any&)>,
                ::Bedrock::small_vector<::Puv::internal::PathElement, 1>>> alt
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv::internal
