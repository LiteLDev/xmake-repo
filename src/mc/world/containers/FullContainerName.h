#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"

struct FullContainerName {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerEnumName> mName;
    ::ll::TypedStorage<4, 8, std::optional<uint>> mDynamicId;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>   mName;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>> mDynamicId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::optional<uint> const& NON_DYNAMIC_ID();
#else // @header-generator platform
    MCAPI ::std::string toString() const;
#endif // @header-generator platform
    // NOLINTEND
};
