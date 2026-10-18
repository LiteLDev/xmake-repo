#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class IPaperDollUIDefSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollUIDefSource();

    virtual bool getAsBool(std::string_view, bool) const = 0;

    virtual float getAsFloat(std::string_view, float) const = 0;

    virtual std::string getAsString(std::string_view, std::string_view) const = 0;

    virtual void markUnused(std::string_view) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IPaperDollUIDefSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPaperDollUIDefSource() = default;

    virtual bool getAsBool(::std::string_view key, bool defaultValue) const = 0;

    virtual float getAsFloat(::std::string_view key, float defaultValue) const = 0;

    virtual ::std::string getAsString(::std::string_view key, ::std::string_view defaultValue) const = 0;

    virtual void markUnused(::std::string_view key) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IPaperDollUIDefSource {};
#endif // @header-generator platform
#endif // @header-generator platform
