#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class ITextObject {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITextObject() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string asString() const = 0;
#else // @header-generator platform
    virtual ::std::string asString() const = 0;
#endif // @header-generator platform

    virtual ::Json::Value asJsonValue() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value resolve(::ResolveData const&) const = 0;
#else // @header-generator platform
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_OBJECT_KEY();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_OBJECT_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_TEXT_KEY();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_TEXT_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_TRANSLATE_KEY();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_TRANSLATE_KEY();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_WITH_KEY();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_WITH_KEY();
#endif // @header-generator platform
    // NOLINTEND
};
