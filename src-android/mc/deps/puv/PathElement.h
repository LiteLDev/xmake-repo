#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"

namespace Puv::internal {

struct PathElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mMetaType;
    ::ll::TypedStorage<4, 4, uint>               mID;
    ::ll::TypedStorage<8, 24, std::string>       mName;
    ::ll::UntypedStorage<4, 4>                   mType;
    // NOLINTEND

public:
    // prevent constructor by default
    PathElement();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& WILDCARD_STRING_VIEW();
    // NOLINTEND
};

} // namespace Puv::internal
