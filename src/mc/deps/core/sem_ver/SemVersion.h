#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersionBase.h"
#include "mc/deps/core/string/StaticOptimizedString.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
class SemVersionView;
struct SemVersionAnyVersionType;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class SemVersion : public ::SemVersionBase<Bedrock::StaticOptimizedString> {
#else // @header-generator platform
class SemVersion : public ::SemVersionBase<::Bedrock::StaticOptimizedString> {
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    SemVersion();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SemVersion();

    MCNAPI explicit SemVersion(::SemVersionConstant const&);

    MCNAPI explicit SemVersion(::SemVersionView const&);

    MCNAPI SemVersion(::SemVersion&&);

    MCNAPI void
        SemVersionBase(ushort, ushort, ushort, ::Bedrock::StaticOptimizedString, ::Bedrock::StaticOptimizedString);

    MCNAPI ::SemVersion& operator=(::SemVersion const&);
#else // @header-generator platform
    MCAPI explicit SemVersion(::SemVersionConstant const& other);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion::MatchType fromJson(::Json::Value const&, ::SemVersion&, ::SemVersion::ParseOption);
#else // @header-generator platform
    MCAPI static ::SemVersion::MatchType
    fromJson(::Json::Value const& json, ::SemVersion& output, ::SemVersion::ParseOption parseOption);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const&, ::SemVersion&);
#else // @header-generator platform
    MCAPI static ::SemVersion::MatchType fromJsonArray(::Json::Value const& jsonArray, ::SemVersion& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersion::MatchType fromString(std::string const&, ::SemVersion&, ::SemVersion::ParseOption);
#else // @header-generator platform
    MCAPI static ::SemVersion::MatchType
    fromString(::std::string const& src, ::SemVersion& output, ::SemVersion::ParseOption parseOption);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& SemVerRegexStr();
#else // @header-generator platform
    MCAPI static ::std::string_view const& SemVerRegexStr();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SemVersionConstant const&);

    MCNAPI void* $ctor(::SemVersionView const&);

    MCNAPI void* $ctor(::SemVersion&&);
#else // @header-generator platform
    MCAPI void* $ctor(::SemVersionConstant const& other);
#endif // @header-generator platform
    // NOLINTEND
};
