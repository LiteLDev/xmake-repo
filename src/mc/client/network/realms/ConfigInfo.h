#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Realms {

struct ConfigInfo {
public:
    // ConfigInfo inner types declare
    // clang-format off
    struct Version;
    // clang-format on

    // ConfigInfo inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct Version {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> branch;
        ::ll::TypedStorage<8, 24, std::string> reference;
        ::ll::TypedStorage<8, 8, ulong>        releaseDate;
        ::ll::TypedStorage<8, 24, std::string> protocol;
        // NOLINTEND

    public:
        // prevent constructor by default
        Version();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Version(::Realms::ConfigInfo::Version const&);

        MCNAPI bool isValid() const;

        MCNAPI ~Version();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Realms::ConfigInfo::Version const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                              versionReference;
    ::ll::TypedStorage<8, 24, std::vector<Realms::ConfigInfo::Version>> versions;
    // NOLINTEND

public:
    // prevent constructor by default
    ConfigInfo& operator=(ConfigInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ConfigInfo();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Realms::ConfigInfo fromJson(::Json::Value const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    struct Version {};
#endif // @header-generator platform
};

} // namespace Realms
