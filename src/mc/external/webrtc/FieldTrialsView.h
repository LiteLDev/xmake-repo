#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialsView {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FieldTrialsView() = default;

    virtual ::std::string Lookup(::std::string_view key) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool IsDisabled(::std::string_view key) const;

    MCNAPI bool IsEnabled(::std::string_view key) const;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
