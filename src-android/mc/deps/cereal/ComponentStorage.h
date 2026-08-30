#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

namespace cereal {

class ComponentStorage {
public:
    // ComponentStorage inner types define
    using StorageType = ::brstd::
        flat_map<std::string, entt::meta_any, std::less<void>, std::vector<std::string>, std::vector<entt::meta_any>>;

    using KeyIterable = ::entt::iterable_adaptor<const std::string*, const std::string*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool empty() const;

    MCNAPI bool eraseComponent(std::string_view);

    MCNAPI ::entt::meta_any getComponent(std::string_view) const;

    MCNAPI ::entt::meta_any getComponent(std::string_view);

    MCNAPI bool hasComponent(std::string_view) const;

    MCNAPI ::entt::iterable_adaptor<const std::string*, const std::string*> keys() const;

    MCNAPI bool operator==(::cereal::ComponentStorage const&) const;

    MCNAPI ulong size() const;

    MCNAPI ~ComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
