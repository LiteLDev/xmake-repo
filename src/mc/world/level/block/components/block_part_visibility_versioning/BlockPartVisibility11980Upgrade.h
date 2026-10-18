#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockCerealSchemaUpgrade.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on

#endif // @header-generator platform
namespace BlockPartVisibilityVersioning {

#if defined(LL_PLAT_A) // @header-generator platform
class BlockPartVisibility11980Upgrade : public ::BlockCerealSchemaUpgrade {};
#else // @header-generator platform
class BlockPartVisibility11980Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool previousSchema(
        ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&
    ) const /*override*/;

    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const /*override*/;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace BlockPartVisibilityVersioning
