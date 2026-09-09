#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ReflectedType.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                           mId;
    ::ll::TypedStorage<4, 8, std::optional<cereal::internal::ReflectedType>> mType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    SchemaInfo& operator=(SchemaInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SchemaInfo(::cereal::internal::SchemaInfo const&);

    MCNAPI ~SchemaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::internal::SchemaInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
