#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on
#endif // @header-generator platform

class CerealSchemaUpgrade {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                 mTargetVersion;
    ::ll::TypedStorage<8, 24, std::string>      mSchemaKey;
    ::ll::TypedStorage<8, 24, std::string>      mJsonMemberName;
    ::ll::TypedStorage<8, 16, std::string_view> mFileType;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkb0e3c9;
    ::ll::UntypedStorage<8, 32> mUnk40e0d7;
    ::ll::UntypedStorage<8, 32> mUnkc96bdc;
    ::ll::UntypedStorage<8, 16> mUnkd8210b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CerealSchemaUpgrade& operator=(CerealSchemaUpgrade const&);
    CerealSchemaUpgrade(CerealSchemaUpgrade const&);
#endif // @header-generator platform
    CerealSchemaUpgrade();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~CerealSchemaUpgrade();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool previousSchema(::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&) const = 0;
#else // @header-generator platform
    virtual bool previousSchema(
        ::rapidjson::GenericValue<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>> const& component
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void upgradeToNext(::rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>, rapidjson::CrtAllocator>&, ::SemVersion const&) const;
    // clang-format on
#else // @header-generator platform
    virtual void upgradeToNext(
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>& document,
        ::SemVersion const&             documentOriginalVersion
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CerealSchemaUpgrade(std::string_view, ::SemVersion, std::string const&, std::string const&);

    MCNAPI bool checkAndUpgradeToNext(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const;

    MCNAPI ::SemVersion const& getTargetVersion() const;
#else // @header-generator platform
    MCNAPI CerealSchemaUpgrade(
        ::std::string_view   fileType,
        ::SemVersion         targetVersion,
        ::std::string const& schemaKey,
        ::std::string const& jsonMemberName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view, ::SemVersion, std::string const&, std::string const&);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string_view   fileType,
        ::SemVersion         targetVersion,
        ::std::string const& schemaKey,
        ::std::string const& jsonMemberName
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
