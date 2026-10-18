#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Puv::internal {

struct PathElement {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::entt::meta_type> mMetaType;
    ::ll::TypedStorage<4, 4, uint>               mID;
    ::ll::TypedStorage<8, 24, std::string>       mName;
    ::ll::UntypedStorage<4, 4>                   mType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk4e5dd3;
    ::ll::UntypedStorage<4, 4>  mUnk38da85;
    ::ll::UntypedStorage<8, 32> mUnkaa0fe8;
    ::ll::UntypedStorage<4, 4>  mUnkec9b9a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PathElement& operator=(PathElement const&);
    PathElement(PathElement const&);
#endif // @header-generator platform
    PathElement();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& WILDCARD_STRING_VIEW();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Puv::internal
