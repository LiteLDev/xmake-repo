#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
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
namespace Puv { class ParserBase; }
namespace Puv { class UpgraderBase; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { class VersionRange; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Puv::internal {

class LoaderBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<Puv::ParserBase>>>            mParsers;
    ::ll::TypedStorage<8, 24, std::map<SemVersion, std::unique_ptr<Puv::UpgraderBase>>> mUpgraders;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk8c6785;
    ::ll::UntypedStorage<8, 16> mUnkeaa9c8;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    LoaderBase& operator=(LoaderBase const&);
    LoaderBase(LoaderBase const&);
    LoaderBase();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::LoadResultAny doLoad(::Puv::Input const&, ::SemVersion const&, ::cereal::ContextArea) const;
#else // @header-generator platform
    MCNAPI ::Puv::LoadResultAny
    doLoad(::Puv::Input const& input, ::SemVersion const& parserVersion, ::cereal::ContextArea contextArea) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerParser(std::unique_ptr<Puv::ParserBase>);
#else // @header-generator platform
    MCNAPI void registerParser(::std::unique_ptr<::Puv::ParserBase> parser);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerUpgrader(std::unique_ptr<Puv::UpgraderBase>);
#else // @header-generator platform
    MCNAPI void registerUpgrader(::std::unique_ptr<::Puv::UpgraderBase> upgrader);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Puv::internal
