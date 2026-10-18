#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/level/chunk/EntityType.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class Level;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace br::spawn { struct EntityType; }
#endif // @header-generator platform
// clang-format on

namespace br::spawn {

class EntityTypeCache {
public:
    // EntityTypeCache inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum Token : ushort {};
#else // @header-generator platform
    enum class Token : uint {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<br::spawn::EntityType>> mEntityTypes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::br::spawn::EntityType>> mEntityTypes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<br::spawn::EntityTypeCache> from(::Level&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::br::spawn::EntityTypeCache> from(::Level& level);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::spawn
