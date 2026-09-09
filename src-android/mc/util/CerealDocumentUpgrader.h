#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/util/CerealDocumentUpgradeStep.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgrade;
namespace Core { class Path; }
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
    ::ll::TypedStorage<8, 24, std::vector<CerealDocumentUpgradeStep>> mUpgradePatches;
    ::ll::UntypedStorage<8, 24>                                       mTerminus;
    // NOLINTEND

public:
    // prevent constructor by default
    CerealDocumentUpgrader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CerealDocumentUpgrader(::SemVersion);

    MCNAPI void clear();

    MCNAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult parseJsonAndUpgrade(
        ::SemVersion&,
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        std::string const&,
        ::Core::Path const&,
        bool,
        bool,
        std::optional<SemVersion> const&
    ) const;

    MCNAPI bool parseUpgradeAndStringifyJsonString(
        std::string&,
        ::SemVersion&,
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::Core::Path const&,
        bool,
        std::optional<SemVersion> const&
    ) const;

    MCNAPI void registerUpgrade(std::shared_ptr<CerealSchemaUpgrade>);

    MCNAPI ::CerealDocumentUpgrader::ParseAndUpgradeResult upgradeJsonDocument(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>&,
        ::SemVersion const&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::string getVersion(
        ::rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator> const&
    );

    MCNAPI static std::pair<
        SemVersion,
        rapidjson::GenericDocument<
            rapidjson::UTF8<char>,
            rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,
            rapidjson::CrtAllocator>>
    parseDocument(std::string_view const, bool const, bool const);

    MCNAPI static ::rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> stringify(
        ::rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> const&
    );

    MCNAPI static bool validateParsedVersion(::SemVersion const&, std::optional<SemVersion> const&, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SemVersion);
    // NOLINTEND
};
