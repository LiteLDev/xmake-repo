#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IScreenChangedEventing() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventScreenChanged(uint const&, std::string const&, std::unordered_map<std::string, std::string> const&) = 0;
#else // @header-generator platform
    virtual void fireEventScreenChanged(
        uint const&                                               userId,
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventImGuiScreenChanged(std::string const&, std::unordered_map<std::string, std::string> const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void fireEventImGuiScreenChanged(
        ::std::string const&                                      screenName,
        ::std::unordered_map<::std::string, ::std::string> const& additionalProperties
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
