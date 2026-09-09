#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredTextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>            mParseRawInputCallback;
    ::ll::TypedStorage<8, 24, std::string> mRawText;
    ::ll::TypedStorage<1, 1, bool>         mRawTextModfied;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredTextObject& operator=(DeferredTextObject const&);
    DeferredTextObject(DeferredTextObject const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string const& getRawText() const;

    MCNAPI void setParseRawInputCallback(std::function<void()>);

    MCNAPI void setRawText(std::string const&);

    MCNAPI void tick();
    // NOLINTEND
};
