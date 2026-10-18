#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/util/CerealDocumentUpgradeStep.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SemVersion;
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace cereal { struct Schema; }
#endif // @header-generator platform
// clang-format on

class CerealDocumentUpgrader {
public:
    // CerealDocumentUpgrader inner types define
    enum class ParseAndUpgradeResult : int {
        Failure               = 0,
        SuccessWithChanges    = 1,
        SuccessWithoutChanges = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<CerealDocumentUpgradeStep>> mUpgradePatches;
    ::ll::UntypedStorage<8, 24>                                       mTerminus;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk26485c;
    ::ll::UntypedStorage<8, 24> mUnkd5595a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CerealDocumentUpgrader& operator=(CerealDocumentUpgrader const&);
    CerealDocumentUpgrader(CerealDocumentUpgrader const&);
#endif // @header-generator platform
    CerealDocumentUpgrader();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CerealDocumentUpgrader(::SemVersion);

    MCNAPI void clear();

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult parseJsonAndUpgrade(
#if defined(LL_PLAT_A) // @header-generator platform
        ::SemVersion&,
#else // @header-generator platform
        ::SemVersion& outDocumentVersion,
#endif // @header-generator platform
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        std::string const&,
        ::Core::Path const&,
        bool,
        bool,
        std::optional<SemVersion> const&
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&      document,
        ::std::string const&                 json,
        ::Core::Path const&                  resourceName,
        bool                                 allowMissingVersionAsZero,
        bool                                 betaApis,
        ::std::optional<::SemVersion> const& minVersion
#endif // @header-generator platform
    ) const;

    MCNAPI bool parseUpgradeAndStringifyJsonString(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string&,
        ::SemVersion&,
#else // @header-generator platform
        ::std::string& json,
        ::SemVersion&  outDocumentVersion,
#endif // @header-generator platform
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::Core::Path const&,
        bool,
        std::optional<SemVersion> const&
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>&      document,
        ::Core::Path const&                  resourceName,
        bool                                 betaApis,
        ::std::optional<::SemVersion> const& minVersion
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerUpgrade(std::shared_ptr<CerealSchemaUpgrade>);
#else // @header-generator platform
    MCNAPI void registerUpgrade(::std::shared_ptr<::CerealSchemaUpgrade> upgrade);
#endif // @header-generator platform

    MCNAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult upgradeJsonDocument(
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
        ::SemVersion const&             documentVersion
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getVersion(
#else // @header-generator platform
    MCNAPI static ::std::string getVersion(
#endif // @header-generator platform
        ::rapidjson::GenericDocument<
#if defined(LL_PLAT_A) // @header-generator platform
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator> const&
#else // @header-generator platform
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator> const& document
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::pair<
        SemVersion,
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>>
    parseDocument(std::string_view const, bool const, bool const);
#else // @header-generator platform
    MCNAPI static ::std::pair<
        ::SemVersion,
        ::rapidjson::GenericDocument<
            ::rapidjson::UTF8<char>,
            ::rapidjson::MemoryPoolAllocator<::rapidjson::CrtAllocator>,
            ::rapidjson::CrtAllocator>>
    parseDocument(::std::string_view json, bool allowMissingVersionAsZero, bool logRapidjsonErrors);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> stringify(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
#else // @header-generator platform
    MCNAPI static bool validateParsedVersion(
        ::SemVersion const&                  documentVersion,
        ::std::optional<::SemVersion> const& minVersion,
        bool                                 betaApis
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI static bool validateParsedVersion(::SemVersion const&, std::optional<SemVersion> const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion);
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};
