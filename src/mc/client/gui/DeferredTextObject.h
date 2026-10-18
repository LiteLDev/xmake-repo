#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class DeferredTextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mParseRawInputCallback;
    ::ll::TypedStorage<8, 32, ::std::string>           mRawText;
    ::ll::TypedStorage<1, 1, bool>                     mRawTextModfied;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setParseRawInputCallback(::std::function<void()> callback);

    MCAPI void setRawText(::std::string const& str);
    // NOLINTEND
};
#else // @header-generator platform
class DeferredTextObject {};
#endif // @header-generator platform
#endif // @header-generator platform
