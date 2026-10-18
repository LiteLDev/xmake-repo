#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/util/CerealSchemaUpgrade.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on
#endif // @header-generator platform

class CerealSchemaDeprecate : public ::CerealSchemaUpgrade {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mDeprecateVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk8bda53;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CerealSchemaDeprecate& operator=(CerealSchemaDeprecate const&);
    CerealSchemaDeprecate(CerealSchemaDeprecate const&);
#endif // @header-generator platform
    CerealSchemaDeprecate();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~CerealSchemaDeprecate();
#else // @header-generator platform
    virtual bool previousSchema(
        ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool previousSchema(::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const;

    virtual void upgradeToNext(::rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, ::SemVersion const&) const;
    // clang-format on
#else // @header-generator platform
    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CerealSchemaDeprecate(::SemVersion, std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI CerealSchemaDeprecate(
        ::SemVersion         deprecateVersion,
        ::std::string const& schemaKey,
        ::std::string const& jsonMemberName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SemVersion, std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void*
    $ctor(::SemVersion deprecateVersion, ::std::string const& schemaKey, ::std::string const& jsonMemberName);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $previousSchema(
#if defined(LL_PLAT_A) // @header-generator platform
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
#else // @header-generator platform
        ::rapidjson::
            GenericValue<::rapidjson::UTF8<char>, ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const&
#endif // @header-generator platform
    ) const;

    MCNAPI void $upgradeToNext(
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
