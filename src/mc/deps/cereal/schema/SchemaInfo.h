#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ReflectedType.h"

namespace cereal::internal {

struct SchemaInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                           mId;
    ::ll::TypedStorage<4, 8, std::optional<cereal::internal::ReflectedType>> mType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                    mDescription;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                               mId;
    ::ll::TypedStorage<4, 8, ::std::optional<::cereal::internal::ReflectedType>> mType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mDescription;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SchemaInfo& operator=(SchemaInfo const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SchemaInfo(::cereal::internal::SchemaInfo const&);

    MCNAPI ~SchemaInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::internal::SchemaInfo const&);
#else // @header-generator platform
    MCAPI ~SchemaInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal::internal
