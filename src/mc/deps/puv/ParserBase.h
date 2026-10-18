#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/puv/VersionRange.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SemVersion;
#endif // @header-generator platform
namespace Puv { class Input; }
namespace Puv { class LoadResultAny; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Puv { class VersionRange; }
#endif // @header-generator platform
// clang-format on

namespace Puv {

class ParserBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mParserVersion;
    ::ll::UntypedStorage<8, 56> mSupportedVersions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkdde19d;
    ::ll::UntypedStorage<8, 56> mUnk480fe1;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ParserBase& operator=(ParserBase const&);
    ParserBase(ParserBase const&);
#endif // @header-generator platform
    ParserBase();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParserBase();
#else // @header-generator platform
    virtual ~ParserBase() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Puv::LoadResultAny doParse(::Puv::Input const&, ::cereal::ContextArea) const = 0;
#else // @header-generator platform
    virtual ::Puv::LoadResultAny doParse(::Puv::Input const& input, ::cereal::ContextArea contextArea) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParserBase(::SemVersion const&, ::Puv::VersionRange);

    MCNAPI ::SemVersion const& parserVersion() const;
#else // @header-generator platform
    MCNAPI ParserBase(::SemVersion const& parserVersion, ::Puv::VersionRange supportedVersions);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SemVersion const&, ::Puv::VersionRange);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::SemVersion const& parserVersion, ::Puv::VersionRange supportedVersions);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Puv
