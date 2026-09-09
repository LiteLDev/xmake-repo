#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
