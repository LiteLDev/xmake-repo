#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/puv/PathElement.h"

namespace Puv::internal {

struct AlterationNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mMap;
    ::ll::UntypedStorage<8, 160> mAlteration;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AlterationNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fill(
        ::Puv::internal::AlterationNode&,
        const std::string*,
        const std::string*,
        std::variant<
            std::monostate,
            std::pair<
                std::function<void(entt::meta_any&, entt::meta_any&)>,
                Bedrock::small_vector<Puv::internal::PathElement, 1>>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
