#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

namespace cereal {

class ComponentStorage {
public:
    // ComponentStorage inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StorageType = ::brstd::
        flat_map<std::string, entt::meta_any, std::less<void>, std::vector<std::string>, std::vector<entt::meta_any>>;
#else // @header-generator platform
    using KeyIterable = ::entt::iterable_adaptor<
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::string>>>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using KeyIterable = ::entt::iterable_adaptor<const std::string*, const std::string*>;
#else // @header-generator platform
    using StorageType = ::brstd::flat_map<
        ::std::string,
        ::entt::meta_any,
        ::std::less<void>,
        ::std::vector<::std::string>,
        ::std::vector<::entt::meta_any>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48> mComponents;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::std::string,
            ::entt::meta_any,
            ::std::less<void>,
            ::std::vector<::std::string>,
            ::std::vector<::entt::meta_any>>>
        mComponents;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool empty() const;
#else // @header-generator platform
    MCAPI bool eraseComponent(::std::string_view name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool eraseComponent(std::string_view);
#else // @header-generator platform
    MCAPI ::entt::meta_any getComponent(::std::string_view name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_any getComponent(std::string_view) const;
#else // @header-generator platform
    MCAPI ::entt::meta_any getComponent(::std::string_view name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::entt::meta_any getComponent(std::string_view);
#else // @header-generator platform
    MCAPI bool operator==(::cereal::ComponentStorage const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasComponent(std::string_view) const;

    MCNAPI ::entt::iterable_adaptor<const std::string*, const std::string*> keys() const;

    MCNAPI bool operator==(::cereal::ComponentStorage const&) const;

    MCNAPI ulong size() const;

    MCNAPI ~ComponentStorage();
#else // @header-generator platform
    MCAPI ~ComponentStorage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
