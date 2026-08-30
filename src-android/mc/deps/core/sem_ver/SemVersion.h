#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/string/StaticOptimizedString.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
class SemVersionView;
struct SemVersionAnyVersionType;
namespace Json { class Value; }
// clang-format on

class SemVersion : public ::SemVersionBase<Bedrock::StaticOptimizedString> {
public:
    // SemVersion inner types define
    enum class MatchType : int {
        Full    = 0,
        Partial = 1,
        None    = 2,
    };

    enum class ParseOption : int {
        AllowWildcards = 0,
        NoWildcards    = 1,
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SemVersion();

    MCNAPI explicit SemVersion(::SemVersionConstant const&);

    MCNAPI explicit SemVersion(::SemVersionView const&);

    MCNAPI SemVersion(::SemVersion&&);

    MCNAPI void
        SemVersionBase(ushort, ushort, ushort, ::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString);

    MCNAPI ::SemVersion& operator=(::SemVersion const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SemVersion::MatchType fromJson(::Json::Value const&, ::SemVersion&, ::SemVersion::ParseOption);

    MCNAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const&, ::SemVersion&);

    MCNAPI static ::SemVersion::MatchType fromString(std::string const&, ::SemVersion&, ::SemVersion::ParseOption);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& SemVerRegexStr();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SemVersionConstant const&);

    MCNAPI void* $ctor(::SemVersionView const&);

    MCNAPI void* $ctor(::SemVersion&&);
    // NOLINTEND
};
