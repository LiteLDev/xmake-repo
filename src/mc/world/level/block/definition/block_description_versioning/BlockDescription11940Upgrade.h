#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/shared_types/item/CreativeItemCategory.h"
#endif // @header-generator platform
#include "mc/util/BlockCerealSchemaUpgrade.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on
#endif // @header-generator platform

namespace BlockDescriptionVersioning {

#if defined(LL_PLAT_A) // @header-generator platform
class BlockDescription11940Upgrade : public ::BlockCerealSchemaUpgrade {};
#else // @header-generator platform
class BlockDescription11940Upgrade : public ::BlockCerealSchemaUpgrade {
public:
    // BlockDescription11940Upgrade inner types define
    using CreativeItemCategory = ::SharedTypes::CreativeItemCategory;

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
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $previousSchema(
        ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&
    ) const;

    MCAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&
    ) const;


    // NOLINTEND
};
#endif // @header-generator platform

} // namespace BlockDescriptionVersioning
