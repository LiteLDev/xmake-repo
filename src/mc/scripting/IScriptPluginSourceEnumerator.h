#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IScriptPluginSource;
// clang-format on

class IScriptPluginSourceEnumerator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptPluginSourceEnumerator() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::shared_ptr<IScriptPluginSource>> const& getPluginSources() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::shared_ptr<::IScriptPluginSource>> const& getPluginSources() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
