#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
// clang-format on

class IScriptPluginSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptPluginSource() = default;

    virtual ::PackManifest const& getManifest() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> enumerateScripts(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string> enumerateScripts(::std::string const& extension) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<std::string> loadScript(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::optional<::std::string> loadScript(::std::string const& path) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string removeRootFromPath(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::string removeRootFromPath(::std::string const& path) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
